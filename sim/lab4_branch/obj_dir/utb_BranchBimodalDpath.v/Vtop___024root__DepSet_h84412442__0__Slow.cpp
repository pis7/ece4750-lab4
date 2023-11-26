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
    if (((IData)(vlSelf->top__DOT__increment_entry) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__increment_entry))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__increment_entry 
            = vlSelf->top__DOT__increment_entry;
    }
    if (((IData)(vlSelf->top__DOT__decrement_entry) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__decrement_entry))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__decrement_entry 
            = vlSelf->top__DOT__decrement_entry;
    }
    vlSelf->top__DOT__prediction = (1U & (vlSelf->top__DOT__DUT__DOT__counts[
                                          (0x7fU & 
                                           (((IData)(1U) 
                                             + (0xffeU 
                                                & (vlSelf->top__DOT__PC 
                                                   >> 1U))) 
                                            >> 5U))] 
                                          >> (0x1fU 
                                              & ((IData)(1U) 
                                                 + 
                                                 (0xffeU 
                                                  & (vlSelf->top__DOT__PC 
                                                     >> 1U))))));
    vlSelf->top__DOT__DUT__DOT____VdfgTmp_haed26521__0 
        = (3U & (((0U == (0x1eU & (vlSelf->top__DOT__PC 
                                   >> 1U))) ? 0U : 
                  (vlSelf->top__DOT__DUT__DOT__counts[
                   (((IData)(1U) + (0xffeU & (vlSelf->top__DOT__PC 
                                              >> 1U))) 
                    >> 5U)] << ((IData)(0x20U) - (0x1eU 
                                                  & (vlSelf->top__DOT__PC 
                                                     >> 1U))))) 
                 | (vlSelf->top__DOT__DUT__DOT__counts[
                    (0x7fU & (vlSelf->top__DOT__PC 
                              >> 6U))] >> (0x1eU & 
                                           (vlSelf->top__DOT__PC 
                                            >> 1U)))));
    if ((1U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffffffeU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (1U & vlSelf->top__DOT__PC));
    }
    if ((2U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffffffdU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (2U & vlSelf->top__DOT__PC));
    }
    if ((4U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffffffbU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (4U & vlSelf->top__DOT__PC));
    }
    if ((8U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffffff7U 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (8U & vlSelf->top__DOT__PC));
    }
    if ((0x10U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffffffefU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x10U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x20U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffffffdfU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x20U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x40U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffffffbfU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x40U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x80U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffffff7fU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x80U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x100U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffffeffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x100U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x200U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffffdffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x200U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x400U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffffbffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x400U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x800U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffff7ffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x800U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x1000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffffefffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x1000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x2000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffffdfffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x2000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x4000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffffbfffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x4000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x8000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffff7fffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x8000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x10000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffeffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x10000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x20000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffdffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x20000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x40000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffbffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x40000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x80000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfff7ffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x80000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x100000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffefffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x100000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x200000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffdfffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x200000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x400000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffbfffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x400000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x800000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xff7fffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x800000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x1000000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfeffffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x1000000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x2000000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfdffffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x2000000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x4000000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfbffffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x4000000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x8000000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xf7ffffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x8000000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x10000000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xefffffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x10000000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x20000000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xdfffffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x20000000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x40000000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xbfffffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x40000000U 
                                              & vlSelf->top__DOT__PC));
    }
    if (((vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0x7fffffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x80000000U 
                                              & vlSelf->top__DOT__PC));
    }
    if (((IData)(vlSelf->top__DOT__prediction) ^ (IData)(vlSelf->top__DOT____Vtogcov__prediction))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__prediction = vlSelf->top__DOT__prediction;
    }
    if (((3U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_haed26521__0)) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__entry_upper_reached))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__entry_upper_reached 
            = (3U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_haed26521__0));
    }
    if (((0U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_haed26521__0)) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__entry_lower_reached))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__entry_lower_reached 
            = (0U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_haed26521__0));
    }
}

VL_ATTR_COLD void Vtop___024root___configure_coverage(Vtop___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "utb_BranchBimodalDpath.v", 21, 26, ".top", "v_toggle/top", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "utb_BranchBimodalDpath.v", 21, 43, ".top", "v_toggle/top", "linetrace", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "utb_BranchBimodalDpath.v", 23, 30, ".top", "v_toggle/top", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "utb_BranchBimodalDpath.v", 26, 17, ".top", "v_toggle/top", "PC[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "utb_BranchBimodalDpath.v", 26, 17, ".top", "v_toggle/top", "PC[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "utb_BranchBimodalDpath.v", 26, 17, ".top", "v_toggle/top", "PC[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "utb_BranchBimodalDpath.v", 26, 17, ".top", "v_toggle/top", "PC[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "utb_BranchBimodalDpath.v", 26, 17, ".top", "v_toggle/top", "PC[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "utb_BranchBimodalDpath.v", 26, 17, ".top", "v_toggle/top", "PC[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "utb_BranchBimodalDpath.v", 26, 17, ".top", "v_toggle/top", "PC[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "utb_BranchBimodalDpath.v", 26, 17, ".top", "v_toggle/top", "PC[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "utb_BranchBimodalDpath.v", 26, 17, ".top", "v_toggle/top", "PC[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "utb_BranchBimodalDpath.v", 26, 17, ".top", "v_toggle/top", "PC[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "utb_BranchBimodalDpath.v", 26, 17, ".top", "v_toggle/top", "PC[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "utb_BranchBimodalDpath.v", 26, 17, ".top", "v_toggle/top", "PC[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "utb_BranchBimodalDpath.v", 26, 17, ".top", "v_toggle/top", "PC[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "utb_BranchBimodalDpath.v", 26, 17, ".top", "v_toggle/top", "PC[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "utb_BranchBimodalDpath.v", 26, 17, ".top", "v_toggle/top", "PC[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "utb_BranchBimodalDpath.v", 26, 17, ".top", "v_toggle/top", "PC[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "utb_BranchBimodalDpath.v", 26, 17, ".top", "v_toggle/top", "PC[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "utb_BranchBimodalDpath.v", 26, 17, ".top", "v_toggle/top", "PC[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "utb_BranchBimodalDpath.v", 26, 17, ".top", "v_toggle/top", "PC[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "utb_BranchBimodalDpath.v", 26, 17, ".top", "v_toggle/top", "PC[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "utb_BranchBimodalDpath.v", 26, 17, ".top", "v_toggle/top", "PC[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "utb_BranchBimodalDpath.v", 26, 17, ".top", "v_toggle/top", "PC[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "utb_BranchBimodalDpath.v", 26, 17, ".top", "v_toggle/top", "PC[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "utb_BranchBimodalDpath.v", 26, 17, ".top", "v_toggle/top", "PC[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "utb_BranchBimodalDpath.v", 26, 17, ".top", "v_toggle/top", "PC[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "utb_BranchBimodalDpath.v", 26, 17, ".top", "v_toggle/top", "PC[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "utb_BranchBimodalDpath.v", 26, 17, ".top", "v_toggle/top", "PC[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "utb_BranchBimodalDpath.v", 26, 17, ".top", "v_toggle/top", "PC[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "utb_BranchBimodalDpath.v", 26, 17, ".top", "v_toggle/top", "PC[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "utb_BranchBimodalDpath.v", 26, 17, ".top", "v_toggle/top", "PC[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "utb_BranchBimodalDpath.v", 26, 17, ".top", "v_toggle/top", "PC[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "utb_BranchBimodalDpath.v", 26, 17, ".top", "v_toggle/top", "PC[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "utb_BranchBimodalDpath.v", 27, 11, ".top", "v_toggle/top", "prediction", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "utb_BranchBimodalDpath.v", 30, 11, ".top", "v_toggle/top", "entry_upper_reached", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "utb_BranchBimodalDpath.v", 31, 11, ".top", "v_toggle/top", "entry_lower_reached", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "utb_BranchBimodalDpath.v", 34, 11, ".top", "v_toggle/top", "increment_entry", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "utb_BranchBimodalDpath.v", 35, 11, ".top", "v_toggle/top", "decrement_entry", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "utb_BranchBimodalDpath.v", 174, 9, ".top", "v_line/top", "block", "174-175,179");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "utb_BranchBimodalDpath.v", 51, 5, ".top", "v_line/top", "block", "51,58-61,63-65,69,71-73,75,79,81-83,87,89,93,98,100,107-110,112,116,118-120,122,126,128-130,134,136,140,142,149-152,154-156,160,162-164,166,170,172-174,182,186,188,190-192");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "utb_BranchBimodalDpath.v", 198, 11, ".top", "v_line/top", "block", "198-199");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "utb_BranchBimodalDpath.v", 196, 10, ".top", "v_line/top", "block", "196-198");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "utb_BranchBimodalDpath.v", 204, 19, ".top", "v_line/top", "block", "204,210-213");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "utb_BranchBimodalDpath.v", 217, 19, ".top", "v_line/top", "block", "217,223-227,230-233,236-239");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "BranchBimodalDpath.v", 10, 24, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalDpath", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "BranchBimodalDpath.v", 11, 24, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalDpath", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "BranchBimodalDpath.v", 12, 22, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalDpath", "PC[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "BranchBimodalDpath.v", 12, 22, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalDpath", "PC[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "BranchBimodalDpath.v", 12, 22, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalDpath", "PC[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "BranchBimodalDpath.v", 12, 22, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalDpath", "PC[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "BranchBimodalDpath.v", 12, 22, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalDpath", "PC[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "BranchBimodalDpath.v", 12, 22, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalDpath", "PC[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "BranchBimodalDpath.v", 12, 22, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalDpath", "PC[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "BranchBimodalDpath.v", 12, 22, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalDpath", "PC[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "BranchBimodalDpath.v", 12, 22, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalDpath", "PC[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "BranchBimodalDpath.v", 12, 22, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalDpath", "PC[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "BranchBimodalDpath.v", 12, 22, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalDpath", "PC[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "BranchBimodalDpath.v", 12, 22, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalDpath", "PC[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "BranchBimodalDpath.v", 12, 22, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalDpath", "PC[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "BranchBimodalDpath.v", 12, 22, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalDpath", "PC[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "BranchBimodalDpath.v", 12, 22, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalDpath", "PC[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "BranchBimodalDpath.v", 12, 22, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalDpath", "PC[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "BranchBimodalDpath.v", 12, 22, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalDpath", "PC[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "BranchBimodalDpath.v", 12, 22, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalDpath", "PC[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "BranchBimodalDpath.v", 12, 22, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalDpath", "PC[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "BranchBimodalDpath.v", 12, 22, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalDpath", "PC[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "BranchBimodalDpath.v", 12, 22, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalDpath", "PC[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "BranchBimodalDpath.v", 12, 22, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalDpath", "PC[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "BranchBimodalDpath.v", 12, 22, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalDpath", "PC[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "BranchBimodalDpath.v", 12, 22, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalDpath", "PC[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "BranchBimodalDpath.v", 12, 22, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalDpath", "PC[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "BranchBimodalDpath.v", 12, 22, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalDpath", "PC[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "BranchBimodalDpath.v", 12, 22, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalDpath", "PC[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "BranchBimodalDpath.v", 12, 22, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalDpath", "PC[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "BranchBimodalDpath.v", 12, 22, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalDpath", "PC[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "BranchBimodalDpath.v", 12, 22, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalDpath", "PC[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "BranchBimodalDpath.v", 12, 22, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalDpath", "PC[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "BranchBimodalDpath.v", 12, 22, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalDpath", "PC[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "BranchBimodalDpath.v", 13, 16, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalDpath", "prediction", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "BranchBimodalDpath.v", 16, 16, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalDpath", "entry_upper_reached", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "BranchBimodalDpath.v", 17, 16, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalDpath", "entry_lower_reached", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "BranchBimodalDpath.v", 20, 15, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalDpath", "increment_entry", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "BranchBimodalDpath.v", 21, 15, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalDpath", "decrement_entry", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "BranchBimodalDpath.v", 28, 14, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalDpath", "pc_index[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "BranchBimodalDpath.v", 28, 14, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalDpath", "pc_index[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "BranchBimodalDpath.v", 28, 14, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalDpath", "pc_index[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "BranchBimodalDpath.v", 28, 14, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalDpath", "pc_index[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "BranchBimodalDpath.v", 28, 14, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalDpath", "pc_index[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "BranchBimodalDpath.v", 28, 14, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalDpath", "pc_index[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "BranchBimodalDpath.v", 28, 14, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalDpath", "pc_index[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "BranchBimodalDpath.v", 28, 14, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalDpath", "pc_index[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "BranchBimodalDpath.v", 28, 14, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalDpath", "pc_index[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "BranchBimodalDpath.v", 28, 14, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalDpath", "pc_index[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "BranchBimodalDpath.v", 28, 14, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalDpath", "pc_index[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "BranchBimodalDpath.v", 37, 8, ".top.DUT", "v_branch/lab4_branch_BranchBimodalDpath", "if", "37");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "BranchBimodalDpath.v", 37, 9, ".top.DUT", "v_branch/lab4_branch_BranchBimodalDpath", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "BranchBimodalDpath.v", 36, 8, ".top.DUT", "v_line/lab4_branch_BranchBimodalDpath", "elsif", "36");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "BranchBimodalDpath.v", 33, 3, ".top.DUT", "v_line/lab4_branch_BranchBimodalDpath", "elsif", "33-34");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "BranchBimodalDpath.v", 32, 1, ".top.DUT", "v_line/lab4_branch_BranchBimodalDpath", "block", "32");
}
