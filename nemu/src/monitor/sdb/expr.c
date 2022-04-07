#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum {
  TK_NOTYPE = 256, TK_EQ,

  /* TODO: Add more token types */
  TK_INTEGER,
};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */
  
  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // plus
  {"-", '-'},           // substract
  {"\\*", '*'},         // multiple
  {"/", '/'},           // divide
  {"\\(", '('},         // left bracket
  {"\\)", ')'},         // right bracket
  {"[0-9]+", TK_INTEGER},       // demical integer
  {"==", TK_EQ},        // equal
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

static Token tokens[32] __attribute__((used)) = {};
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

        printf("matched! %s\n", rules[i].regex);

        switch (rules[i].token_type) {
          case(TK_NOTYPE): break;
          case('+'): {
            Token *p = (Token*)malloc(sizeof(Token));
            p->type = '+';
            tokens[nr_token++] = *p;
            break;
          }
          case('-'): {
            Token *p = (Token*)malloc(sizeof(Token));
            p->type = '-';
            tokens[nr_token++] = *p;
            break;
          }
          case('*'): {
            Token *p = (Token*)malloc(sizeof(Token));
            p->type = '*';
            tokens[nr_token++] = *p;
            break;
          }
          case('/'): {
            Token *p = (Token*)malloc(sizeof(Token));
            p->type = '/';
            tokens[nr_token++] = *p;
            break;
          }
          case('('): {
            Token *p = (Token*)malloc(sizeof(Token));
            p->type = '(';
            tokens[nr_token++] = *p;
            break;
          }
          case(')'): {
            Token *p = (Token*)malloc(sizeof(Token));
            p->type = ')';
            tokens[nr_token++] = *p;
            break;
          }
          case(TK_INTEGER): {
            if (substr_len > 31) {
              // too big
              assert(0);
            }
            else {
              Token *p = (Token*)malloc(sizeof(Token));
              p->type = TK_INTEGER;
              strncpy(p->str, substr_start, substr_len);
              p->str[substr_len + 1] = '\0';
              tokens[nr_token++] = *p;
            }
            break;
          }
          default: TODO();
        }
        printf("token[%d]:\ntype:%c\nstr:%s\n", nr_token, tokens[nr_token].type, tokens[nr_token].str);

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
        if (stack[top] == p && i == q) surround = true;
        top--;  // pop
      }
      else {
        *legal = false;
        break;
      }
    }
  }
  return *legal & surround;
}

int get_mainoperator_pos(int p, int q) {
  bool in_par = false;
  int presence = 3;  // 最低级
  int pos = p;
  /*
    各运算符优先级：
    * / : 1
    + - : 2
  */

  for (int i = p; i <= q; i++) {
    if (tokens[i].type == '(')
      in_par = true;
    if (tokens[i].type == ')')
      in_par = false;
    
    if (in_par) continue;  // 不处理括号中的运算符
    if (tokens[i].type == '+' || tokens[i].type == '-') {
      if (presence >= 2) {
        pos = i;
        presence = 2;
      }
    }
    if (tokens[i].type == '*' || tokens[i].type == '/') {
      if (presence >= 1) {
        pos = i;
        presence = 1;
      }
    }
  }
  return pos;
}

int eval(int p, int q, bool *legal) {
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
    int t = atoi(tokens[p].str);
    return t;
  }
  else if (check_parentheses(p, q, legal) == true) {
    /* The expression is surrounded by a matched pair of parentheses.
     * If that is the case, just throw away the parentheses.
     */
    return eval(p + 1, q - 1, legal);
  }
  else if (*legal) {
    int op = get_mainoperator_pos(p, q);
    int val1 = eval(p, op - 1, legal);
    int val2 = eval(op + 1, q, legal);

    char op_type = tokens[op].type;
    switch (op_type) {
      case '+': return val1 + val2;
      case '-': return val1 - val2;
      case '*': return val1 * val2;
      case '/': return val1 / val2;
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

  /* TODO: Insert codes to evaluate the expression. */
  bool legal = true;
  int val = eval(0, nr_token - 1, &legal);
  if (!legal) {
    printf("表达式不正确\n");
    *success = false;
  }

  return val;
}
