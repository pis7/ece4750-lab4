// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->top__DOT____Vtogcov__clk))) {
        vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__clk = vlSelf->clk;
    }
    if (((IData)(vlSelf->linetrace) ^ (IData)(vlSelf->top__DOT____Vtogcov__linetrace))) {
        vlSymsp->__Vcoverage[1].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__linetrace = vlSelf->linetrace;
    }
    if (((IData)(vlSelf->top__DOT__reset) ^ (IData)(vlSelf->top__DOT____Vtogcov__reset))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reset = vlSelf->top__DOT__reset;
    }
    if (((IData)(vlSelf->top__DOT__update_val) ^ (IData)(vlSelf->top__DOT____Vtogcov__update_val))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__update_val = vlSelf->top__DOT__update_val;
    }
    if (((IData)(vlSelf->top__DOT__update_ghr) ^ (IData)(vlSelf->top__DOT____Vtogcov__update_ghr))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__update_ghr = vlSelf->top__DOT__update_ghr;
    }
    if (((IData)(vlSelf->top__DOT__increment_entry) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__increment_entry))) {
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__increment_entry 
            = vlSelf->top__DOT__increment_entry;
    }
    if (((IData)(vlSelf->top__DOT__decrement_entry) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__decrement_entry))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__decrement_entry 
            = vlSelf->top__DOT__decrement_entry;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ghr) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr)))) {
        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr 
            = ((0x7feU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ghr)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ghr) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr)))) {
        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr 
            = ((0x7fdU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ghr)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__ghr) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr)))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr 
            = ((0x7fbU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__ghr)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__ghr) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr)))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr 
            = ((0x7f7U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__ghr)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__ghr) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr)))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr 
            = ((0x7efU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__ghr)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__ghr) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr)))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr 
            = ((0x7dfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__ghr)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__ghr) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr)))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr 
            = ((0x7bfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__ghr)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__DUT__DOT__ghr) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr)))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr 
            = ((0x77fU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr)) 
               | (0x80U & (IData)(vlSelf->top__DOT__DUT__DOT__ghr)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__DUT__DOT__ghr) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr)))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr 
            = ((0x6ffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr)) 
               | (0x100U & (IData)(vlSelf->top__DOT__DUT__DOT__ghr)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__DUT__DOT__ghr) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr)))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr 
            = ((0x5ffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr)) 
               | (0x200U & (IData)(vlSelf->top__DOT__DUT__DOT__ghr)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__DUT__DOT__ghr) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr)))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr 
            = ((0x3ffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr)) 
               | (0x400U & (IData)(vlSelf->top__DOT__DUT__DOT__ghr)));
    }
    if ((1U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffffffeU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (1U & vlSelf->top__DOT__PC));
    }
    if ((2U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffffffdU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (2U & vlSelf->top__DOT__PC));
    }
    if ((4U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffffffbU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (4U & vlSelf->top__DOT__PC));
    }
    if ((8U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffffff7U 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (8U & vlSelf->top__DOT__PC));
    }
    if ((0x10U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffffffefU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x10U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x20U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffffffdfU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x20U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x40U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffffffbfU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x40U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x80U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffffff7fU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x80U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x100U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffffeffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x100U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x200U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffffdffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x200U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x400U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffffbffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x400U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x800U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffff7ffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x800U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x1000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffffefffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x1000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x2000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffffdfffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x2000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x4000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffffbfffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x4000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x8000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffff7fffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x8000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x10000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffeffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x10000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x20000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffdffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x20000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x40000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffbffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x40000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x80000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfff7ffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x80000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x100000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffefffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x100000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x200000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffdfffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x200000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x400000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffbfffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x400000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x800000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xff7fffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x800000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x1000000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfeffffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x1000000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x2000000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfdffffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x2000000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x4000000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfbffffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x4000000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x8000000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xf7ffffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x8000000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x10000000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xefffffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x10000000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x20000000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xdfffffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x20000000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x40000000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xbfffffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x40000000U 
                                              & vlSelf->top__DOT__PC));
    }
    if (((vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0x7fffffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x80000000U 
                                              & vlSelf->top__DOT__PC));
    }
    vlSelf->top__DOT__DUT__DOT__pht_index = (0x7ffU 
                                             & ((vlSelf->top__DOT__PC 
                                                 >> 2U) 
                                                ^ (IData)(vlSelf->top__DOT__DUT__DOT__ghr)));
    vlSelf->top__DOT__prediction = (1U & (vlSelf->top__DOT__DUT__DOT__counts[
                                          (0x7fU & 
                                           (((IData)(1U) 
                                             + ((IData)(vlSelf->top__DOT__DUT__DOT__pht_index) 
                                                << 1U)) 
                                            >> 5U))] 
                                          >> (0x1fU 
                                              & ((IData)(1U) 
                                                 + 
                                                 ((IData)(vlSelf->top__DOT__DUT__DOT__pht_index) 
                                                  << 1U)))));
    vlSelf->top__DOT__DUT__DOT____VdfgTmp_h133b37bf__0 
        = (3U & (((0U == (0x1fU & ((IData)(vlSelf->top__DOT__DUT__DOT__pht_index) 
                                   << 1U))) ? 0U : 
                  (vlSelf->top__DOT__DUT__DOT__counts[
                   (((IData)(1U) + (0xfffU & ((IData)(vlSelf->top__DOT__DUT__DOT__pht_index) 
                                              << 1U))) 
                    >> 5U)] << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(vlSelf->top__DOT__DUT__DOT__pht_index) 
                                                     << 1U))))) 
                 | (vlSelf->top__DOT__DUT__DOT__counts[
                    (0x7fU & ((IData)(vlSelf->top__DOT__DUT__DOT__pht_index) 
                              >> 4U))] >> (0x1fU & 
                                           ((IData)(vlSelf->top__DOT__DUT__DOT__pht_index) 
                                            << 1U)))));
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__pht_index) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pht_index)))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pht_index 
            = ((0x7feU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pht_index)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__pht_index)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__pht_index) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pht_index)))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pht_index 
            = ((0x7fdU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pht_index)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__pht_index)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__pht_index) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pht_index)))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pht_index 
            = ((0x7fbU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pht_index)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__pht_index)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__pht_index) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pht_index)))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pht_index 
            = ((0x7f7U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pht_index)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__pht_index)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__pht_index) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pht_index)))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pht_index 
            = ((0x7efU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pht_index)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__pht_index)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__pht_index) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pht_index)))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pht_index 
            = ((0x7dfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pht_index)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__pht_index)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__pht_index) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pht_index)))) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pht_index 
            = ((0x7bfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pht_index)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__pht_index)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__DUT__DOT__pht_index) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pht_index)))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pht_index 
            = ((0x77fU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pht_index)) 
               | (0x80U & (IData)(vlSelf->top__DOT__DUT__DOT__pht_index)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__DUT__DOT__pht_index) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pht_index)))) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pht_index 
            = ((0x6ffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pht_index)) 
               | (0x100U & (IData)(vlSelf->top__DOT__DUT__DOT__pht_index)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__DUT__DOT__pht_index) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pht_index)))) {
        vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pht_index 
            = ((0x5ffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pht_index)) 
               | (0x200U & (IData)(vlSelf->top__DOT__DUT__DOT__pht_index)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__DUT__DOT__pht_index) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pht_index)))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__pht_index 
            = ((0x3ffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__pht_index)) 
               | (0x400U & (IData)(vlSelf->top__DOT__DUT__DOT__pht_index)));
    }
    if (((IData)(vlSelf->top__DOT__prediction) ^ (IData)(vlSelf->top__DOT____Vtogcov__prediction))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__prediction = vlSelf->top__DOT__prediction;
    }
    if (((3U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h133b37bf__0)) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__entry_upper_reached))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__entry_upper_reached 
            = (3U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h133b37bf__0));
    }
    if (((0U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h133b37bf__0)) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__entry_lower_reached))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__entry_lower_reached 
            = (0U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h133b37bf__0));
    }
}

VL_ATTR_COLD void Vtop___024root___configure_coverage(Vtop___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "utb_BranchGShareDpath.v", 21, 26, ".top", "v_toggle/top", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "utb_BranchGShareDpath.v", 21, 43, ".top", "v_toggle/top", "linetrace", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "utb_BranchGShareDpath.v", 23, 30, ".top", "v_toggle/top", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "utb_BranchGShareDpath.v", 26, 11, ".top", "v_toggle/top", "update_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "utb_BranchGShareDpath.v", 27, 17, ".top", "v_toggle/top", "PC[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "utb_BranchGShareDpath.v", 27, 17, ".top", "v_toggle/top", "PC[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "utb_BranchGShareDpath.v", 27, 17, ".top", "v_toggle/top", "PC[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "utb_BranchGShareDpath.v", 27, 17, ".top", "v_toggle/top", "PC[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "utb_BranchGShareDpath.v", 27, 17, ".top", "v_toggle/top", "PC[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "utb_BranchGShareDpath.v", 27, 17, ".top", "v_toggle/top", "PC[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "utb_BranchGShareDpath.v", 27, 17, ".top", "v_toggle/top", "PC[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "utb_BranchGShareDpath.v", 27, 17, ".top", "v_toggle/top", "PC[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "utb_BranchGShareDpath.v", 27, 17, ".top", "v_toggle/top", "PC[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "utb_BranchGShareDpath.v", 27, 17, ".top", "v_toggle/top", "PC[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "utb_BranchGShareDpath.v", 27, 17, ".top", "v_toggle/top", "PC[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "utb_BranchGShareDpath.v", 27, 17, ".top", "v_toggle/top", "PC[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "utb_BranchGShareDpath.v", 27, 17, ".top", "v_toggle/top", "PC[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "utb_BranchGShareDpath.v", 27, 17, ".top", "v_toggle/top", "PC[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "utb_BranchGShareDpath.v", 27, 17, ".top", "v_toggle/top", "PC[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "utb_BranchGShareDpath.v", 27, 17, ".top", "v_toggle/top", "PC[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "utb_BranchGShareDpath.v", 27, 17, ".top", "v_toggle/top", "PC[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "utb_BranchGShareDpath.v", 27, 17, ".top", "v_toggle/top", "PC[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "utb_BranchGShareDpath.v", 27, 17, ".top", "v_toggle/top", "PC[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "utb_BranchGShareDpath.v", 27, 17, ".top", "v_toggle/top", "PC[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "utb_BranchGShareDpath.v", 27, 17, ".top", "v_toggle/top", "PC[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "utb_BranchGShareDpath.v", 27, 17, ".top", "v_toggle/top", "PC[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "utb_BranchGShareDpath.v", 27, 17, ".top", "v_toggle/top", "PC[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "utb_BranchGShareDpath.v", 27, 17, ".top", "v_toggle/top", "PC[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "utb_BranchGShareDpath.v", 27, 17, ".top", "v_toggle/top", "PC[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "utb_BranchGShareDpath.v", 27, 17, ".top", "v_toggle/top", "PC[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "utb_BranchGShareDpath.v", 27, 17, ".top", "v_toggle/top", "PC[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "utb_BranchGShareDpath.v", 27, 17, ".top", "v_toggle/top", "PC[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "utb_BranchGShareDpath.v", 27, 17, ".top", "v_toggle/top", "PC[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "utb_BranchGShareDpath.v", 27, 17, ".top", "v_toggle/top", "PC[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "utb_BranchGShareDpath.v", 27, 17, ".top", "v_toggle/top", "PC[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "utb_BranchGShareDpath.v", 27, 17, ".top", "v_toggle/top", "PC[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "utb_BranchGShareDpath.v", 28, 11, ".top", "v_toggle/top", "prediction", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "utb_BranchGShareDpath.v", 31, 11, ".top", "v_toggle/top", "entry_upper_reached", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "utb_BranchGShareDpath.v", 32, 11, ".top", "v_toggle/top", "entry_lower_reached", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "utb_BranchGShareDpath.v", 35, 11, ".top", "v_toggle/top", "update_ghr", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "utb_BranchGShareDpath.v", 36, 11, ".top", "v_toggle/top", "increment_entry", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "utb_BranchGShareDpath.v", 37, 11, ".top", "v_toggle/top", "decrement_entry", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "utb_BranchGShareDpath.v", 126, 9, ".top", "v_line/top", "block", "126-127,131");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "utb_BranchGShareDpath.v", 57, 5, ".top", "v_line/top", "block", "57,64-67,69-71,75,77-79,81,85,87-89,93,95-97,101,106,108,115-118,120-122,124-126,134,138,140-142,146,148,152,154,156-158");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "utb_BranchGShareDpath.v", 164, 11, ".top", "v_line/top", "block", "164-165");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "utb_BranchGShareDpath.v", 162, 10, ".top", "v_line/top", "block", "162-164");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "utb_BranchGShareDpath.v", 170, 19, ".top", "v_line/top", "block", "170,178-183");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "utb_BranchGShareDpath.v", 187, 19, ".top", "v_line/top", "block", "187,194-198,201-204,207-210,213-216");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "BranchGShareDpath.v", 10, 24, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "BranchGShareDpath.v", 11, 24, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "BranchGShareDpath.v", 12, 16, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "update_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "BranchGShareDpath.v", 13, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "PC[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "BranchGShareDpath.v", 13, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "PC[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "BranchGShareDpath.v", 13, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "PC[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "BranchGShareDpath.v", 13, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "PC[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "BranchGShareDpath.v", 13, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "PC[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "BranchGShareDpath.v", 13, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "PC[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "BranchGShareDpath.v", 13, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "PC[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "BranchGShareDpath.v", 13, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "PC[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "BranchGShareDpath.v", 13, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "PC[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "BranchGShareDpath.v", 13, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "PC[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "BranchGShareDpath.v", 13, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "PC[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "BranchGShareDpath.v", 13, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "PC[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "BranchGShareDpath.v", 13, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "PC[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "BranchGShareDpath.v", 13, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "PC[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "BranchGShareDpath.v", 13, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "PC[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "BranchGShareDpath.v", 13, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "PC[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "BranchGShareDpath.v", 13, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "PC[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "BranchGShareDpath.v", 13, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "PC[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "BranchGShareDpath.v", 13, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "PC[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "BranchGShareDpath.v", 13, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "PC[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "BranchGShareDpath.v", 13, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "PC[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "BranchGShareDpath.v", 13, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "PC[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "BranchGShareDpath.v", 13, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "PC[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "BranchGShareDpath.v", 13, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "PC[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "BranchGShareDpath.v", 13, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "PC[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "BranchGShareDpath.v", 13, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "PC[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "BranchGShareDpath.v", 13, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "PC[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "BranchGShareDpath.v", 13, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "PC[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "BranchGShareDpath.v", 13, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "PC[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "BranchGShareDpath.v", 13, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "PC[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "BranchGShareDpath.v", 13, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "PC[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "BranchGShareDpath.v", 13, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "PC[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "BranchGShareDpath.v", 14, 16, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "prediction", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "BranchGShareDpath.v", 17, 16, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "entry_upper_reached", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "BranchGShareDpath.v", 18, 16, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "entry_lower_reached", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "BranchGShareDpath.v", 21, 15, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "update_ghr", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "BranchGShareDpath.v", 22, 15, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "increment_entry", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "BranchGShareDpath.v", 23, 15, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "decrement_entry", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "BranchGShareDpath.v", 33, 24, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "ghr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "BranchGShareDpath.v", 33, 24, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "ghr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "BranchGShareDpath.v", 33, 24, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "ghr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "BranchGShareDpath.v", 33, 24, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "ghr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "BranchGShareDpath.v", 33, 24, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "ghr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "BranchGShareDpath.v", 33, 24, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "ghr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "BranchGShareDpath.v", 33, 24, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "ghr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "BranchGShareDpath.v", 33, 24, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "ghr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "BranchGShareDpath.v", 33, 24, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "ghr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "BranchGShareDpath.v", 33, 24, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "ghr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "BranchGShareDpath.v", 33, 24, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "ghr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "BranchGShareDpath.v", 36, 14, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "pc_index[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "BranchGShareDpath.v", 36, 14, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "pc_index[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "BranchGShareDpath.v", 36, 14, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "pc_index[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "BranchGShareDpath.v", 36, 14, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "pc_index[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "BranchGShareDpath.v", 36, 14, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "pc_index[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "BranchGShareDpath.v", 36, 14, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "pc_index[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "BranchGShareDpath.v", 36, 14, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "pc_index[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "BranchGShareDpath.v", 36, 14, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "pc_index[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "BranchGShareDpath.v", 36, 14, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "pc_index[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "BranchGShareDpath.v", 36, 14, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "pc_index[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "BranchGShareDpath.v", 36, 14, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "pc_index[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "BranchGShareDpath.v", 40, 14, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "pht_index[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "BranchGShareDpath.v", 40, 14, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "pht_index[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "BranchGShareDpath.v", 40, 14, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "pht_index[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "BranchGShareDpath.v", 40, 14, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "pht_index[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "BranchGShareDpath.v", 40, 14, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "pht_index[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "BranchGShareDpath.v", 40, 14, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "pht_index[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "BranchGShareDpath.v", 40, 14, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "pht_index[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "BranchGShareDpath.v", 40, 14, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "pht_index[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "BranchGShareDpath.v", 40, 14, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "pht_index[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "BranchGShareDpath.v", 40, 14, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "pht_index[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "BranchGShareDpath.v", 40, 14, ".top.DUT", "v_toggle/lab4_branch_BranchGShareDpath", "pht_index[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "BranchGShareDpath.v", 50, 8, ".top.DUT", "v_branch/lab4_branch_BranchGShareDpath", "if", "50");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "BranchGShareDpath.v", 50, 9, ".top.DUT", "v_branch/lab4_branch_BranchGShareDpath", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "BranchGShareDpath.v", 49, 8, ".top.DUT", "v_line/lab4_branch_BranchGShareDpath", "elsif", "49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "BranchGShareDpath.v", 45, 3, ".top.DUT", "v_line/lab4_branch_BranchGShareDpath", "elsif", "45-47");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "BranchGShareDpath.v", 51, 3, ".top.DUT", "v_branch/lab4_branch_BranchGShareDpath", "if", "51");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "BranchGShareDpath.v", 51, 4, ".top.DUT", "v_branch/lab4_branch_BranchGShareDpath", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "BranchGShareDpath.v", 44, 1, ".top.DUT", "v_line/lab4_branch_BranchGShareDpath", "block", "44");
}
