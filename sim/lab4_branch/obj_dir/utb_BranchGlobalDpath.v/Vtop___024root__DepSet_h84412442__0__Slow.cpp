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
    vlSelf->top__DOT__prediction = (1U & (vlSelf->top__DOT__DUT__DOT__counts[
                                          (0x7fU & 
                                           (((IData)(1U) 
                                             + ((IData)(vlSelf->top__DOT__DUT__DOT__ghr) 
                                                << 1U)) 
                                            >> 5U))] 
                                          >> (0x1fU 
                                              & ((IData)(1U) 
                                                 + 
                                                 ((IData)(vlSelf->top__DOT__DUT__DOT__ghr) 
                                                  << 1U)))));
    vlSelf->top__DOT__DUT__DOT____VdfgTmp_h1ac7f755__0 
        = (3U & (((0U == (0x1fU & ((IData)(vlSelf->top__DOT__DUT__DOT__ghr) 
                                   << 1U))) ? 0U : 
                  (vlSelf->top__DOT__DUT__DOT__counts[
                   (((IData)(1U) + (0xfffU & ((IData)(vlSelf->top__DOT__DUT__DOT__ghr) 
                                              << 1U))) 
                    >> 5U)] << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(vlSelf->top__DOT__DUT__DOT__ghr) 
                                                     << 1U))))) 
                 | (vlSelf->top__DOT__DUT__DOT__counts[
                    (0x7fU & ((IData)(vlSelf->top__DOT__DUT__DOT__ghr) 
                              >> 4U))] >> (0x1fU & 
                                           ((IData)(vlSelf->top__DOT__DUT__DOT__ghr) 
                                            << 1U)))));
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ghr) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr)))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr 
            = ((0x7feU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ghr)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ghr) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr)))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr 
            = ((0x7fdU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ghr)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__ghr) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr)))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr 
            = ((0x7fbU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__ghr)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__ghr) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr)))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr 
            = ((0x7f7U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__ghr)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__ghr) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr)))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr 
            = ((0x7efU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__ghr)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__ghr) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr)))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr 
            = ((0x7dfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__ghr)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__ghr) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr)))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr 
            = ((0x7bfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__ghr)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__DUT__DOT__ghr) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr)))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr 
            = ((0x77fU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr)) 
               | (0x80U & (IData)(vlSelf->top__DOT__DUT__DOT__ghr)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__DUT__DOT__ghr) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr)))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr 
            = ((0x6ffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr)) 
               | (0x100U & (IData)(vlSelf->top__DOT__DUT__DOT__ghr)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__DUT__DOT__ghr) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr)))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr 
            = ((0x5ffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr)) 
               | (0x200U & (IData)(vlSelf->top__DOT__DUT__DOT__ghr)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__DUT__DOT__ghr) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr)))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr 
            = ((0x3ffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ghr)) 
               | (0x400U & (IData)(vlSelf->top__DOT__DUT__DOT__ghr)));
    }
    if (((IData)(vlSelf->top__DOT__prediction) ^ (IData)(vlSelf->top__DOT____Vtogcov__prediction))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__prediction = vlSelf->top__DOT__prediction;
    }
    if (((3U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h1ac7f755__0)) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__entry_upper_reached))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__entry_upper_reached 
            = (3U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h1ac7f755__0));
    }
    if (((0U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h1ac7f755__0)) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__entry_lower_reached))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__entry_lower_reached 
            = (0U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h1ac7f755__0));
    }
}

VL_ATTR_COLD void Vtop___024root___configure_coverage(Vtop___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "utb_BranchGlobalDpath.v", 21, 26, ".top", "v_toggle/top", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "utb_BranchGlobalDpath.v", 21, 43, ".top", "v_toggle/top", "linetrace", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "utb_BranchGlobalDpath.v", 23, 30, ".top", "v_toggle/top", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "utb_BranchGlobalDpath.v", 26, 11, ".top", "v_toggle/top", "update_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "utb_BranchGlobalDpath.v", 27, 11, ".top", "v_toggle/top", "prediction", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "utb_BranchGlobalDpath.v", 30, 11, ".top", "v_toggle/top", "entry_upper_reached", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "utb_BranchGlobalDpath.v", 31, 11, ".top", "v_toggle/top", "entry_lower_reached", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "utb_BranchGlobalDpath.v", 34, 11, ".top", "v_toggle/top", "update_ghr", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "utb_BranchGlobalDpath.v", 35, 11, ".top", "v_toggle/top", "increment_entry", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "utb_BranchGlobalDpath.v", 36, 11, ".top", "v_toggle/top", "decrement_entry", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "utb_BranchGlobalDpath.v", 125, 9, ".top", "v_line/top", "block", "125-126,130");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "utb_BranchGlobalDpath.v", 56, 5, ".top", "v_line/top", "block", "56,63-66,68-70,74,76-78,80,84,86-88,92,94-96,100,105,107,114-117,119-121,123-125,133,137,139-141,145,147,151,153,155-157");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "utb_BranchGlobalDpath.v", 163, 11, ".top", "v_line/top", "block", "163-164");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "utb_BranchGlobalDpath.v", 161, 10, ".top", "v_line/top", "block", "161-163");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "utb_BranchGlobalDpath.v", 169, 19, ".top", "v_line/top", "block", "169,176-180");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "utb_BranchGlobalDpath.v", 184, 19, ".top", "v_line/top", "block", "184,191-195,198-201,204-207,210-213");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "BranchGlobalDpath.v", 10, 24, ".top.DUT", "v_toggle/lab4_branch_BranchGlobalDpath", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "BranchGlobalDpath.v", 11, 24, ".top.DUT", "v_toggle/lab4_branch_BranchGlobalDpath", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "BranchGlobalDpath.v", 12, 16, ".top.DUT", "v_toggle/lab4_branch_BranchGlobalDpath", "update_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "BranchGlobalDpath.v", 13, 16, ".top.DUT", "v_toggle/lab4_branch_BranchGlobalDpath", "prediction", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "BranchGlobalDpath.v", 16, 16, ".top.DUT", "v_toggle/lab4_branch_BranchGlobalDpath", "entry_upper_reached", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "BranchGlobalDpath.v", 17, 16, ".top.DUT", "v_toggle/lab4_branch_BranchGlobalDpath", "entry_lower_reached", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "BranchGlobalDpath.v", 20, 15, ".top.DUT", "v_toggle/lab4_branch_BranchGlobalDpath", "update_ghr", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "BranchGlobalDpath.v", 21, 15, ".top.DUT", "v_toggle/lab4_branch_BranchGlobalDpath", "increment_entry", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "BranchGlobalDpath.v", 22, 15, ".top.DUT", "v_toggle/lab4_branch_BranchGlobalDpath", "decrement_entry", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "BranchGlobalDpath.v", 32, 30, ".top.DUT", "v_toggle/lab4_branch_BranchGlobalDpath", "ghr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "BranchGlobalDpath.v", 32, 30, ".top.DUT", "v_toggle/lab4_branch_BranchGlobalDpath", "ghr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "BranchGlobalDpath.v", 32, 30, ".top.DUT", "v_toggle/lab4_branch_BranchGlobalDpath", "ghr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "BranchGlobalDpath.v", 32, 30, ".top.DUT", "v_toggle/lab4_branch_BranchGlobalDpath", "ghr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "BranchGlobalDpath.v", 32, 30, ".top.DUT", "v_toggle/lab4_branch_BranchGlobalDpath", "ghr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "BranchGlobalDpath.v", 32, 30, ".top.DUT", "v_toggle/lab4_branch_BranchGlobalDpath", "ghr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "BranchGlobalDpath.v", 32, 30, ".top.DUT", "v_toggle/lab4_branch_BranchGlobalDpath", "ghr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "BranchGlobalDpath.v", 32, 30, ".top.DUT", "v_toggle/lab4_branch_BranchGlobalDpath", "ghr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "BranchGlobalDpath.v", 32, 30, ".top.DUT", "v_toggle/lab4_branch_BranchGlobalDpath", "ghr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "BranchGlobalDpath.v", 32, 30, ".top.DUT", "v_toggle/lab4_branch_BranchGlobalDpath", "ghr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "BranchGlobalDpath.v", 32, 30, ".top.DUT", "v_toggle/lab4_branch_BranchGlobalDpath", "ghr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "BranchGlobalDpath.v", 41, 8, ".top.DUT", "v_branch/lab4_branch_BranchGlobalDpath", "if", "41");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "BranchGlobalDpath.v", 41, 9, ".top.DUT", "v_branch/lab4_branch_BranchGlobalDpath", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "BranchGlobalDpath.v", 40, 8, ".top.DUT", "v_line/lab4_branch_BranchGlobalDpath", "elsif", "40");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "BranchGlobalDpath.v", 36, 3, ".top.DUT", "v_line/lab4_branch_BranchGlobalDpath", "elsif", "36-38");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "BranchGlobalDpath.v", 42, 3, ".top.DUT", "v_branch/lab4_branch_BranchGlobalDpath", "if", "42");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "BranchGlobalDpath.v", 42, 4, ".top.DUT", "v_branch/lab4_branch_BranchGlobalDpath", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "BranchGlobalDpath.v", 35, 1, ".top.DUT", "v_line/lab4_branch_BranchGlobalDpath", "block", "35");
}
