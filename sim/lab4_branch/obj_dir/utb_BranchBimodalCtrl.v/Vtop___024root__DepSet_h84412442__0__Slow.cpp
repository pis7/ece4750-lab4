// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
}

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
    if (vlSelf->top__DOT__reset) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__update_en)))) {
            vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__update_en) {
            vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        }
    }
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
    if (((IData)(vlSelf->top__DOT__update_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__update_en))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__update_en = vlSelf->top__DOT__update_en;
    }
    if (((IData)(vlSelf->top__DOT__update_val) ^ (IData)(vlSelf->top__DOT____Vtogcov__update_val))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__update_val = vlSelf->top__DOT__update_val;
    }
    if (((IData)(vlSelf->top__DOT__entry_upper_reached) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__entry_upper_reached))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__entry_upper_reached 
            = vlSelf->top__DOT__entry_upper_reached;
    }
    if (((IData)(vlSelf->top__DOT__entry_lower_reached) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__entry_lower_reached))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__entry_lower_reached 
            = vlSelf->top__DOT__entry_lower_reached;
    }
    vlSelf->top__DOT__increment_entry = ((~ (IData)(vlSelf->top__DOT__reset)) 
                                         & ((IData)(vlSelf->top__DOT__update_en) 
                                            & ((IData)(vlSelf->top__DOT__update_val) 
                                               & (~ (IData)(vlSelf->top__DOT__entry_upper_reached)))));
    vlSelf->top__DOT__decrement_entry = ((~ (IData)(vlSelf->top__DOT__reset)) 
                                         & ((IData)(vlSelf->top__DOT__update_en) 
                                            & ((~ (IData)(vlSelf->top__DOT__update_val)) 
                                               & (~ (IData)(vlSelf->top__DOT__entry_lower_reached)))));
    if (((IData)(vlSelf->top__DOT__increment_entry) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__increment_entry))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__increment_entry 
            = vlSelf->top__DOT__increment_entry;
    }
    if (((IData)(vlSelf->top__DOT__decrement_entry) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__decrement_entry))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__decrement_entry 
            = vlSelf->top__DOT__decrement_entry;
    }
}

VL_ATTR_COLD void Vtop___024root___configure_coverage(Vtop___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "utb_BranchBimodalCtrl.v", 21, 26, ".top", "v_toggle/top", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "utb_BranchBimodalCtrl.v", 21, 43, ".top", "v_toggle/top", "linetrace", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "utb_BranchBimodalCtrl.v", 23, 30, ".top", "v_toggle/top", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "utb_BranchBimodalCtrl.v", 26, 11, ".top", "v_toggle/top", "update_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "utb_BranchBimodalCtrl.v", 27, 11, ".top", "v_toggle/top", "update_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "utb_BranchBimodalCtrl.v", 30, 11, ".top", "v_toggle/top", "entry_upper_reached", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "utb_BranchBimodalCtrl.v", 31, 11, ".top", "v_toggle/top", "entry_lower_reached", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "utb_BranchBimodalCtrl.v", 34, 11, ".top", "v_toggle/top", "increment_entry", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "utb_BranchBimodalCtrl.v", 35, 11, ".top", "v_toggle/top", "decrement_entry", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "utb_BranchBimodalCtrl.v", 55, 5, ".top", "v_line/top", "block", "55,62-65,67-69,73,75-77,79,83,85-87,91,93,97,99,106-109,111-113,117,119-121,123,127,129-131,135,137,141,143,150-153,155-157,161,163-165,167,171,173-175,179,181,185,187,194-197,199-201,205,207-209,211,215,217-219,223,225,229,231,233-235");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "utb_BranchBimodalCtrl.v", 241, 11, ".top", "v_line/top", "block", "241-242");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "utb_BranchBimodalCtrl.v", 239, 10, ".top", "v_line/top", "block", "239-241");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "utb_BranchBimodalCtrl.v", 247, 19, ".top", "v_line/top", "block", "247,254-258");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "utb_BranchBimodalCtrl.v", 262, 19, ".top", "v_line/top", "block", "262,267-271,274-277");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "BranchBimodalCtrl.v", 10, 26, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalCtrl", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "BranchBimodalCtrl.v", 11, 26, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalCtrl", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "BranchBimodalCtrl.v", 12, 18, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalCtrl", "update_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "BranchBimodalCtrl.v", 13, 18, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalCtrl", "update_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "BranchBimodalCtrl.v", 16, 17, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalCtrl", "entry_upper_reached", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "BranchBimodalCtrl.v", 17, 17, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalCtrl", "entry_lower_reached", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "BranchBimodalCtrl.v", 20, 18, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalCtrl", "increment_entry", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "BranchBimodalCtrl.v", 21, 18, ".top.DUT", "v_toggle/lab4_branch_BranchBimodalCtrl", "decrement_entry", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "BranchBimodalCtrl.v", 28, 14, ".top.DUT", "v_line/lab4_branch_BranchBimodalCtrl", "if", "28-30");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "BranchBimodalCtrl.v", 28, 15, ".top.DUT", "v_line/lab4_branch_BranchBimodalCtrl", "else", "31-33");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "BranchBimodalCtrl.v", 25, 5, ".top.DUT", "v_line/lab4_branch_BranchBimodalCtrl", "elsif", "25-27");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "BranchBimodalCtrl.v", 24, 1, ".top.DUT", "v_line/lab4_branch_BranchBimodalCtrl", "block", "24");
}
