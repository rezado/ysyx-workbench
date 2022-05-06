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
        tracep->declQuad(c+56,"top pc", false,-1, 63,0);
        tracep->declBus(c+4,"top alu_op", false,-1, 11,0);
        tracep->declQuad(c+5,"top alu_src1", false,-1, 63,0);
        tracep->declQuad(c+7,"top alu_src2", false,-1, 63,0);
        tracep->declQuad(c+9,"top rf_wdata", false,-1, 63,0);
        tracep->declBit(c+11,"top ebreak", false,-1);
        tracep->declBit(c+1,"top u_ysyx_22040088_IFU clk", false,-1);
        tracep->declBit(c+2,"top u_ysyx_22040088_IFU rst", false,-1);
        tracep->declQuad(c+56,"top u_ysyx_22040088_IFU pc", false,-1, 63,0);
        tracep->declQuad(c+58,"top u_ysyx_22040088_IFU pc_add", false,-1, 63,0);
        tracep->declBit(c+1,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc clk", false,-1);
        tracep->declBit(c+2,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc rst", false,-1);
        tracep->declQuad(c+58,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_src", false,-1, 63,0);
        tracep->declQuad(c+56,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_out", false,-1, 63,0);
        tracep->declBus(c+126,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+127,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg clk", false,-1);
        tracep->declBit(c+2,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg rst", false,-1);
        tracep->declQuad(c+58,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg din", false,-1, 63,0);
        tracep->declQuad(c+56,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg dout", false,-1, 63,0);
        tracep->declBit(c+129,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc pc_Reg wen", false,-1);
        tracep->declQuad(c+56,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc_adder in", false,-1, 63,0);
        tracep->declQuad(c+58,"top u_ysyx_22040088_IFU u_ysyx_22040088_pc_adder out", false,-1, 63,0);
        tracep->declBit(c+1,"top u_ysyx_22040088_IDU clk", false,-1);
        tracep->declBus(c+3,"top u_ysyx_22040088_IDU inst", false,-1, 31,0);
        tracep->declQuad(c+9,"top u_ysyx_22040088_IDU rf_wdata", false,-1, 63,0);
        tracep->declBus(c+4,"top u_ysyx_22040088_IDU alu_op", false,-1, 11,0);
        tracep->declQuad(c+5,"top u_ysyx_22040088_IDU alu_src1", false,-1, 63,0);
        tracep->declQuad(c+7,"top u_ysyx_22040088_IDU alu_src2", false,-1, 63,0);
        tracep->declBus(c+12,"top u_ysyx_22040088_IDU opcode", false,-1, 6,0);
        tracep->declBus(c+13,"top u_ysyx_22040088_IDU funct3", false,-1, 2,0);
        tracep->declBus(c+14,"top u_ysyx_22040088_IDU rd", false,-1, 4,0);
        tracep->declBus(c+15,"top u_ysyx_22040088_IDU rs1", false,-1, 4,0);
        tracep->declBus(c+16,"top u_ysyx_22040088_IDU rs2", false,-1, 4,0);
        tracep->declBus(c+17,"top u_ysyx_22040088_IDU immI", false,-1, 11,0);
        tracep->declQuad(c+7,"top u_ysyx_22040088_IDU immI_sext", false,-1, 63,0);
        tracep->declBit(c+18,"top u_ysyx_22040088_IDU rf_we", false,-1);
        tracep->declQuad(c+5,"top u_ysyx_22040088_IDU rf_rdata1", false,-1, 63,0);
        tracep->declQuad(c+124,"top u_ysyx_22040088_IDU rf_rdata2", false,-1, 63,0);
        tracep->declBus(c+130,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext IN_WIDTH", false,-1, 31,0);
        tracep->declBus(c+126,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext EXT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+17,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext in", false,-1, 11,0);
        tracep->declQuad(c+7,"top u_ysyx_22040088_IDU u_ysyx_22040088_signext out", false,-1, 63,0);
        tracep->declBus(c+12,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit opcode", false,-1, 6,0);
        tracep->declBus(c+13,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit funct3", false,-1, 2,0);
        tracep->declBus(c+4,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit alu_op", false,-1, 11,0);
        tracep->declBit(c+18,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit rf_we", false,-1);
        tracep->declBit(c+18,"top u_ysyx_22040088_IDU u_ysyx_22040088_controlunit inst_addi", false,-1);
        tracep->declBit(c+1,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile clk", false,-1);
        tracep->declQuad(c+9,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile wdata", false,-1, 63,0);
        tracep->declBus(c+14,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile waddr", false,-1, 4,0);
        tracep->declBit(c+18,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile wen", false,-1);
        tracep->declBus(c+15,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile raddr1", false,-1, 4,0);
        tracep->declBus(c+16,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile raddr2", false,-1, 4,0);
        tracep->declQuad(c+5,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile rdata1", false,-1, 63,0);
        tracep->declQuad(c+124,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile rdata2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+60+i*2,"top u_ysyx_22040088_IDU u_ysyx_22040088_regfile rf", true,(i+0), 63,0);}}
        tracep->declBus(c+4,"top u_ysyx_22040088_EXU alu_op", false,-1, 11,0);
        tracep->declQuad(c+5,"top u_ysyx_22040088_EXU alu_src1", false,-1, 63,0);
        tracep->declQuad(c+7,"top u_ysyx_22040088_EXU alu_src2", false,-1, 63,0);
        tracep->declQuad(c+9,"top u_ysyx_22040088_EXU alu_result", false,-1, 63,0);
        tracep->declBus(c+4,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU alu_control", false,-1, 11,0);
        tracep->declQuad(c+5,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU alu_src1", false,-1, 63,0);
        tracep->declQuad(c+7,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU alu_src2", false,-1, 63,0);
        tracep->declQuad(c+9,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU alu_result", false,-1, 63,0);
        tracep->declBit(c+18,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_add", false,-1);
        tracep->declBit(c+19,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_sub", false,-1);
        tracep->declBit(c+20,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_slt", false,-1);
        tracep->declBit(c+21,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_sltu", false,-1);
        tracep->declBit(c+22,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_and", false,-1);
        tracep->declBit(c+23,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_nor", false,-1);
        tracep->declBit(c+24,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_or", false,-1);
        tracep->declBit(c+25,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_xor", false,-1);
        tracep->declBit(c+26,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_sll", false,-1);
        tracep->declBit(c+27,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_srl", false,-1);
        tracep->declBit(c+28,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_sra", false,-1);
        tracep->declBit(c+29,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU op_lui", false,-1);
        tracep->declQuad(c+30,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU add_sub_result", false,-1, 63,0);
        tracep->declQuad(c+32,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU slt_result", false,-1, 63,0);
        tracep->declQuad(c+34,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU sltu_result", false,-1, 63,0);
        tracep->declQuad(c+36,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU and_result", false,-1, 63,0);
        tracep->declQuad(c+38,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU nor_result", false,-1, 63,0);
        tracep->declQuad(c+40,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU or_result", false,-1, 63,0);
        tracep->declQuad(c+42,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU xor_result", false,-1, 63,0);
        tracep->declQuad(c+44,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU sll_result", false,-1, 63,0);
        tracep->declQuad(c+46,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU srl_result", false,-1, 63,0);
        tracep->declQuad(c+48,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU sra_result", false,-1, 63,0);
        tracep->declQuad(c+50,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU lui_result", false,-1, 63,0);
        tracep->declQuad(c+5,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU adder_a", false,-1, 63,0);
        tracep->declQuad(c+52,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU adder_b", false,-1, 63,0);
        tracep->declBit(c+54,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU adder_cin", false,-1);
        tracep->declQuad(c+30,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU adder_result", false,-1, 63,0);
        tracep->declBit(c+55,"top u_ysyx_22040088_EXU u_ysyx_22040088_ALU adder_cout", false,-1);
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
    VlWide<3>/*95:0*/ __Vtemp25;
    VlWide<3>/*95:0*/ __Vtemp26;
    VlWide<3>/*95:0*/ __Vtemp27;
    VlWide<3>/*95:0*/ __Vtemp28;
    VlWide<3>/*95:0*/ __Vtemp29;
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
        tracep->fullCData(oldp+14,((0x1fU & (vlSelf->__Vcellinp__top__inst 
                                             >> 7U))),5);
        tracep->fullCData(oldp+15,((0x1fU & (vlSelf->__Vcellinp__top__inst 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+16,((0x1fU & (vlSelf->__Vcellinp__top__inst 
                                             >> 0x14U))),5);
        tracep->fullSData(oldp+17,((vlSelf->__Vcellinp__top__inst 
                                    >> 0x14U)),12);
        tracep->fullBit(oldp+18,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi));
        tracep->fullBit(oldp+19,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                        >> 1U))));
        tracep->fullBit(oldp+20,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                        >> 2U))));
        tracep->fullBit(oldp+21,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                        >> 3U))));
        tracep->fullBit(oldp+22,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                        >> 4U))));
        tracep->fullBit(oldp+23,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                        >> 5U))));
        tracep->fullBit(oldp+24,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                        >> 6U))));
        tracep->fullBit(oldp+25,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                        >> 7U))));
        tracep->fullBit(oldp+26,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                        >> 8U))));
        tracep->fullBit(oldp+27,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                        >> 9U))));
        tracep->fullBit(oldp+28,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                        >> 0xaU))));
        tracep->fullBit(oldp+29,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_controlunit__DOT__inst_addi) 
                                        >> 0xbU))));
        tracep->fullQData(oldp+30,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_result),64);
        tracep->fullQData(oldp+32,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__slt_result),64);
        VL_EXTEND_WQ(65,64, __Vtemp18, vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1);
        VL_EXTEND_WQ(65,64, __Vtemp19, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b);
        VL_ADD_W(3, __Vtemp20, __Vtemp18, __Vtemp19);
        VL_EXTEND_WI(65,1, __Vtemp21, (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
        VL_ADD_W(3, __Vtemp22, __Vtemp20, __Vtemp21);
        tracep->fullQData(oldp+34,((QData)((IData)(
                                                   (1U 
                                                    & (~ 
                                                       (1U 
                                                        & __Vtemp22[2U])))))),64);
        tracep->fullQData(oldp+36,((vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                    & vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext)),64);
        tracep->fullQData(oldp+38,((~ vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__or_result)),64);
        tracep->fullQData(oldp+40,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__or_result),64);
        tracep->fullQData(oldp+42,((vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                    ^ vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext)),64);
        tracep->fullQData(oldp+44,((vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                    << (0x3fU & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext)))),64);
        tracep->fullQData(oldp+46,((vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1 
                                    >> (0x3fU & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext)))),64);
        tracep->fullQData(oldp+48,(VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1, 
                                                  (0x3fU 
                                                   & (IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext)))),64);
        tracep->fullQData(oldp+50,((((QData)((IData)(
                                                     (- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext 
                                                                            >> 0x13U))))))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((IData)(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__immI_sext) 
                                                                  << 0xcU))))),64);
        tracep->fullQData(oldp+52,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b),64);
        tracep->fullBit(oldp+54,(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
        VL_EXTEND_WQ(65,64, __Vtemp25, vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__rf_rdata1);
        VL_EXTEND_WQ(65,64, __Vtemp26, vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_b);
        VL_ADD_W(3, __Vtemp27, __Vtemp25, __Vtemp26);
        VL_EXTEND_WI(65,1, __Vtemp28, (IData)(vlSelf->top__DOT__u_ysyx_22040088_EXU__DOT__u_ysyx_22040088_ALU__DOT__adder_cin));
        VL_ADD_W(3, __Vtemp29, __Vtemp27, __Vtemp28);
        tracep->fullBit(oldp+55,((1U & __Vtemp29[2U])));
        tracep->fullQData(oldp+56,(vlSelf->__Vcellout__top__pc),64);
        tracep->fullQData(oldp+58,((4ULL + vlSelf->__Vcellout__top__pc)),64);
        tracep->fullQData(oldp+60,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[0]),64);
        tracep->fullQData(oldp+62,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[1]),64);
        tracep->fullQData(oldp+64,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[2]),64);
        tracep->fullQData(oldp+66,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[3]),64);
        tracep->fullQData(oldp+68,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[4]),64);
        tracep->fullQData(oldp+70,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[5]),64);
        tracep->fullQData(oldp+72,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[6]),64);
        tracep->fullQData(oldp+74,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[7]),64);
        tracep->fullQData(oldp+76,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[8]),64);
        tracep->fullQData(oldp+78,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[9]),64);
        tracep->fullQData(oldp+80,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[10]),64);
        tracep->fullQData(oldp+82,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[11]),64);
        tracep->fullQData(oldp+84,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[12]),64);
        tracep->fullQData(oldp+86,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[13]),64);
        tracep->fullQData(oldp+88,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[14]),64);
        tracep->fullQData(oldp+90,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[15]),64);
        tracep->fullQData(oldp+92,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[16]),64);
        tracep->fullQData(oldp+94,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[17]),64);
        tracep->fullQData(oldp+96,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[18]),64);
        tracep->fullQData(oldp+98,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[19]),64);
        tracep->fullQData(oldp+100,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[20]),64);
        tracep->fullQData(oldp+102,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[21]),64);
        tracep->fullQData(oldp+104,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[22]),64);
        tracep->fullQData(oldp+106,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[23]),64);
        tracep->fullQData(oldp+108,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[24]),64);
        tracep->fullQData(oldp+110,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[25]),64);
        tracep->fullQData(oldp+112,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[26]),64);
        tracep->fullQData(oldp+114,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[27]),64);
        tracep->fullQData(oldp+116,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[28]),64);
        tracep->fullQData(oldp+118,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[29]),64);
        tracep->fullQData(oldp+120,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[30]),64);
        tracep->fullQData(oldp+122,(vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf[31]),64);
        tracep->fullQData(oldp+124,(((0U == (0x1fU 
                                             & (vlSelf->__Vcellinp__top__inst 
                                                >> 0x14U)))
                                      ? 0ULL : vlSelf->top__DOT__u_ysyx_22040088_IDU__DOT__u_ysyx_22040088_regfile__DOT__rf
                                     [(0x1fU & (vlSelf->__Vcellinp__top__inst 
                                                >> 0x14U))])),64);
        tracep->fullIData(oldp+126,(0x40U),32);
        tracep->fullQData(oldp+127,(0x80000000ULL),64);
        tracep->fullBit(oldp+129,(1U));
        tracep->fullIData(oldp+130,(0xcU),32);
    }
}
