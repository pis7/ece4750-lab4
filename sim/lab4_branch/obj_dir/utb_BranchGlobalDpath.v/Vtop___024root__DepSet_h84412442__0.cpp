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
    SData/*10:0*/ __Vtask_top__DOT__test_outputs__2__t_ghr;
    __Vtask_top__DOT__test_outputs__2__t_ghr = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__11__t_update_val;
    __Vtask_top__DOT__set_inputs__11__t_update_val = 0;
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
    SData/*10:0*/ __Vtask_top__DOT__test_outputs__12__t_ghr;
    __Vtask_top__DOT__test_outputs__12__t_ghr = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__21__t_update_val;
    __Vtask_top__DOT__set_inputs__21__t_update_val = 0;
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
    SData/*10:0*/ __Vtask_top__DOT__test_outputs__24__t_ghr;
    __Vtask_top__DOT__test_outputs__24__t_ghr = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__33__t_update_val;
    __Vtask_top__DOT__set_inputs__33__t_update_val = 0;
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
    SData/*10:0*/ __Vtask_top__DOT__test_outputs__34__t_ghr;
    __Vtask_top__DOT__test_outputs__34__t_ghr = 0;
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
                                                       "utb_BranchGlobalDpath.v", 
                                                       69);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reset = 0U;
    __Vtask_top__DOT__set_inputs__0__t_decrement_entry = 0U;
    __Vtask_top__DOT__set_inputs__0__t_increment_entry = 0U;
    __Vtask_top__DOT__set_inputs__0__t_update_ghr = 0U;
    __Vtask_top__DOT__set_inputs__0__t_update_val = 1U;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__set_inputs__0__t_update_val;
    vlSelf->top__DOT__update_ghr = __Vtask_top__DOT__set_inputs__0__t_update_ghr;
    vlSelf->top__DOT__increment_entry = __Vtask_top__DOT__set_inputs__0__t_increment_entry;
    vlSelf->top__DOT__decrement_entry = __Vtask_top__DOT__set_inputs__0__t_decrement_entry;
    vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\nWaiting for inc/dec signal\n");
    __Vtask_top__DOT__delay__1__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__1__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__1__unnamedblk2__DOT__i, __Vtask_top__DOT__delay__1__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_BranchGlobalDpath.v", 
                                           164);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__1__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__1__unnamedblk2__DOT__i);
    }
    vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchGlobalDpath.v", 
                                                       80);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_top__DOT__test_outputs__2__t_ghr = 0U;
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
            VL_FINISH_MT("utb_BranchGlobalDpath.v", 195, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((3U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h1ac7f755__0)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__2__t_entry_upper_reached)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("entry_upper_reached is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__2__t_entry_upper_reached,
                          1,(3U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h1ac7f755__0)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("entry_upper_reached is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__2__t_entry_upper_reached,
                      1,(3U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h1ac7f755__0)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGlobalDpath.v", 201, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h1ac7f755__0)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__2__t_entry_lower_reached)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("entry_lower_reached is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__2__t_entry_lower_reached,
                          1,(0U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h1ac7f755__0)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("entry_lower_reached is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__2__t_entry_lower_reached,
                      1,(0U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h1ac7f755__0)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGlobalDpath.v", 207, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__ghr) 
                       == (IData)(__Vtask_top__DOT__test_outputs__2__t_ghr)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("ghr is correct.  Expected: %x, Actual: %x\n",
                          11,__Vtask_top__DOT__test_outputs__2__t_ghr,
                          11,(IData)(vlSelf->top__DOT__DUT__DOT__ghr));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("ghr is incorrect.  Expected: %x, Actual: %x\n",
                      11,__Vtask_top__DOT__test_outputs__2__t_ghr,
                      11,(IData)(vlSelf->top__DOT__DUT__DOT__ghr));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGlobalDpath.v", 213, "");
        }
    }
    vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\nReceived increment signal\n");
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchGlobalDpath.v", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_top__DOT__set_inputs__11__t_decrement_entry = 0U;
    __Vtask_top__DOT__set_inputs__11__t_increment_entry = 1U;
    __Vtask_top__DOT__set_inputs__11__t_update_ghr = 1U;
    __Vtask_top__DOT__set_inputs__11__t_update_val = 1U;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__set_inputs__11__t_update_val;
    vlSelf->top__DOT__update_ghr = __Vtask_top__DOT__set_inputs__11__t_update_ghr;
    vlSelf->top__DOT__increment_entry = __Vtask_top__DOT__set_inputs__11__t_increment_entry;
    vlSelf->top__DOT__decrement_entry = __Vtask_top__DOT__set_inputs__11__t_decrement_entry;
    vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\nGHR has changed, so indexing different PHT entry\n");
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchGlobalDpath.v", 
                                                       96);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_top__DOT__test_outputs__12__t_ghr = 1U;
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
            VL_FINISH_MT("utb_BranchGlobalDpath.v", 195, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((3U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h1ac7f755__0)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__12__t_entry_upper_reached)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("entry_upper_reached is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__12__t_entry_upper_reached,
                          1,(3U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h1ac7f755__0)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("entry_upper_reached is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__12__t_entry_upper_reached,
                      1,(3U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h1ac7f755__0)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGlobalDpath.v", 201, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h1ac7f755__0)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__12__t_entry_lower_reached)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("entry_lower_reached is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__12__t_entry_lower_reached,
                          1,(0U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h1ac7f755__0)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("entry_lower_reached is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__12__t_entry_lower_reached,
                      1,(0U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h1ac7f755__0)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGlobalDpath.v", 207, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__ghr) 
                       == (IData)(__Vtask_top__DOT__test_outputs__12__t_ghr)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("ghr is correct.  Expected: %x, Actual: %x\n",
                          11,__Vtask_top__DOT__test_outputs__12__t_ghr,
                          11,(IData)(vlSelf->top__DOT__DUT__DOT__ghr));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("ghr is incorrect.  Expected: %x, Actual: %x\n",
                      11,__Vtask_top__DOT__test_outputs__12__t_ghr,
                      11,(IData)(vlSelf->top__DOT__DUT__DOT__ghr));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGlobalDpath.v", 213, "");
        }
    }
    vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__set_inputs__21__t_decrement_entry = 0U;
    __Vtask_top__DOT__set_inputs__21__t_increment_entry = 0U;
    __Vtask_top__DOT__set_inputs__21__t_update_ghr = 0U;
    __Vtask_top__DOT__set_inputs__21__t_update_val = 1U;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__set_inputs__21__t_update_val;
    vlSelf->top__DOT__update_ghr = __Vtask_top__DOT__set_inputs__21__t_update_ghr;
    vlSelf->top__DOT__increment_entry = __Vtask_top__DOT__set_inputs__21__t_increment_entry;
    vlSelf->top__DOT__decrement_entry = __Vtask_top__DOT__set_inputs__21__t_decrement_entry;
    vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__delay__22__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__22__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__22__unnamedblk2__DOT__i, __Vtask_top__DOT__delay__22__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_BranchGlobalDpath.v", 
                                           164);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__22__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__22__unnamedblk2__DOT__i);
    }
    vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\n---------------------------------------\nUnit Test 2: Do not decrement entry if reached limit\n---------------------------------------\n");
    vlSelf->top__DOT__reset = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchGlobalDpath.v", 
                                                       120);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reset = 0U;
    VL_WRITEF("\nFill PHT and GHR\n");
    vlSelf->top__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x80U, vlSelf->top__DOT__unnamedblk1__DOT__i)) {
        co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "utb_BranchGlobalDpath.v", 
                                                           126);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_top__DOT__set_inputs__23__t_decrement_entry = 0U;
        __Vtask_top__DOT__set_inputs__23__t_increment_entry = 1U;
        __Vtask_top__DOT__set_inputs__23__t_update_ghr = 1U;
        __Vtask_top__DOT__set_inputs__23__t_update_val = 1U;
        vlSelf->top__DOT__update_val = __Vtask_top__DOT__set_inputs__23__t_update_val;
        vlSelf->top__DOT__update_ghr = __Vtask_top__DOT__set_inputs__23__t_update_ghr;
        vlSelf->top__DOT__increment_entry = __Vtask_top__DOT__set_inputs__23__t_increment_entry;
        vlSelf->top__DOT__decrement_entry = __Vtask_top__DOT__set_inputs__23__t_decrement_entry;
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__unnamedblk1__DOT__i = ((IData)(1U) 
                                                 + vlSelf->top__DOT__unnamedblk1__DOT__i);
    }
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchGlobalDpath.v", 
                                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_top__DOT__test_outputs__24__t_ghr = 0x7ffU;
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
            VL_FINISH_MT("utb_BranchGlobalDpath.v", 195, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((3U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h1ac7f755__0)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__24__t_entry_upper_reached)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("entry_upper_reached is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__24__t_entry_upper_reached,
                          1,(3U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h1ac7f755__0)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("entry_upper_reached is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__24__t_entry_upper_reached,
                      1,(3U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h1ac7f755__0)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGlobalDpath.v", 201, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h1ac7f755__0)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__24__t_entry_lower_reached)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("entry_lower_reached is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__24__t_entry_lower_reached,
                          1,(0U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h1ac7f755__0)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("entry_lower_reached is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__24__t_entry_lower_reached,
                      1,(0U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h1ac7f755__0)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGlobalDpath.v", 207, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__ghr) 
                       == (IData)(__Vtask_top__DOT__test_outputs__24__t_ghr)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("ghr is correct.  Expected: %x, Actual: %x\n",
                          11,__Vtask_top__DOT__test_outputs__24__t_ghr,
                          11,(IData)(vlSelf->top__DOT__DUT__DOT__ghr));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("ghr is incorrect.  Expected: %x, Actual: %x\n",
                      11,__Vtask_top__DOT__test_outputs__24__t_ghr,
                      11,(IData)(vlSelf->top__DOT__DUT__DOT__ghr));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGlobalDpath.v", 213, "");
        }
    }
    vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\nReceived decrement signal\n");
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchGlobalDpath.v", 
                                                       141);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_top__DOT__set_inputs__33__t_decrement_entry = 1U;
    __Vtask_top__DOT__set_inputs__33__t_increment_entry = 0U;
    __Vtask_top__DOT__set_inputs__33__t_update_ghr = 1U;
    __Vtask_top__DOT__set_inputs__33__t_update_val = 0U;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__set_inputs__33__t_update_val;
    vlSelf->top__DOT__update_ghr = __Vtask_top__DOT__set_inputs__33__t_update_ghr;
    vlSelf->top__DOT__increment_entry = __Vtask_top__DOT__set_inputs__33__t_increment_entry;
    vlSelf->top__DOT__decrement_entry = __Vtask_top__DOT__set_inputs__33__t_decrement_entry;
    vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchGlobalDpath.v", 
                                                       147);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_top__DOT__test_outputs__34__t_ghr = 0x7feU;
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
            VL_FINISH_MT("utb_BranchGlobalDpath.v", 195, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((3U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h1ac7f755__0)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__34__t_entry_upper_reached)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("entry_upper_reached is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__34__t_entry_upper_reached,
                          1,(3U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h1ac7f755__0)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("entry_upper_reached is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__34__t_entry_upper_reached,
                      1,(3U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h1ac7f755__0)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGlobalDpath.v", 201, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((0U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h1ac7f755__0)) 
                       == (IData)(__Vtask_top__DOT__test_outputs__34__t_entry_lower_reached)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("entry_lower_reached is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__34__t_entry_lower_reached,
                          1,(0U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h1ac7f755__0)));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("entry_lower_reached is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__34__t_entry_lower_reached,
                      1,(0U == (IData)(vlSelf->top__DOT__DUT__DOT____VdfgTmp_h1ac7f755__0)));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGlobalDpath.v", 207, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__DUT__DOT__ghr) 
                       == (IData)(__Vtask_top__DOT__test_outputs__34__t_ghr)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("ghr is correct.  Expected: %x, Actual: %x\n",
                          11,__Vtask_top__DOT__test_outputs__34__t_ghr,
                          11,(IData)(vlSelf->top__DOT__DUT__DOT__ghr));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("ghr is incorrect.  Expected: %x, Actual: %x\n",
                      11,__Vtask_top__DOT__test_outputs__34__t_ghr,
                      11,(IData)(vlSelf->top__DOT__DUT__DOT__ghr));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGlobalDpath.v", 213, "");
        }
    }
    vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__delay__43__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__43__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__43__unnamedblk2__DOT__i, __Vtask_top__DOT__delay__43__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_BranchGlobalDpath.v", 
                                           164);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__43__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__43__unnamedblk2__DOT__i);
    }
    vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\nAll tests passed!\n");
    VL_FINISH_MT("utb_BranchGlobalDpath.v", 157, "");
    vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
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
    vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (~ ((~ (IData)(vlSelf->top__DOT__reset)) 
                  & (IData)(vlSelf->top__DOT__update_ghr))))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
        if (vlSelf->top__DOT__increment_entry) {
            vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__increment_entry)))) {
            if (vlSelf->top__DOT__decrement_entry) {
                vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__decrement_entry)))) {
                vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    VL_ASSIGN_W(4096,__Vdly__top__DOT__DUT__DOT__counts, vlSelf->top__DOT__DUT__DOT__counts);
    __Vdly__top__DOT__DUT__DOT__ghr = vlSelf->top__DOT__DUT__DOT__ghr;
    if (vlSelf->top__DOT__reset) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        __Vdly__top__DOT__DUT__DOT__ghr = 0U;
        VL_CONST_W_1X(4096,__Vdly__top__DOT__DUT__DOT__counts,0x00000000);
    } else if (vlSelf->top__DOT__increment_entry) {
        VL_ASSIGNSEL_WI(4096,2,(0xfffU & ((IData)(vlSelf->top__DOT__DUT__DOT__ghr) 
                                          << 1U)), __Vdly__top__DOT__DUT__DOT__counts, 
                        (3U & ((IData)(1U) + (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->top__DOT__DUT__DOT__ghr) 
                                                    << 1U)))
                                                ? 0U
                                                : (
                                                   vlSelf->top__DOT__DUT__DOT__counts[
                                                   (((IData)(1U) 
                                                     + 
                                                     (0xfffU 
                                                      & ((IData)(vlSelf->top__DOT__DUT__DOT__ghr) 
                                                         << 1U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->top__DOT__DUT__DOT__ghr) 
                                                        << 1U))))) 
                                              | (vlSelf->top__DOT__DUT__DOT__counts[
                                                 (0x7fU 
                                                  & ((IData)(vlSelf->top__DOT__DUT__DOT__ghr) 
                                                     >> 4U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->top__DOT__DUT__DOT__ghr) 
                                                     << 1U)))))));
    } else if (vlSelf->top__DOT__decrement_entry) {
        VL_ASSIGNSEL_WI(4096,2,(0xfffU & ((IData)(vlSelf->top__DOT__DUT__DOT__ghr) 
                                          << 1U)), __Vdly__top__DOT__DUT__DOT__counts, 
                        (3U & ((((0U == (0x1fU & ((IData)(vlSelf->top__DOT__DUT__DOT__ghr) 
                                                  << 1U)))
                                  ? 0U : (vlSelf->top__DOT__DUT__DOT__counts[
                                          (((IData)(1U) 
                                            + (0xfffU 
                                               & ((IData)(vlSelf->top__DOT__DUT__DOT__ghr) 
                                                  << 1U))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(vlSelf->top__DOT__DUT__DOT__ghr) 
                                                    << 1U))))) 
                                | (vlSelf->top__DOT__DUT__DOT__counts[
                                   (0x7fU & ((IData)(vlSelf->top__DOT__DUT__DOT__ghr) 
                                             >> 4U))] 
                                   >> (0x1fU & ((IData)(vlSelf->top__DOT__DUT__DOT__ghr) 
                                                << 1U)))) 
                               - (IData)(1U))));
    }
    if (((~ (IData)(vlSelf->top__DOT__reset)) & (IData)(vlSelf->top__DOT__update_ghr))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        __Vdly__top__DOT__DUT__DOT__ghr = (0x7ffU & 
                                           (((IData)(vlSelf->top__DOT__DUT__DOT__ghr) 
                                             << 1U) 
                                            | (IData)(vlSelf->top__DOT__update_val)));
    }
    VL_ASSIGN_W(4096,vlSelf->top__DOT__DUT__DOT__counts, __Vdly__top__DOT__DUT__DOT__counts);
    vlSelf->top__DOT__DUT__DOT__ghr = __Vdly__top__DOT__DUT__DOT__ghr;
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
