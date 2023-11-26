// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->top__DOT__reset));
        bufp->chgBit(oldp+1,(vlSelf->top__DOT__update_val));
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__PC),32);
        bufp->chgBit(oldp+3,(vlSelf->top__DOT__update_ghr));
        bufp->chgBit(oldp+4,(vlSelf->top__DOT__increment_entry));
        bufp->chgBit(oldp+5,(vlSelf->top__DOT__decrement_entry));
        bufp->chgSData(oldp+6,((0x7ffU & (vlSelf->top__DOT__PC 
                                          >> 2U))),11);
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgWData(oldp+8,(vlSelf->top__DOT__DUT__DOT__counts),4096);
        bufp->chgSData(oldp+136,(vlSelf->top__DOT__DUT__DOT__ghr),11);
    }
    bufp->chgBit(oldp+137,(vlSelf->clk));
    bufp->chgBit(oldp+138,(vlSelf->linetrace));
    bufp->chgBit(oldp+139,(vlSelf->top__DOT__prediction));
    bufp->chgBit(oldp+140,((3U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h133b37bf__0))));
    bufp->chgBit(oldp+141,((0U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h133b37bf__0))));
    bufp->chgSData(oldp+142,(vlSelf->top__DOT__DUT__DOT__pht_index),11);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
