// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

void Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
void Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__0__t_update_val;
    __Vtask_top__DOT__set_inputs__0__t_update_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__0__t_PC;
    __Vtask_top__DOT__set_inputs__0__t_PC = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__0__t_update_ghr;
    __Vtask_top__DOT__set_inputs__0__t_update_ghr = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__0__t_increment_entry;
    __Vtask_top__DOT__set_inputs__0__t_increment_entry = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__0__t_decrement_entry;
    __Vtask_top__DOT__set_inputs__0__t_decrement_entry = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__1__delay_val;
    __Vtask_top__DOT__delay__1__delay_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__1__unnamedblk2__DOT__i;
    __Vtask_top__DOT__delay__1__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__2__t_prediction;
    __Vtask_top__DOT__test_outputs__2__t_prediction = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__2__t_entry_upper_reached;
    __Vtask_top__DOT__test_outputs__2__t_entry_upper_reached = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__2__t_entry_lower_reached;
    __Vtask_top__DOT__test_outputs__2__t_entry_lower_reached = 0;
    SData/*10:0*/ __Vtask_top__DOT__test_outputs__2__t_pht_index;
    __Vtask_top__DOT__test_outputs__2__t_pht_index = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__11__t_update_val;
    __Vtask_top__DOT__set_inputs__11__t_update_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__11__t_PC;
    __Vtask_top__DOT__set_inputs__11__t_PC = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__11__t_update_ghr;
    __Vtask_top__DOT__set_inputs__11__t_update_ghr = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__11__t_increment_entry;
    __Vtask_top__DOT__set_inputs__11__t_increment_entry = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__11__t_decrement_entry;
    __Vtask_top__DOT__set_inputs__11__t_decrement_entry = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__12__t_prediction;
    __Vtask_top__DOT__test_outputs__12__t_prediction = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__12__t_entry_upper_reached;
    __Vtask_top__DOT__test_outputs__12__t_entry_upper_reached = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__12__t_entry_lower_reached;
    __Vtask_top__DOT__test_outputs__12__t_entry_lower_reached = 0;
    SData/*10:0*/ __Vtask_top__DOT__test_outputs__12__t_pht_index;
    __Vtask_top__DOT__test_outputs__12__t_pht_index = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__21__t_update_val;
    __Vtask_top__DOT__set_inputs__21__t_update_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__21__t_PC;
    __Vtask_top__DOT__set_inputs__21__t_PC = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__21__t_update_ghr;
    __Vtask_top__DOT__set_inputs__21__t_update_ghr = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__21__t_increment_entry;
    __Vtask_top__DOT__set_inputs__21__t_increment_entry = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__21__t_decrement_entry;
    __Vtask_top__DOT__set_inputs__21__t_decrement_entry = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__22__delay_val;
    __Vtask_top__DOT__delay__22__delay_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__22__unnamedblk2__DOT__i;
    __Vtask_top__DOT__delay__22__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__23__t_update_val;
    __Vtask_top__DOT__set_inputs__23__t_update_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__23__t_PC;
    __Vtask_top__DOT__set_inputs__23__t_PC = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__23__t_update_ghr;
    __Vtask_top__DOT__set_inputs__23__t_update_ghr = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__23__t_increment_entry;
    __Vtask_top__DOT__set_inputs__23__t_increment_entry = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__23__t_decrement_entry;
    __Vtask_top__DOT__set_inputs__23__t_decrement_entry = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__24__t_prediction;
    __Vtask_top__DOT__test_outputs__24__t_prediction = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__24__t_entry_upper_reached;
    __Vtask_top__DOT__test_outputs__24__t_entry_upper_reached = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__24__t_entry_lower_reached;
    __Vtask_top__DOT__test_outputs__24__t_entry_lower_reached = 0;
    SData/*10:0*/ __Vtask_top__DOT__test_outputs__24__t_pht_index;
    __Vtask_top__DOT__test_outputs__24__t_pht_index = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__33__t_update_val;
    __Vtask_top__DOT__set_inputs__33__t_update_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__set_inputs__33__t_PC;
    __Vtask_top__DOT__set_inputs__33__t_PC = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__33__t_update_ghr;
    __Vtask_top__DOT__set_inputs__33__t_update_ghr = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__33__t_increment_entry;
    __Vtask_top__DOT__set_inputs__33__t_increment_entry = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__33__t_decrement_entry;
    __Vtask_top__DOT__set_inputs__33__t_decrement_entry = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__34__t_prediction;
    __Vtask_top__DOT__test_outputs__34__t_prediction = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__34__t_entry_upper_reached;
    __Vtask_top__DOT__test_outputs__34__t_entry_upper_reached = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__34__t_entry_lower_reached;
    __Vtask_top__DOT__test_outputs__34__t_entry_lower_reached = 0;
    SData/*10:0*/ __Vtask_top__DOT__test_outputs__34__t_pht_index;
    __Vtask_top__DOT__test_outputs__34__t_pht_index = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__43__delay_val;
    __Vtask_top__DOT__delay__43__delay_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__43__unnamedblk2__DOT__i;
    __Vtask_top__DOT__delay__43__unnamedblk2__DOT__i = 0;
    // Body
    VL_WRITEF("\n---------------------------------------\nUnit Test 1: Increment entry if not reached limit\n---------------------------------------\n");
    vlSelf->top__DOT__reset = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchGShareDpath.v", 
                                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reset = 0U;
    __Vtask_top__DOT__set_inputs__0__t_decrement_entry = 0U;
    __Vtask_top__DOT__set_inputs__0__t_increment_entry = 0U;
    __Vtask_top__DOT__set_inputs__0__t_update_ghr = 0U;
    __Vtask_top__DOT__set_inputs__0__t_PC = 0xffffffffU;
    __Vtask_top__DOT__set_inputs__0__t_update_val = 1U;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__set_inputs__0__t_update_val;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__set_inputs__0__t_PC;
    vlSelf->top__DOT__update_ghr = __Vtask_top__DOT__set_inputs__0__t_update_ghr;
    vlSelf->top__DOT__increment_entry = __Vtask_top__DOT__set_inputs__0__t_increment_entry;
    vlSelf->top__DOT__decrement_entry = __Vtask_top__DOT__set_inputs__0__t_decrement_entry;
    vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\nWaiting for inc/dec signal\n");
    __Vtask_top__DOT__delay__1__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__1__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__1__unnamedblk2__DOT__i, __Vtask_top__DOT__delay__1__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_BranchGShareDpath.v", 
                                           165);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__1__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__1__unnamedblk2__DOT__i);
    }
    vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchGShareDpath.v", 
                                                       81);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_top__DOT__test_outputs__2__t_pht_index = 0x7ffU;
    __Vtask_top__DOT__test_outputs__2__t_entry_lower_reached = 1U;
    __Vtask_top__DOT__test_outputs__2__t_entry_upper_reached = 0U;
    __Vtask_top__DOT__test_outputs__2__t_prediction = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__prediction) 
                       == (IData)(__Vtask_top__DOT__test_outputs__2__t_prediction)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("prediction is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__2__t_prediction,
                          1,(IData)(vlSelf->top__DOT__prediction));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("prediction is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__2__t_prediction,
                      1,(IData)(vlSelf->top__DOT__prediction));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGShareDpath.v", 198, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((3U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h133b37bf__0)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__2__t_entry_upper_reached)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("entry_upper_reached is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__2__t_entry_upper_reached,
                          1,(3U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h133b37bf__0)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("entry_upper_reached is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__2__t_entry_upper_reached,
                      1,(3U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h133b37bf__0)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGShareDpath.v", 204, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h133b37bf__0)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__2__t_entry_lower_reached)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("entry_lower_reached is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__2__t_entry_lower_reached,
                          1,(0U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h133b37bf__0)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("entry_lower_reached is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__2__t_entry_lower_reached,
                      1,(0U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h133b37bf__0)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGShareDpath.v", 210, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__pht_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__2__t_pht_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("pht_index is correct.  Expected: %x, Actual: %x\n",
                          11,__Vtask_top__DOT__test_outputs__2__t_pht_index,
                          11,(IData)(vlSelf->top__DOT__DUT__DOT__pht_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("pht_index is incorrect.  Expected: %x, Actual: %x\n",
                      11,__Vtask_top__DOT__test_outputs__2__t_pht_index,
                      11,(IData)(vlSelf->top__DOT__DUT__DOT__pht_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGShareDpath.v", 216, "");
        }
    }
    vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\nReceived increment signal\n");
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchGShareDpath.v", 
                                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_top__DOT__set_inputs__11__t_decrement_entry = 0U;
    __Vtask_top__DOT__set_inputs__11__t_increment_entry = 1U;
    __Vtask_top__DOT__set_inputs__11__t_update_ghr = 1U;
    __Vtask_top__DOT__set_inputs__11__t_PC = 0xffffffffU;
    __Vtask_top__DOT__set_inputs__11__t_update_val = 1U;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__set_inputs__11__t_update_val;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__set_inputs__11__t_PC;
    vlSelf->top__DOT__update_ghr = __Vtask_top__DOT__set_inputs__11__t_update_ghr;
    vlSelf->top__DOT__increment_entry = __Vtask_top__DOT__set_inputs__11__t_increment_entry;
    vlSelf->top__DOT__decrement_entry = __Vtask_top__DOT__set_inputs__11__t_decrement_entry;
    vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\nGHR has changed, but PC XOR's it to all 1's\n");
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchGShareDpath.v", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_top__DOT__test_outputs__12__t_pht_index = 0x7feU;
    __Vtask_top__DOT__test_outputs__12__t_entry_lower_reached = 1U;
    __Vtask_top__DOT__test_outputs__12__t_entry_upper_reached = 0U;
    __Vtask_top__DOT__test_outputs__12__t_prediction = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__prediction) 
                       == (IData)(__Vtask_top__DOT__test_outputs__12__t_prediction)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("prediction is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__12__t_prediction,
                          1,(IData)(vlSelf->top__DOT__prediction));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("prediction is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__12__t_prediction,
                      1,(IData)(vlSelf->top__DOT__prediction));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGShareDpath.v", 198, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((3U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h133b37bf__0)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__12__t_entry_upper_reached)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("entry_upper_reached is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__12__t_entry_upper_reached,
                          1,(3U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h133b37bf__0)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("entry_upper_reached is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__12__t_entry_upper_reached,
                      1,(3U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h133b37bf__0)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGShareDpath.v", 204, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h133b37bf__0)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__12__t_entry_lower_reached)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("entry_lower_reached is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__12__t_entry_lower_reached,
                          1,(0U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h133b37bf__0)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("entry_lower_reached is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__12__t_entry_lower_reached,
                      1,(0U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h133b37bf__0)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGShareDpath.v", 210, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__pht_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__12__t_pht_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("pht_index is correct.  Expected: %x, Actual: %x\n",
                          11,__Vtask_top__DOT__test_outputs__12__t_pht_index,
                          11,(IData)(vlSelf->top__DOT__DUT__DOT__pht_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("pht_index is incorrect.  Expected: %x, Actual: %x\n",
                      11,__Vtask_top__DOT__test_outputs__12__t_pht_index,
                      11,(IData)(vlSelf->top__DOT__DUT__DOT__pht_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGShareDpath.v", 216, "");
        }
    }
    vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__set_inputs__21__t_decrement_entry = 0U;
    __Vtask_top__DOT__set_inputs__21__t_increment_entry = 0U;
    __Vtask_top__DOT__set_inputs__21__t_update_ghr = 0U;
    __Vtask_top__DOT__set_inputs__21__t_PC = 0xffffffffU;
    __Vtask_top__DOT__set_inputs__21__t_update_val = 1U;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__set_inputs__21__t_update_val;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__set_inputs__21__t_PC;
    vlSelf->top__DOT__update_ghr = __Vtask_top__DOT__set_inputs__21__t_update_ghr;
    vlSelf->top__DOT__increment_entry = __Vtask_top__DOT__set_inputs__21__t_increment_entry;
    vlSelf->top__DOT__decrement_entry = __Vtask_top__DOT__set_inputs__21__t_decrement_entry;
    vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__delay__22__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__22__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__22__unnamedblk2__DOT__i, __Vtask_top__DOT__delay__22__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_BranchGShareDpath.v", 
                                           165);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__22__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__22__unnamedblk2__DOT__i);
    }
    vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\n---------------------------------------\nUnit Test 2: Do not decrement entry if reached limit\n---------------------------------------\n");
    vlSelf->top__DOT__reset = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchGShareDpath.v", 
                                                       121);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reset = 0U;
    VL_WRITEF("\nFill PHT and GHR\n");
    vlSelf->top__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x80U, vlSelf->top__DOT__unnamedblk1__DOT__i)) {
        co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "utb_BranchGShareDpath.v", 
                                                           127);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_top__DOT__set_inputs__23__t_decrement_entry = 0U;
        __Vtask_top__DOT__set_inputs__23__t_increment_entry = 1U;
        __Vtask_top__DOT__set_inputs__23__t_update_ghr = 1U;
        __Vtask_top__DOT__set_inputs__23__t_PC = 0U;
        __Vtask_top__DOT__set_inputs__23__t_update_val = 1U;
        vlSelf->top__DOT__update_val = __Vtask_top__DOT__set_inputs__23__t_update_val;
        vlSelf->top__DOT__PC = __Vtask_top__DOT__set_inputs__23__t_PC;
        vlSelf->top__DOT__update_ghr = __Vtask_top__DOT__set_inputs__23__t_update_ghr;
        vlSelf->top__DOT__increment_entry = __Vtask_top__DOT__set_inputs__23__t_increment_entry;
        vlSelf->top__DOT__decrement_entry = __Vtask_top__DOT__set_inputs__23__t_decrement_entry;
        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk1__DOT__i = ((IData)(1U) 
                                                 + vlSelf->top__DOT__unnamedblk1__DOT__i);
    }
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchGShareDpath.v", 
                                                       134);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_top__DOT__test_outputs__24__t_pht_index = 0x7ffU;
    __Vtask_top__DOT__test_outputs__24__t_entry_lower_reached = 0U;
    __Vtask_top__DOT__test_outputs__24__t_entry_upper_reached = 0U;
    __Vtask_top__DOT__test_outputs__24__t_prediction = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__prediction) 
                       == (IData)(__Vtask_top__DOT__test_outputs__24__t_prediction)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("prediction is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__24__t_prediction,
                          1,(IData)(vlSelf->top__DOT__prediction));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("prediction is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__24__t_prediction,
                      1,(IData)(vlSelf->top__DOT__prediction));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGShareDpath.v", 198, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((3U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h133b37bf__0)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__24__t_entry_upper_reached)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("entry_upper_reached is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__24__t_entry_upper_reached,
                          1,(3U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h133b37bf__0)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("entry_upper_reached is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__24__t_entry_upper_reached,
                      1,(3U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h133b37bf__0)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGShareDpath.v", 204, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h133b37bf__0)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__24__t_entry_lower_reached)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("entry_lower_reached is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__24__t_entry_lower_reached,
                          1,(0U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h133b37bf__0)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("entry_lower_reached is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__24__t_entry_lower_reached,
                      1,(0U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h133b37bf__0)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGShareDpath.v", 210, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__pht_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__24__t_pht_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("pht_index is correct.  Expected: %x, Actual: %x\n",
                          11,__Vtask_top__DOT__test_outputs__24__t_pht_index,
                          11,(IData)(vlSelf->top__DOT__DUT__DOT__pht_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("pht_index is incorrect.  Expected: %x, Actual: %x\n",
                      11,__Vtask_top__DOT__test_outputs__24__t_pht_index,
                      11,(IData)(vlSelf->top__DOT__DUT__DOT__pht_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGShareDpath.v", 216, "");
        }
    }
    vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\nReceived decrement signal\n");
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchGShareDpath.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_top__DOT__set_inputs__33__t_decrement_entry = 1U;
    __Vtask_top__DOT__set_inputs__33__t_increment_entry = 0U;
    __Vtask_top__DOT__set_inputs__33__t_update_ghr = 1U;
    __Vtask_top__DOT__set_inputs__33__t_PC = 0U;
    __Vtask_top__DOT__set_inputs__33__t_update_val = 0U;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__set_inputs__33__t_update_val;
    vlSelf->top__DOT__PC = __Vtask_top__DOT__set_inputs__33__t_PC;
    vlSelf->top__DOT__update_ghr = __Vtask_top__DOT__set_inputs__33__t_update_ghr;
    vlSelf->top__DOT__increment_entry = __Vtask_top__DOT__set_inputs__33__t_increment_entry;
    vlSelf->top__DOT__decrement_entry = __Vtask_top__DOT__set_inputs__33__t_decrement_entry;
    vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchGShareDpath.v", 
                                                       148);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_top__DOT__test_outputs__34__t_pht_index = 0x7feU;
    __Vtask_top__DOT__test_outputs__34__t_entry_lower_reached = 1U;
    __Vtask_top__DOT__test_outputs__34__t_entry_upper_reached = 0U;
    __Vtask_top__DOT__test_outputs__34__t_prediction = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__prediction) 
                       == (IData)(__Vtask_top__DOT__test_outputs__34__t_prediction)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("prediction is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__34__t_prediction,
                          1,(IData)(vlSelf->top__DOT__prediction));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("prediction is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__34__t_prediction,
                      1,(IData)(vlSelf->top__DOT__prediction));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGShareDpath.v", 198, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((3U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h133b37bf__0)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__34__t_entry_upper_reached)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("entry_upper_reached is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__34__t_entry_upper_reached,
                          1,(3U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h133b37bf__0)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("entry_upper_reached is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__34__t_entry_upper_reached,
                      1,(3U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h133b37bf__0)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGShareDpath.v", 204, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h133b37bf__0)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__34__t_entry_lower_reached)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("entry_lower_reached is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__34__t_entry_lower_reached,
                          1,(0U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h133b37bf__0)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("entry_lower_reached is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__34__t_entry_lower_reached,
                      1,(0U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h133b37bf__0)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGShareDpath.v", 210, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__pht_index) 
                       == (IData)(__Vtask_top__DOT__test_outputs__34__t_pht_index)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("pht_index is correct.  Expected: %x, Actual: %x\n",
                          11,__Vtask_top__DOT__test_outputs__34__t_pht_index,
                          11,(IData)(vlSelf->top__DOT__DUT__DOT__pht_index));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("pht_index is incorrect.  Expected: %x, Actual: %x\n",
                      11,__Vtask_top__DOT__test_outputs__34__t_pht_index,
                      11,(IData)(vlSelf->top__DOT__DUT__DOT__pht_index));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGShareDpath.v", 216, "");
        }
    }
    vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__delay__43__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__43__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__43__unnamedblk2__DOT__i, __Vtask_top__DOT__delay__43__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_BranchGShareDpath.v", 
                                           165);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__43__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__43__unnamedblk2__DOT__i);
    }
    vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\nAll tests passed!\n");
    VL_FINISH_MT("utb_BranchGShareDpath.v", 158, "");
    vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->top__DOT____Vtogcov__clk))) {
        vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__clk = vlSelf->clk;
    }
    if (((IData)(vlSelf->linetrace) ^ (IData)(vlSelf->top__DOT____Vtogcov__linetrace))) {
        vlSymsp->__Vcoverage[1].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__linetrace = vlSelf->linetrace;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__VactTriggered.set(1U, ((~ (IData)(vlSelf->clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0)));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__0\n"); );
    // Body
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

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*10:0*/ __Vdly__top__DOT__DUT__DOT__ghr;
    __Vdly__top__DOT__DUT__DOT__ghr = 0;
    VlWide<128>/*4095:0*/ __Vdly__top__DOT__DUT__DOT__counts;
    VL_ZERO_W(4096, __Vdly__top__DOT__DUT__DOT__counts);
    // Body
    vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (~ ((~ (IData)(vlSelf->top__DOT__reset)) 
                  & (IData)(vlSelf->top__DOT__update_ghr))))) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
        if (vlSelf->top__DOT__increment_entry) {
            vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__increment_entry)))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__decrement_entry)))) {
                vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
            }
            if (vlSelf->top__DOT__decrement_entry) {
                vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    VL_ASSIGN_W(4096,__Vdly__top__DOT__DUT__DOT__counts, vlSelf->top__DOT__DUT__DOT__counts);
    __Vdly__top__DOT__DUT__DOT__ghr = vlSelf->top__DOT__DUT__DOT__ghr;
    if (vlSelf->top__DOT__reset) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        VL_CONST_W_1X(4096,__Vdly__top__DOT__DUT__DOT__counts,0x00000000);
        __Vdly__top__DOT__DUT__DOT__ghr = 0U;
    } else if (vlSelf->top__DOT__increment_entry) {
        VL_ASSIGNSEL_WI(4096,2,(0xfffU & ((IData)(vlSelf->top__DOT__DUT__DOT__pht_index) 
                                          << 1U)), __Vdly__top__DOT__DUT__DOT__counts, 
                        (3U & ((IData)(1U) + (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->top__DOT__DUT__DOT__pht_index) 
                                                    << 1U)))
                                                ? 0U
                                                : (
                                                   vlSelf->top__DOT__DUT__DOT__counts[
                                                   (((IData)(1U) 
                                                     + 
                                                     (0xfffU 
                                                      & ((IData)(vlSelf->top__DOT__DUT__DOT__pht_index) 
                                                         << 1U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->top__DOT__DUT__DOT__pht_index) 
                                                        << 1U))))) 
                                              | (vlSelf->top__DOT__DUT__DOT__counts[
                                                 (0x7fU 
                                                  & ((IData)(vlSelf->top__DOT__DUT__DOT__pht_index) 
                                                     >> 4U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->top__DOT__DUT__DOT__pht_index) 
                                                     << 1U)))))));
    } else if (vlSelf->top__DOT__decrement_entry) {
        VL_ASSIGNSEL_WI(4096,2,(0xfffU & ((IData)(vlSelf->top__DOT__DUT__DOT__pht_index) 
                                          << 1U)), __Vdly__top__DOT__DUT__DOT__counts, 
                        (3U & ((((0U == (0x1fU & ((IData)(vlSelf->top__DOT__DUT__DOT__pht_index) 
                                                  << 1U)))
                                  ? 0U : (vlSelf->top__DOT__DUT__DOT__counts[
                                          (((IData)(1U) 
                                            + (0xfffU 
                                               & ((IData)(vlSelf->top__DOT__DUT__DOT__pht_index) 
                                                  << 1U))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(vlSelf->top__DOT__DUT__DOT__pht_index) 
                                                    << 1U))))) 
                                | (vlSelf->top__DOT__DUT__DOT__counts[
                                   (0x7fU & ((IData)(vlSelf->top__DOT__DUT__DOT__pht_index) 
                                             >> 4U))] 
                                   >> (0x1fU & ((IData)(vlSelf->top__DOT__DUT__DOT__pht_index) 
                                                << 1U)))) 
                               - (IData)(1U))));
    }
    if (((~ (IData)(vlSelf->top__DOT__reset)) & (IData)(vlSelf->top__DOT__update_ghr))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        __Vdly__top__DOT__DUT__DOT__ghr = (0x7ffU & 
                                           (((IData)(vlSelf->top__DOT__DUT__DOT__ghr) 
                                             << 1U) 
                                            | (IData)(vlSelf->top__DOT__update_val)));
    }
    VL_ASSIGN_W(4096,vlSelf->top__DOT__DUT__DOT__counts, __Vdly__top__DOT__DUT__DOT__counts);
    vlSelf->top__DOT__DUT__DOT__ghr = __Vdly__top__DOT__DUT__DOT__ghr;
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
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    // Body
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
