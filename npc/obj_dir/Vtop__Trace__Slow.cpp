// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_sc.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceInitTop(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"top clk", false,-1);
        tracep->declBit(c+2,"top rst", false,-1);
        tracep->declBus(c+3,"top inst", false,-1, 31,0);
        tracep->declQuad(c+57,"top pc", false,-1, 63,0);
        tracep->declBus(c+4,"top alu_op", false,-1, 11,0);
        tracep->declQuad(c+5,"top alu_src1", false,-1, 63,0);
        tracep->declQuad(c+7,"top alu_src2", false,-1, 63,0);
        tracep->declQuad(c+9,"top rf_wdata", false,-1, 63,0);
        tracep->declBit(c+11,"top ebreak", false,-1);
        tracep->declBit(c+1,"top u_ysyx_22040088_IFU clk", false,-1);
        tracep->declBit(c+2,"top u_ysyx_22040088_IFU rst", false,-1);
        tracep->declQuad(c+57,"top u_ysyx_22040088_IFU pc", false,-1, 63,0);
        tracep->declQuad(c+59,"top u_ysyx_22040088_IFU pc_add", false,-1, 63,0);
        tracep->declBit(c+1,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc clk", false,-1);
        tracep->declBit(c+2,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc rst", false,-1);
        tracep->declQuad(c+59,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_src", false,-1, 63,0);
        tracep->declQuad(c+57,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_out", false,-1, 63,0);
        tracep->declBus(c+127,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+128,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg clk", false,-1);
        tracep->declBit(c+2,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg rst", false,-1);
        tracep->declQuad(c+59,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg din", false,-1, 63,0);
        tracep->declQuad(c+57,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg dout", false,-1, 63,0);
        tracep->declBit(c+130,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg wen", false,-1);
        tracep->declQuad(c+57,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc_adder in", false,-1, 63,0);
        tracep->declQuad(c+59,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc_adder out", false,-1, 63,0);
        tracep->declBit(c+1,"top u_ysyx_22040088_IDU clk", false,-1);
        tracep->declBit(c+2,"top u_ysyx_22040088_IDU rst", false,-1);
        tracep->declBus(c+3,"top u_ysyx_22040088_IDU inst", false,-1, 31,0);
        tracep->declQuad(c+9,"top u_ysyx_22040088_IDU rf_wdata", false,-1, 63,0);
        tracep->declBus(c+4,"top u_ysyx_22040088_IDU alu_op", false,-1, 11,0);
        tracep->declQuad(c+5,"top u_ysyx_22040088_IDU alu_src1", false,-1, 63,0);
        tracep->declQuad(c+7,"top u_ysyx_22040088_IDU alu_src2", false,-1, 63,0);
        tracep->declBus(c+12,"top u_ysyx_22040088_IDU opcode", false,-1, 6,0);
        tracep->declBus(c+13,"top u_ysyx_22040088_IDU funct3", false,-1, 2,0);
        tracep->declBus(c+14,"top u_ysyx_22040088_IDU funct7", false,-1, 6,0);
        tracep->declBus(c+15,"top u_ysyx_22040088_IDU rd", false,-1, 4,0);
        tracep->declBus(c+16,"top u_ysyx_22040088_IDU rs1", false,-1, 4,0);
        tracep->declBus(c+17,"top u_ysyx_22040088_IDU rs2", false,-1, 4,0);
        tracep->declBus(c+18,"top u_ysyx_22040088_IDU immI", false,-1, 11,0);
        tracep->declQuad(c+7,"top u_ysyx_22040088_IDU immI_sext", false,-1, 63,0);
        tracep->declBit(c+19,"top u_ysyx_22040088_IDU rf_we", false,-1);
        tracep->declQuad(c+5,"top u_ysyx_22040088_IDU rf_rdata1", false,-1, 63,0);
        tracep->declQuad(c+125,"top u_ysyx_22040088_IDU rf_rdata2", false,-1, 63,0);
        tracep->declBus(c+131,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext IN_WIDTH", false,-1, 31,0);
        tracep->declBus(c+127,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext EXT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+18,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext in", false,-1, 11,0);
        tracep->declQuad(c+7,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext out", false,-1, 63,0);
        tracep->declBus(c+12,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit opcode", false,-1, 6,0);
        tracep->declBus(c+13,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit funct3", false,-1, 2,0);
        tracep->declBus(c+14,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit funct7", false,-1, 6,0);
        tracep->declBus(c+4,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit alu_op", false,-1, 11,0);
        tracep->declBit(c+19,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit rf_we", false,-1);
        tracep->declBit(c+19,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_addi", false,-1);
        tracep->declBit(c+1,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile clk", false,-1);
        tracep->declQuad(c+9,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile wdata", false,-1, 63,0);
        tracep->declBus(c+15,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile waddr", false,-1, 4,0);
        tracep->declBit(c+19,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile wen", false,-1);
        tracep->declBus(c+16,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile raddr1", false,-1, 4,0);
        tracep->declBus(c+17,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile raddr2", false,-1, 4,0);
        tracep->declQuad(c+5,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile rdata1", false,-1, 63,0);
        tracep->declQuad(c+125,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile rdata2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+61+i*2,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile rf", true,(i+0), 63,0);}}
        tracep->declBit(c+1,"top u_ysyx_22040088_EXU clk", false,-1);
        tracep->declBit(c+2,"top u_ysyx_22040088_EXU rst", false,-1);
        tracep->declBus(c+4,"top u_ysyx_22040088_EXU alu_op", false,-1, 11,0);
        tracep->declQuad(c+5,"top u_ysyx_22040088_EXU alu_src1", false,-1, 63,0);
        tracep->declQuad(c+7,"top u_ysyx_22040088_EXU alu_src2", false,-1, 63,0);
        tracep->declQuad(c+9,"top u_ysyx_22040088_EXU alu_result", false,-1, 63,0);
        tracep->declBus(c+4,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU alu_control", false,-1, 11,0);
        tracep->declQuad(c+5,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU alu_src1", false,-1, 63,0);
        tracep->declQuad(c+7,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU alu_src2", false,-1, 63,0);
        tracep->declQuad(c+9,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU alu_result", false,-1, 63,0);
        tracep->declBit(c+19,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_add", false,-1);
        tracep->declBit(c+20,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_sub", false,-1);
        tracep->declBit(c+21,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_slt", false,-1);
        tracep->declBit(c+22,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_sltu", false,-1);
        tracep->declBit(c+23,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_and", false,-1);
        tracep->declBit(c+24,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_nor", false,-1);
        tracep->declBit(c+25,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_or", false,-1);
        tracep->declBit(c+26,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_xor", false,-1);
        tracep->declBit(c+27,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_sll", false,-1);
        tracep->declBit(c+28,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_srl", false,-1);
        tracep->declBit(c+29,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_sra", false,-1);
        tracep->declBit(c+30,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_lui", false,-1);
        tracep->declQuad(c+31,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU add_sub_result", false,-1, 63,0);
        tracep->declQuad(c+33,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU slt_result", false,-1, 63,0);
        tracep->declQuad(c+35,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU sltu_result", false,-1, 63,0);
        tracep->declQuad(c+37,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU and_result", false,-1, 63,0);
        tracep->declQuad(c+39,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU nor_result", false,-1, 63,0);
        tracep->declQuad(c+41,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU or_result", false,-1, 63,0);
        tracep->declQuad(c+43,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU xor_result", false,-1, 63,0);
        tracep->declQuad(c+45,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU sll_result", false,-1, 63,0);
        tracep->declQuad(c+47,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU srl_result", false,-1, 63,0);
        tracep->declQuad(c+49,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU sra_result", false,-1, 63,0);
        tracep->declQuad(c+51,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU lui_result", false,-1, 63,0);
        tracep->declQuad(c+5,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU adder_a", false,-1, 63,0);
        tracep->declQuad(c+53,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU adder_b", false,-1, 63,0);
        tracep->declBit(c+55,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU adder_cin", false,-1);
        tracep->declQuad(c+31,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU adder_result", false,-1, 63,0);
        tracep->declBit(c+56,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU adder_cout", false,-1);
    }
}

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtop___024root__traceRegister(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtop___024root__traceCleanup, vlSelf);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp18;
    VlWide<3>/*95:0*/ __Vtemp19;
    VlWide<3>/*95:0*/ __Vtemp20;
    VlWide<3>/*95:0*/ __Vtemp21;
    VlWide<3>/*95:0*/ __Vtemp22;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->__Vcellinp__top__clk));
        tracep->fullBit(oldp+2,(vlSelf->__Vcellinp__top__rst));
        tracep->fullIData(oldp+3,(vlSelf->__Vcellinp__top__inst),32);
        tracep->fullSData(oldp+4,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi),12);
        tracep->fullQData(oldp+5,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1),64);
        tracep->fullQData(oldp+7,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext),64);
        tracep->fullQData(oldp+9,(vlSelf->top__DOT__rf_wdata),64);
        tracep->fullBit(oldp+11,((0x100073U == vlSelf->__Vcellinp__top__inst)));
        tracep->fullCData(oldp+12,((0x7fU & vlSelf->__Vcellinp__top__inst)),7);
        tracep->fullCData(oldp+13,((7U & (vlSelf->__Vcellinp__top__inst 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+14,((vlSelf->__Vcellinp__top__inst 
                                    >> 0x19U)),7);
        tracep->fullCData(oldp+15,((0x1fU & (vlSelf->__Vcellinp__top__inst 
                                             >> 7U))),5);
        tracep->fullCData(oldp+16,((0x1fU & (vlSelf->__Vcellinp__top__inst 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+17,((0x1fU & (vlSelf->__Vcellinp__top__inst 
                                             >> 0x14U))),5);
        tracep->fullSData(oldp+18,((vlSelf->__Vcellinp__top__inst 
                                    >> 0x14U)),12);
        tracep->fullBit(oldp+19,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi));
        tracep->fullBit(oldp+20,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                        >> 1U))));
        tracep->fullBit(oldp+21,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                        >> 2U))));
        tracep->fullBit(oldp+22,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                        >> 3U))));
        tracep->fullBit(oldp+23,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                        >> 4U))));
        tracep->fullBit(oldp+24,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                        >> 5U))));
        tracep->fullBit(oldp+25,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                        >> 6U))));
        tracep->fullBit(oldp+26,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                        >> 7U))));
        tracep->fullBit(oldp+27,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                        >> 8U))));
        tracep->fullBit(oldp+28,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                        >> 9U))));
        tracep->fullBit(oldp+29,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                        >> 0xaU))));
        tracep->fullBit(oldp+30,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                        >> 0xbU))));
        tracep->fullQData(oldp+31,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_result),64);
        tracep->fullQData(oldp+33,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__slt_result),64);
        tracep->fullQData(oldp+35,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__sltu_result),64);
        tracep->fullQData(oldp+37,((vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                    & vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext)),64);
        tracep->fullQData(oldp+39,((~ vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__or_result)),64);
        tracep->fullQData(oldp+41,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__or_result),64);
        tracep->fullQData(oldp+43,((vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                    ^ vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext)),64);
        tracep->fullQData(oldp+45,((vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                    << (0x3fU & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext)))),64);
        tracep->fullQData(oldp+47,((vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                    >> (0x3fU & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext)))),64);
        tracep->fullQData(oldp+49,(VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1, 
                                                  (0x3fU 
                                                   & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext)))),64);
        tracep->fullQData(oldp+51,((((QData)((IData)(
                                                     (- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext 
                                                                            >> 0x13U))))))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext) 
                                                                  << 0xcU))))),64);
        tracep->fullQData(oldp+53,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b),64);
        tracep->fullBit(oldp+55,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
        VL_EXTEND_WQ(65,64, __Vtemp18, vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1);
        VL_EXTEND_WQ(65,64, __Vtemp19, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b);
        VL_ADD_W(3, __Vtemp20, __Vtemp18, __Vtemp19);
        VL_EXTEND_WI(65,1, __Vtemp21, (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
        VL_ADD_W(3, __Vtemp22, __Vtemp20, __Vtemp21);
        tracep->fullBit(oldp+56,((1U & __Vtemp22[2U])));
        tracep->fullQData(oldp+57,(vlSelf->__Vcellout__top__pc),64);
        tracep->fullQData(oldp+59,((4ULL + vlSelf->__Vcellout__top__pc)),64);
        tracep->fullQData(oldp+61,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[0]),64);
        tracep->fullQData(oldp+63,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[1]),64);
        tracep->fullQData(oldp+65,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[2]),64);
        tracep->fullQData(oldp+67,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[3]),64);
        tracep->fullQData(oldp+69,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[4]),64);
        tracep->fullQData(oldp+71,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[5]),64);
        tracep->fullQData(oldp+73,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[6]),64);
        tracep->fullQData(oldp+75,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[7]),64);
        tracep->fullQData(oldp+77,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[8]),64);
        tracep->fullQData(oldp+79,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[9]),64);
        tracep->fullQData(oldp+81,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[10]),64);
        tracep->fullQData(oldp+83,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[11]),64);
        tracep->fullQData(oldp+85,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[12]),64);
        tracep->fullQData(oldp+87,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[13]),64);
        tracep->fullQData(oldp+89,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[14]),64);
        tracep->fullQData(oldp+91,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[15]),64);
        tracep->fullQData(oldp+93,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[16]),64);
        tracep->fullQData(oldp+95,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[17]),64);
        tracep->fullQData(oldp+97,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[18]),64);
        tracep->fullQData(oldp+99,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[19]),64);
        tracep->fullQData(oldp+101,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[20]),64);
        tracep->fullQData(oldp+103,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[21]),64);
        tracep->fullQData(oldp+105,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[22]),64);
        tracep->fullQData(oldp+107,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[23]),64);
        tracep->fullQData(oldp+109,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[24]),64);
        tracep->fullQData(oldp+111,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[25]),64);
        tracep->fullQData(oldp+113,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[26]),64);
        tracep->fullQData(oldp+115,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[27]),64);
        tracep->fullQData(oldp+117,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[28]),64);
        tracep->fullQData(oldp+119,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[29]),64);
        tracep->fullQData(oldp+121,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[30]),64);
        tracep->fullQData(oldp+123,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[31]),64);
        tracep->fullQData(oldp+125,(((0U == (0x1fU 
                                             & (vlSelf->__Vcellinp__top__inst 
                                                >> 0x14U)))
                                      ? 0ULL : vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf
                                     [(0x1fU & (vlSelf->__Vcellinp__top__inst 
                                                >> 0x14U))])),64);
        tracep->fullIData(oldp+127,(0x40U),32);
        tracep->fullQData(oldp+128,(0x80000000ULL),64);
        tracep->fullBit(oldp+130,(1U));
        tracep->fullIData(oldp+131,(0xcU),32);
    }
}
