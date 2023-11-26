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
    vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
        if (vlSelf->top__DOT__update_en) {
            vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__update_en)))) {
            vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
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
    vlSelf->top__DOT__update_ghr = ((~ (IData)(vlSelf->top__DOT__reset)) 
                                    & (IData)(vlSelf->top__DOT__update_en));
    vlSelf->top__DOT__increment_entry = ((~ (IData)(vlSelf->top__DOT__reset)) 
                                         & ((IData)(vlSelf->top__DOT__update_en) 
                                            & ((IData)(vlSelf->top__DOT__update_val) 
                                               & (~ (IData)(vlSelf->top__DOT__entry_upper_reached)))));
    vlSelf->top__DOT__decrement_entry = ((~ (IData)(vlSelf->top__DOT__reset)) 
                                         & ((IData)(vlSelf->top__DOT__update_en) 
                                            & ((~ (IData)(vlSelf->top__DOT__update_val)) 
                                               & (~ (IData)(vlSelf->top__DOT__entry_lower_reached)))));
    if (((IData)(vlSelf->top__DOT__update_ghr) ^ (IData)(vlSelf->top__DOT____Vtogcov__update_ghr))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__update_ghr = vlSelf->top__DOT__update_ghr;
    }
    if (((IData)(vlSelf->top__DOT__increment_entry) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__increment_entry))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__increment_entry 
            = vlSelf->top__DOT__increment_entry;
    }
    if (((IData)(vlSelf->top__DOT__decrement_entry) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__decrement_entry))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
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
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "utb_BranchGlobalCtrl.v", 21, 26, ".top", "v_toggle/top", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "utb_BranchGlobalCtrl.v", 21, 43, ".top", "v_toggle/top", "linetrace", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "utb_BranchGlobalCtrl.v", 23, 30, ".top", "v_toggle/top", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "utb_BranchGlobalCtrl.v", 26, 11, ".top", "v_toggle/top", "update_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "utb_BranchGlobalCtrl.v", 27, 11, ".top", "v_toggle/top", "update_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "utb_BranchGlobalCtrl.v", 30, 11, ".top", "v_toggle/top", "entry_upper_reached", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "utb_BranchGlobalCtrl.v", 31, 11, ".top", "v_toggle/top", "entry_lower_reached", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "utb_BranchGlobalCtrl.v", 34, 11, ".top", "v_toggle/top", "update_ghr", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "utb_BranchGlobalCtrl.v", 35, 11, ".top", "v_toggle/top", "increment_entry", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "utb_BranchGlobalCtrl.v", 36, 11, ".top", "v_toggle/top", "decrement_entry", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "utb_BranchGlobalCtrl.v", 56, 5, ".top", "v_line/top", "block", "56,63-66,68-70,74,76-78,80,84,86-88,92,94,98,100,107-110,112-114,118,120-122,124,128,130-132,136,138,142,144,151-154,156-158,162,164-166,168,172,174-176,180,182,186,188,195-198,200-202,206,208-210,212,216,218-220,224,226,230,232,234-236");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "utb_BranchGlobalCtrl.v", 242, 11, ".top", "v_line/top", "block", "242-243");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "utb_BranchGlobalCtrl.v", 240, 10, ".top", "v_line/top", "block", "240-242");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "utb_BranchGlobalCtrl.v", 248, 19, ".top", "v_line/top", "block", "248,255-259");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "utb_BranchGlobalCtrl.v", 263, 19, ".top", "v_line/top", "block", "263,269-273,276-279,282-285");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "BranchGlobalCtrl.v", 10, 26, ".top.DUT", "v_toggle/lab4_branch_BranchGlobalCtrl", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "BranchGlobalCtrl.v", 11, 26, ".top.DUT", "v_toggle/lab4_branch_BranchGlobalCtrl", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "BranchGlobalCtrl.v", 12, 18, ".top.DUT", "v_toggle/lab4_branch_BranchGlobalCtrl", "update_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "BranchGlobalCtrl.v", 13, 18, ".top.DUT", "v_toggle/lab4_branch_BranchGlobalCtrl", "update_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "BranchGlobalCtrl.v", 16, 17, ".top.DUT", "v_toggle/lab4_branch_BranchGlobalCtrl", "entry_upper_reached", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "BranchGlobalCtrl.v", 17, 17, ".top.DUT", "v_toggle/lab4_branch_BranchGlobalCtrl", "entry_lower_reached", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "BranchGlobalCtrl.v", 20, 18, ".top.DUT", "v_toggle/lab4_branch_BranchGlobalCtrl", "update_ghr", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "BranchGlobalCtrl.v", 21, 18, ".top.DUT", "v_toggle/lab4_branch_BranchGlobalCtrl", "increment_entry", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "BranchGlobalCtrl.v", 22, 18, ".top.DUT", "v_toggle/lab4_branch_BranchGlobalCtrl", "decrement_entry", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "BranchGlobalCtrl.v", 30, 14, ".top.DUT", "v_line/lab4_branch_BranchGlobalCtrl", "if", "30-33");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "BranchGlobalCtrl.v", 30, 15, ".top.DUT", "v_line/lab4_branch_BranchGlobalCtrl", "else", "34-37");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "BranchGlobalCtrl.v", 26, 5, ".top.DUT", "v_line/lab4_branch_BranchGlobalCtrl", "elsif", "26-29");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "BranchGlobalCtrl.v", 25, 1, ".top.DUT", "v_line/lab4_branch_BranchGlobalCtrl", "block", "25");
}
