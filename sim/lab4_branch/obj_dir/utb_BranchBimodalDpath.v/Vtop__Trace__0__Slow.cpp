// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+135,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+136,"linetrace",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+135,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+136,"linetrace",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"reset",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2,"PC",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+137,"prediction",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+138,"entry_upper_reached",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+139,"entry_lower_reached",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3,"increment_entry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+4,"decrement_entry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+140,"y",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+141,"n",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+141,"dc",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->pushNamePrefix("DUT ");
    tracep->declBus(c+142,"PHT_size",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+135,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2,"PC",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+137,"prediction",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+138,"entry_upper_reached",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+139,"entry_lower_reached",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"increment_entry",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"decrement_entry",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+7,"counts",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+5,"pc_index",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 10,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+6,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->top__DOT__reset));
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__PC),32);
    bufp->fullBit(oldp+3,(vlSelf->top__DOT__increment_entry));
    bufp->fullBit(oldp+4,(vlSelf->top__DOT__decrement_entry));
    bufp->fullSData(oldp+5,((0x7ffU & (vlSelf->top__DOT__PC 
                                       >> 2U))),11);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__unnamedblk1__DOT__i),32);
    bufp->fullWData(oldp+7,(vlSelf->top__DOT__DUT__DOT__counts),4096);
    bufp->fullBit(oldp+135,(vlSelf->clk));
    bufp->fullBit(oldp+136,(vlSelf->linetrace));
    bufp->fullBit(oldp+137,(vlSelf->top__DOT__prediction));
    bufp->fullBit(oldp+138,((3U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_haed26521__0))));
    bufp->fullBit(oldp+139,((0U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_haed26521__0))));
    bufp->fullBit(oldp+140,(1U));
    bufp->fullBit(oldp+141,(0U));
    bufp->fullIData(oldp+142,(0x800U),32);
}
