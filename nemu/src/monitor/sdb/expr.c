#include <isa.h>
#include <memory/vaddr.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum {
  TK_NOTYPE = 0,

  /* TODO: Add more token types */
  TK_DEC,
  TK_HEX,
  TK_REG,
  TK_NE,
  TK_AND,
  TK_OR,
  TK_NOR,
  TK_EQ,
  TK_LE,
  TK_GE,
  TK_LT,
  TK_GT,
  TK_SL,
  TK_SR,
  TK_BAND,
  TK_BOR,
  TK_BNOR,
  TK_DEREF,
};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */
  
  {" +", TK_NOTYPE},    // spaces
  {"\\b0[xX][0-9a-fA-F]+\\b", TK_HEX},  // hexadecimal-number
  {"\\b[0-9]+\\b", TK_DEC},       // decimal-number
  {"\\$(\\w+)", TK_REG},  // reg_name
  {"\\(", '('},         // left bracket
  {"\\)", ')'},         // right bracket
  {"\\+", '+'},         // plus
  {"-", '-'},           // substract
  {"\\*", '*'},         // multiple
  {"/", '/'},           // divide
  {"==", TK_EQ},        // equal
  {"!=", TK_NE},        // not equal
  {"<=", TK_LE},        // less equal
  {">=", TK_GE},        // greater equal
  {"&&", TK_AND},       // logical and
  {"||", TK_OR},        // logical or
  {"<<", TK_SL},        // shift left
  {">>", TK_SR},        // shift right
  {"&", TK_BAND},       // bit and
  {"|", TK_BOR},        // bit or
  {"^", TK_BNOR},       // bit nor

};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[65536] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        // printf("matched! %s\n", rules[i].regex);

        switch (rules[i].token_type) {
          case(TK_NOTYPE): break;
          case('+'): case('-'): case('*'): case('/'): case('('): case(')'):
          case(TK_EQ): case(TK_NE): case(TK_LE): case(TK_GE):
          case(TK_AND): case(TK_OR): case(TK_BAND):
          case(TK_BNOR): case(TK_BOR): case(TK_SL): case(TK_SR): {
            Token *p = (Token*)malloc(sizeof(Token));
            p->type = rules[i].token_type;
            tokens[nr_token++] = *p;
            break;
          }
          case(TK_DEC): case(TK_HEX): case(TK_REG): {
            if (substr_len > 31) {
              // too big
              assert(0);
            }
            else {
              Token *p = (Token*)malloc(sizeof(Token));
              p->type = rules[i].token_type;
              strncpy(p->str, substr_start, substr_len);
              p->str[substr_len + 1] = '\0';
              tokens[nr_token++] = *p;
            }
            break;
          }
          default: TODO();
        }

        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}

// check parentheses pair
bool check_parentheses(int p, int q, bool *legal) {
  *legal = true;
  bool surround = false;
  int stack[50];
  int top = 0;  // initial stack
  for (int i = p; i <= q; i++) {
    if (tokens[i].type == '(') {
      stack[top++] = i; // push
    }
    if (tokens[i].type == ')') {
      if (top >= 0) {
        top--;  // pop
        if (stack[top] == p && i == q) surround = true;
      }
      else {
        *legal = false;
        break;
      }
    }
  }
  if (top == 0)
    *legal = true;
  else *legal = false;
  return *legal & surround;
}

int get_mainoperator_pos(int p, int q) {
  int par_num = 0;
  int presence = 0;  // 最高级
  int pos = p;
  /*
    各运算符优先级：
    *(解引用)          : 0
    * /               : 1
    + -               : 2
    << >>             : 3
    > >= < <= == !=   : 4
    &                 : 5
    ^                 : 6
    |                 : 7
    &&                : 8
    ||                : 9
  */

  for (int i = p; i <= q; i++) {
    // 这里要考虑多重括号的情况，所以要有计数
    if (tokens[i].type == '(')
      par_num++;
    if (tokens[i].type == ')')
      par_num--;
    // printf("par_num:%d\n", par_num);
    
    if (par_num) continue;  // 不处理括号中的运算符

    // 按照优先级递减顺序确定主运算符
    if (tokens[i].type == TK_DEREF) {
      if (presence <= 0) {
        pos = i;
        presence = 0;
      }
    }

    if (tokens[i].type == '*' || tokens[i].type == '/') {
      if (presence <= 1) {
        pos = i;
        presence = 1;
      }
    }

    if (tokens[i].type == '+' || tokens[i].type == '-') {
      if (presence  <= 2) {
        pos = i;
        presence = 2;
      }
    }

    if (tokens[i].type == TK_SL || tokens[i].type == TK_SR) {
      if (presence <= 3) {
        pos = i;
        presence = 3;
      }
    }

    if (tokens[i].type == TK_GT || tokens[i].type == TK_LT
      || tokens[i].type == TK_EQ || tokens[i].type == TK_NE
      || tokens[i].type == TK_GE || tokens[i].type == TK_LE) {
        if (presence <= 4) {
          pos = i;
          presence = 4;
        }
      }

    if (tokens[i].type == TK_BAND) {
      if (presence <= 5) {
        pos = i;
        presence = 5;
      }
    }

    if (tokens[i].type == TK_BNOR) {
      if (presence <= 6) {
        pos = i;
        presence = 6;
      }
    }

    if (tokens[i].type == TK_BOR) {
      if (presence <= 7) {
        pos = i;
        presence = 7;
      }
    }

    if (tokens[i].type == TK_AND) {
      if (presence <= 8) {
        pos = i;
        presence = 8;
      }
    }

    if (tokens[i].type == TK_OR) {
      if (presence <= 9) {
        pos = i;
        presence = 9;
      }
    }
  }
  return pos;
}

word_t eval(word_t p, word_t q, bool *legal) {
  if (p > q) {
    /* Bad expression */
    *legal = false;
    return 0;
  }
  else if (p == q) {
    /* Single token.
     * For now this token should be a number.
     * Return the value of the number.
     */
    switch (tokens[p].type) {
      case TK_HEX: return strtoll(tokens[p].str, NULL, 16);
      case TK_DEC: return strtoll(tokens[p].str, NULL, 10);
      case TK_REG: {
        bool success = false;
        word_t tmp = isa_reg_str2val(tokens[p].str, &success);
        if (!success) assert(0);
        return tmp;
      }
      default: assert(0);
    }
  }
  else if (check_parentheses(p, q, legal) == true) {
    /* The expression is surrounded by a matched pair of parentheses.
     * If that is the case, just throw away the parentheses.
     */
    return eval(p + 1, q - 1, legal);
  }
  else if (*legal) {
    int op = get_mainoperator_pos(p, q);
    // printf("(%u-%u):main operator %c at %d\n", p, q, tokens[op].type, op);
    // 指针解引用
    if (tokens[op].type == TK_DEREF) {
      word_t val = eval(op + 1, q, legal);
      return vaddr_read(val, 64);
    }

    word_t val1 = eval(p, op - 1, legal);
    word_t val2 = eval(op + 1, q, legal);

    // printf("%u %c %u\n", val1, tokens[op].type, val2);

    char op_type = tokens[op].type;
    switch (op_type) {
      case '+': return val1 + val2;
      case '-': return val1 - val2;
      case '*': return val1 * val2;
      case '/': return val1 / val2;
      case TK_EQ: return val1 == val2;
      case TK_AND: return val1 && val2;
      case TK_BAND: return val1 & val2;
      case TK_BNOR: return val1 ^ val2;
      case TK_BOR: return val1 | val2;
      case TK_GE: return val1 >= val2;
      case TK_GT: return val1 > val2;
      case TK_LE: return val1 <= val2;
      case TK_LT: return val1 < val2;
      case TK_NE: return val1 != val2;
      case TK_NOR: return val1 ^ val2;
      case TK_OR: return val1 || val2;
      case TK_SL: return val1 << val2;
      case TK_SR: return val1 >> val2;
      default: assert(0);
    }
  }
  else return 0;
}

word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */;
  bool legal = true;
  for (int i = 0; i < nr_token; i ++) {
    if (tokens[i].type == '*' && (i == 0 || tokens[i - 1].type == TK_AND 
    || tokens[i - 1].type == TK_BAND || tokens[i - 1].type == TK_BNOR || tokens[i - 1].type == TK_BOR
    || tokens[i - 1].type == TK_DEREF || tokens[i - 1].type == TK_EQ || tokens[i - 1].type == TK_GE
    || tokens[i - 1].type == TK_GT || tokens[i - 1].type == TK_LE || tokens[i - 1].type == TK_LT
    || tokens[i - 1].type == TK_NE || tokens[i - 1].type == TK_NOR || tokens[i - 1].type == TK_OR
    || tokens[i - 1].type == TK_SL || tokens[i - 1].type == TK_SR || tokens[i - 1].type == '+'
    || tokens[i - 1].type == '-' || tokens[i - 1].type == '*' || tokens[i - 1].type == '/') ) {
      tokens[i].type = TK_DEREF;
    }
  }
  word_t val = eval(0, nr_token - 1, &legal);
  if (!legal) {
    printf("表达式不正确\n");
    *success = false;
  }

  return val;
}
