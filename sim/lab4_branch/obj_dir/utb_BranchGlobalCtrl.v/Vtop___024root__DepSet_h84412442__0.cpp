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
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__0__t_update_en;
    __Vtask_top__DOT__set_inputs__0__t_update_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__0__t_update_val;
    __Vtask_top__DOT__set_inputs__0__t_update_val = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__0__t_entry_upper_reached;
    __Vtask_top__DOT__set_inputs__0__t_entry_upper_reached = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__0__t_entry_lower_reached;
    __Vtask_top__DOT__set_inputs__0__t_entry_lower_reached = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__1__delay_val;
    __Vtask_top__DOT__delay__1__delay_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__1__unnamedblk1__DOT__i;
    __Vtask_top__DOT__delay__1__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__2__t_increment_entry;
    __Vtask_top__DOT__test_outputs__2__t_increment_entry = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__2__t_decrement_entry;
    __Vtask_top__DOT__test_outputs__2__t_decrement_entry = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__2__t_update_ghr;
    __Vtask_top__DOT__test_outputs__2__t_update_ghr = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__9__t_update_en;
    __Vtask_top__DOT__set_inputs__9__t_update_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__9__t_update_val;
    __Vtask_top__DOT__set_inputs__9__t_update_val = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__9__t_entry_upper_reached;
    __Vtask_top__DOT__set_inputs__9__t_entry_upper_reached = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__9__t_entry_lower_reached;
    __Vtask_top__DOT__set_inputs__9__t_entry_lower_reached = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__10__t_increment_entry;
    __Vtask_top__DOT__test_outputs__10__t_increment_entry = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__10__t_decrement_entry;
    __Vtask_top__DOT__test_outputs__10__t_decrement_entry = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__10__t_update_ghr;
    __Vtask_top__DOT__test_outputs__10__t_update_ghr = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__17__delay_val;
    __Vtask_top__DOT__delay__17__delay_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__17__unnamedblk1__DOT__i;
    __Vtask_top__DOT__delay__17__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__18__t_update_en;
    __Vtask_top__DOT__set_inputs__18__t_update_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__18__t_update_val;
    __Vtask_top__DOT__set_inputs__18__t_update_val = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__18__t_entry_upper_reached;
    __Vtask_top__DOT__set_inputs__18__t_entry_upper_reached = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__18__t_entry_lower_reached;
    __Vtask_top__DOT__set_inputs__18__t_entry_lower_reached = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__19__delay_val;
    __Vtask_top__DOT__delay__19__delay_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__19__unnamedblk1__DOT__i;
    __Vtask_top__DOT__delay__19__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__20__t_increment_entry;
    __Vtask_top__DOT__test_outputs__20__t_increment_entry = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__20__t_decrement_entry;
    __Vtask_top__DOT__test_outputs__20__t_decrement_entry = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__20__t_update_ghr;
    __Vtask_top__DOT__test_outputs__20__t_update_ghr = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__27__t_update_en;
    __Vtask_top__DOT__set_inputs__27__t_update_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__27__t_update_val;
    __Vtask_top__DOT__set_inputs__27__t_update_val = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__27__t_entry_upper_reached;
    __Vtask_top__DOT__set_inputs__27__t_entry_upper_reached = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__27__t_entry_lower_reached;
    __Vtask_top__DOT__set_inputs__27__t_entry_lower_reached = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__28__t_increment_entry;
    __Vtask_top__DOT__test_outputs__28__t_increment_entry = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__28__t_decrement_entry;
    __Vtask_top__DOT__test_outputs__28__t_decrement_entry = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__28__t_update_ghr;
    __Vtask_top__DOT__test_outputs__28__t_update_ghr = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__35__delay_val;
    __Vtask_top__DOT__delay__35__delay_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__35__unnamedblk1__DOT__i;
    __Vtask_top__DOT__delay__35__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__36__t_update_en;
    __Vtask_top__DOT__set_inputs__36__t_update_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__36__t_update_val;
    __Vtask_top__DOT__set_inputs__36__t_update_val = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__36__t_entry_upper_reached;
    __Vtask_top__DOT__set_inputs__36__t_entry_upper_reached = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__36__t_entry_lower_reached;
    __Vtask_top__DOT__set_inputs__36__t_entry_lower_reached = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__37__delay_val;
    __Vtask_top__DOT__delay__37__delay_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__37__unnamedblk1__DOT__i;
    __Vtask_top__DOT__delay__37__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__38__t_increment_entry;
    __Vtask_top__DOT__test_outputs__38__t_increment_entry = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__38__t_decrement_entry;
    __Vtask_top__DOT__test_outputs__38__t_decrement_entry = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__38__t_update_ghr;
    __Vtask_top__DOT__test_outputs__38__t_update_ghr = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__45__t_update_en;
    __Vtask_top__DOT__set_inputs__45__t_update_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__45__t_update_val;
    __Vtask_top__DOT__set_inputs__45__t_update_val = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__45__t_entry_upper_reached;
    __Vtask_top__DOT__set_inputs__45__t_entry_upper_reached = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__45__t_entry_lower_reached;
    __Vtask_top__DOT__set_inputs__45__t_entry_lower_reached = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__46__t_increment_entry;
    __Vtask_top__DOT__test_outputs__46__t_increment_entry = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__46__t_decrement_entry;
    __Vtask_top__DOT__test_outputs__46__t_decrement_entry = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__46__t_update_ghr;
    __Vtask_top__DOT__test_outputs__46__t_update_ghr = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__53__delay_val;
    __Vtask_top__DOT__delay__53__delay_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__53__unnamedblk1__DOT__i;
    __Vtask_top__DOT__delay__53__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__54__t_update_en;
    __Vtask_top__DOT__set_inputs__54__t_update_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__54__t_update_val;
    __Vtask_top__DOT__set_inputs__54__t_update_val = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__54__t_entry_upper_reached;
    __Vtask_top__DOT__set_inputs__54__t_entry_upper_reached = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__54__t_entry_lower_reached;
    __Vtask_top__DOT__set_inputs__54__t_entry_lower_reached = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__55__delay_val;
    __Vtask_top__DOT__delay__55__delay_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__55__unnamedblk1__DOT__i;
    __Vtask_top__DOT__delay__55__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__56__t_increment_entry;
    __Vtask_top__DOT__test_outputs__56__t_increment_entry = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__56__t_decrement_entry;
    __Vtask_top__DOT__test_outputs__56__t_decrement_entry = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__56__t_update_ghr;
    __Vtask_top__DOT__test_outputs__56__t_update_ghr = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__63__t_update_en;
    __Vtask_top__DOT__set_inputs__63__t_update_en = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__63__t_update_val;
    __Vtask_top__DOT__set_inputs__63__t_update_val = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__63__t_entry_upper_reached;
    __Vtask_top__DOT__set_inputs__63__t_entry_upper_reached = 0;
    CData/*0:0*/ __Vtask_top__DOT__set_inputs__63__t_entry_lower_reached;
    __Vtask_top__DOT__set_inputs__63__t_entry_lower_reached = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__64__t_increment_entry;
    __Vtask_top__DOT__test_outputs__64__t_increment_entry = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__64__t_decrement_entry;
    __Vtask_top__DOT__test_outputs__64__t_decrement_entry = 0;
    CData/*0:0*/ __Vtask_top__DOT__test_outputs__64__t_update_ghr;
    __Vtask_top__DOT__test_outputs__64__t_update_ghr = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__71__delay_val;
    __Vtask_top__DOT__delay__71__delay_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__71__unnamedblk1__DOT__i;
    __Vtask_top__DOT__delay__71__unnamedblk1__DOT__i = 0;
    // Body
    VL_WRITEF("\n---------------------------------------\nUnit Test 1: Update decrement entry, not at lower limit\n---------------------------------------\n");
    vlSelf->top__DOT__reset = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchGlobalCtrl.v", 
                                                       69);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reset = 0U;
    __Vtask_top__DOT__set_inputs__0__t_entry_lower_reached = 0U;
    __Vtask_top__DOT__set_inputs__0__t_entry_upper_reached = 0U;
    __Vtask_top__DOT__set_inputs__0__t_update_val = 0U;
    __Vtask_top__DOT__set_inputs__0__t_update_en = 0U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__set_inputs__0__t_update_en;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__set_inputs__0__t_update_val;
    vlSelf->top__DOT__entry_upper_reached = __Vtask_top__DOT__set_inputs__0__t_entry_upper_reached;
    vlSelf->top__DOT__entry_lower_reached = __Vtask_top__DOT__set_inputs__0__t_entry_lower_reached;
    vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\nWaiting for update_en\n");
    __Vtask_top__DOT__delay__1__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__1__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__1__unnamedblk1__DOT__i, __Vtask_top__DOT__delay__1__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_BranchGlobalCtrl.v", 
                                           243);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__1__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__1__unnamedblk1__DOT__i);
    }
    vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchGlobalCtrl.v", 
                                                       80);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_top__DOT__test_outputs__2__t_update_ghr = 0U;
    __Vtask_top__DOT__test_outputs__2__t_decrement_entry = 0U;
    __Vtask_top__DOT__test_outputs__2__t_increment_entry = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__increment_entry) 
                       == (IData)(__Vtask_top__DOT__test_outputs__2__t_increment_entry)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("increment_entry is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__2__t_increment_entry,
                          1,(IData)(vlSelf->top__DOT__increment_entry));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("increment_entry is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__2__t_increment_entry,
                      1,(IData)(vlSelf->top__DOT__increment_entry));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGlobalCtrl.v", 273, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__decrement_entry) 
                       == (IData)(__Vtask_top__DOT__test_outputs__2__t_decrement_entry)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("decrement_entry is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__2__t_decrement_entry,
                          1,(IData)(vlSelf->top__DOT__decrement_entry));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("decrement_entry is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__2__t_decrement_entry,
                      1,(IData)(vlSelf->top__DOT__decrement_entry));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGlobalCtrl.v", 279, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__update_ghr) 
                       == (IData)(__Vtask_top__DOT__test_outputs__2__t_update_ghr)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("update_ghr is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__2__t_update_ghr,
                          1,(IData)(vlSelf->top__DOT__update_ghr));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("update_ghr is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__2__t_update_ghr,
                      1,(IData)(vlSelf->top__DOT__update_ghr));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGlobalCtrl.v", 285, "");
        }
    }
    vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\nupdate_en is high, update_val is low and lower limit not reached - decrement\n");
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchGlobalCtrl.v", 
                                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_top__DOT__set_inputs__9__t_entry_lower_reached = 0U;
    __Vtask_top__DOT__set_inputs__9__t_entry_upper_reached = 0U;
    __Vtask_top__DOT__set_inputs__9__t_update_val = 0U;
    __Vtask_top__DOT__set_inputs__9__t_update_en = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__set_inputs__9__t_update_en;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__set_inputs__9__t_update_val;
    vlSelf->top__DOT__entry_upper_reached = __Vtask_top__DOT__set_inputs__9__t_entry_upper_reached;
    vlSelf->top__DOT__entry_lower_reached = __Vtask_top__DOT__set_inputs__9__t_entry_lower_reached;
    vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404911__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "utb_BranchGlobalCtrl.v", 
                                                       94);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_top__DOT__test_outputs__10__t_update_ghr = 1U;
    __Vtask_top__DOT__test_outputs__10__t_decrement_entry = 1U;
    __Vtask_top__DOT__test_outputs__10__t_increment_entry = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__increment_entry) 
                       == (IData)(__Vtask_top__DOT__test_outputs__10__t_increment_entry)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("increment_entry is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__10__t_increment_entry,
                          1,(IData)(vlSelf->top__DOT__increment_entry));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("increment_entry is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__10__t_increment_entry,
                      1,(IData)(vlSelf->top__DOT__increment_entry));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGlobalCtrl.v", 273, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__decrement_entry) 
                       == (IData)(__Vtask_top__DOT__test_outputs__10__t_decrement_entry)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("decrement_entry is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__10__t_decrement_entry,
                          1,(IData)(vlSelf->top__DOT__decrement_entry));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("decrement_entry is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__10__t_decrement_entry,
                      1,(IData)(vlSelf->top__DOT__decrement_entry));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGlobalCtrl.v", 279, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__update_ghr) 
                       == (IData)(__Vtask_top__DOT__test_outputs__10__t_update_ghr)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("update_ghr is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__10__t_update_ghr,
                          1,(IData)(vlSelf->top__DOT__update_ghr));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("update_ghr is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__10__t_update_ghr,
                      1,(IData)(vlSelf->top__DOT__update_ghr));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGlobalCtrl.v", 285, "");
        }
    }
    vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__delay__17__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__17__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__17__unnamedblk1__DOT__i, __Vtask_top__DOT__delay__17__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_BranchGlobalCtrl.v", 
                                           243);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__17__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__17__unnamedblk1__DOT__i);
    }
    vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\n---------------------------------------\nUnit Test 2: Update decrement entry,at lower limit\n---------------------------------------\n");
    vlSelf->top__DOT__reset = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchGlobalCtrl.v", 
                                                       113);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reset = 0U;
    __Vtask_top__DOT__set_inputs__18__t_entry_lower_reached = 1U;
    __Vtask_top__DOT__set_inputs__18__t_entry_upper_reached = 0U;
    __Vtask_top__DOT__set_inputs__18__t_update_val = 0U;
    __Vtask_top__DOT__set_inputs__18__t_update_en = 0U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__set_inputs__18__t_update_en;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__set_inputs__18__t_update_val;
    vlSelf->top__DOT__entry_upper_reached = __Vtask_top__DOT__set_inputs__18__t_entry_upper_reached;
    vlSelf->top__DOT__entry_lower_reached = __Vtask_top__DOT__set_inputs__18__t_entry_lower_reached;
    vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\nWaiting for update_en\n");
    __Vtask_top__DOT__delay__19__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__19__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__19__unnamedblk1__DOT__i, __Vtask_top__DOT__delay__19__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_BranchGlobalCtrl.v", 
                                           243);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__19__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__19__unnamedblk1__DOT__i);
    }
    vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchGlobalCtrl.v", 
                                                       124);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_top__DOT__test_outputs__20__t_update_ghr = 0U;
    __Vtask_top__DOT__test_outputs__20__t_decrement_entry = 0U;
    __Vtask_top__DOT__test_outputs__20__t_increment_entry = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__increment_entry) 
                       == (IData)(__Vtask_top__DOT__test_outputs__20__t_increment_entry)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("increment_entry is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__20__t_increment_entry,
                          1,(IData)(vlSelf->top__DOT__increment_entry));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("increment_entry is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__20__t_increment_entry,
                      1,(IData)(vlSelf->top__DOT__increment_entry));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGlobalCtrl.v", 273, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__decrement_entry) 
                       == (IData)(__Vtask_top__DOT__test_outputs__20__t_decrement_entry)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("decrement_entry is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__20__t_decrement_entry,
                          1,(IData)(vlSelf->top__DOT__decrement_entry));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("decrement_entry is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__20__t_decrement_entry,
                      1,(IData)(vlSelf->top__DOT__decrement_entry));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGlobalCtrl.v", 279, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__update_ghr) 
                       == (IData)(__Vtask_top__DOT__test_outputs__20__t_update_ghr)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("update_ghr is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__20__t_update_ghr,
                          1,(IData)(vlSelf->top__DOT__update_ghr));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("update_ghr is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__20__t_update_ghr,
                      1,(IData)(vlSelf->top__DOT__update_ghr));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGlobalCtrl.v", 285, "");
        }
    }
    vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\nupdate_en is high, update_val is low and lower limit is reached - do not decrement\n");
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchGlobalCtrl.v", 
                                                       132);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_top__DOT__set_inputs__27__t_entry_lower_reached = 1U;
    __Vtask_top__DOT__set_inputs__27__t_entry_upper_reached = 0U;
    __Vtask_top__DOT__set_inputs__27__t_update_val = 0U;
    __Vtask_top__DOT__set_inputs__27__t_update_en = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__set_inputs__27__t_update_en;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__set_inputs__27__t_update_val;
    vlSelf->top__DOT__entry_upper_reached = __Vtask_top__DOT__set_inputs__27__t_entry_upper_reached;
    vlSelf->top__DOT__entry_lower_reached = __Vtask_top__DOT__set_inputs__27__t_entry_lower_reached;
    vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404911__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "utb_BranchGlobalCtrl.v", 
                                                       138);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_top__DOT__test_outputs__28__t_update_ghr = 1U;
    __Vtask_top__DOT__test_outputs__28__t_decrement_entry = 0U;
    __Vtask_top__DOT__test_outputs__28__t_increment_entry = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__increment_entry) 
                       == (IData)(__Vtask_top__DOT__test_outputs__28__t_increment_entry)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("increment_entry is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__28__t_increment_entry,
                          1,(IData)(vlSelf->top__DOT__increment_entry));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("increment_entry is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__28__t_increment_entry,
                      1,(IData)(vlSelf->top__DOT__increment_entry));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGlobalCtrl.v", 273, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__decrement_entry) 
                       == (IData)(__Vtask_top__DOT__test_outputs__28__t_decrement_entry)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("decrement_entry is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__28__t_decrement_entry,
                          1,(IData)(vlSelf->top__DOT__decrement_entry));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("decrement_entry is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__28__t_decrement_entry,
                      1,(IData)(vlSelf->top__DOT__decrement_entry));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGlobalCtrl.v", 279, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__update_ghr) 
                       == (IData)(__Vtask_top__DOT__test_outputs__28__t_update_ghr)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("update_ghr is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__28__t_update_ghr,
                          1,(IData)(vlSelf->top__DOT__update_ghr));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("update_ghr is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__28__t_update_ghr,
                      1,(IData)(vlSelf->top__DOT__update_ghr));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGlobalCtrl.v", 285, "");
        }
    }
    vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__delay__35__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__35__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__35__unnamedblk1__DOT__i, __Vtask_top__DOT__delay__35__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_BranchGlobalCtrl.v", 
                                           243);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__35__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__35__unnamedblk1__DOT__i);
    }
    vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\n---------------------------------------\nUnit Test 3: Update increment entry, not at upper limit\n---------------------------------------\n");
    vlSelf->top__DOT__reset = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchGlobalCtrl.v", 
                                                       157);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reset = 0U;
    __Vtask_top__DOT__set_inputs__36__t_entry_lower_reached = 0U;
    __Vtask_top__DOT__set_inputs__36__t_entry_upper_reached = 0U;
    __Vtask_top__DOT__set_inputs__36__t_update_val = 0U;
    __Vtask_top__DOT__set_inputs__36__t_update_en = 0U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__set_inputs__36__t_update_en;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__set_inputs__36__t_update_val;
    vlSelf->top__DOT__entry_upper_reached = __Vtask_top__DOT__set_inputs__36__t_entry_upper_reached;
    vlSelf->top__DOT__entry_lower_reached = __Vtask_top__DOT__set_inputs__36__t_entry_lower_reached;
    vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\nWaiting for update_en\n");
    __Vtask_top__DOT__delay__37__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__37__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__37__unnamedblk1__DOT__i, __Vtask_top__DOT__delay__37__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_BranchGlobalCtrl.v", 
                                           243);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__37__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__37__unnamedblk1__DOT__i);
    }
    vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchGlobalCtrl.v", 
                                                       168);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_top__DOT__test_outputs__38__t_update_ghr = 0U;
    __Vtask_top__DOT__test_outputs__38__t_decrement_entry = 0U;
    __Vtask_top__DOT__test_outputs__38__t_increment_entry = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__increment_entry) 
                       == (IData)(__Vtask_top__DOT__test_outputs__38__t_increment_entry)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("increment_entry is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__38__t_increment_entry,
                          1,(IData)(vlSelf->top__DOT__increment_entry));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("increment_entry is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__38__t_increment_entry,
                      1,(IData)(vlSelf->top__DOT__increment_entry));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGlobalCtrl.v", 273, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__decrement_entry) 
                       == (IData)(__Vtask_top__DOT__test_outputs__38__t_decrement_entry)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("decrement_entry is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__38__t_decrement_entry,
                          1,(IData)(vlSelf->top__DOT__decrement_entry));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("decrement_entry is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__38__t_decrement_entry,
                      1,(IData)(vlSelf->top__DOT__decrement_entry));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGlobalCtrl.v", 279, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__update_ghr) 
                       == (IData)(__Vtask_top__DOT__test_outputs__38__t_update_ghr)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("update_ghr is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__38__t_update_ghr,
                          1,(IData)(vlSelf->top__DOT__update_ghr));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("update_ghr is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__38__t_update_ghr,
                      1,(IData)(vlSelf->top__DOT__update_ghr));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGlobalCtrl.v", 285, "");
        }
    }
    vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\nupdate_en is high, update_val is high and upper limit not reached - increment\n");
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchGlobalCtrl.v", 
                                                       176);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_top__DOT__set_inputs__45__t_entry_lower_reached = 0U;
    __Vtask_top__DOT__set_inputs__45__t_entry_upper_reached = 0U;
    __Vtask_top__DOT__set_inputs__45__t_update_val = 1U;
    __Vtask_top__DOT__set_inputs__45__t_update_en = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__set_inputs__45__t_update_en;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__set_inputs__45__t_update_val;
    vlSelf->top__DOT__entry_upper_reached = __Vtask_top__DOT__set_inputs__45__t_entry_upper_reached;
    vlSelf->top__DOT__entry_lower_reached = __Vtask_top__DOT__set_inputs__45__t_entry_lower_reached;
    vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404911__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "utb_BranchGlobalCtrl.v", 
                                                       182);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_top__DOT__test_outputs__46__t_update_ghr = 1U;
    __Vtask_top__DOT__test_outputs__46__t_decrement_entry = 0U;
    __Vtask_top__DOT__test_outputs__46__t_increment_entry = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__increment_entry) 
                       == (IData)(__Vtask_top__DOT__test_outputs__46__t_increment_entry)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("increment_entry is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__46__t_increment_entry,
                          1,(IData)(vlSelf->top__DOT__increment_entry));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("increment_entry is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__46__t_increment_entry,
                      1,(IData)(vlSelf->top__DOT__increment_entry));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGlobalCtrl.v", 273, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__decrement_entry) 
                       == (IData)(__Vtask_top__DOT__test_outputs__46__t_decrement_entry)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("decrement_entry is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__46__t_decrement_entry,
                          1,(IData)(vlSelf->top__DOT__decrement_entry));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("decrement_entry is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__46__t_decrement_entry,
                      1,(IData)(vlSelf->top__DOT__decrement_entry));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGlobalCtrl.v", 279, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__update_ghr) 
                       == (IData)(__Vtask_top__DOT__test_outputs__46__t_update_ghr)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("update_ghr is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__46__t_update_ghr,
                          1,(IData)(vlSelf->top__DOT__update_ghr));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("update_ghr is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__46__t_update_ghr,
                      1,(IData)(vlSelf->top__DOT__update_ghr));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGlobalCtrl.v", 285, "");
        }
    }
    vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__delay__53__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__53__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__53__unnamedblk1__DOT__i, __Vtask_top__DOT__delay__53__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_BranchGlobalCtrl.v", 
                                           243);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__53__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__53__unnamedblk1__DOT__i);
    }
    vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\n---------------------------------------\nUnit Test 4: Update increment entry, at upper limit\n---------------------------------------\n");
    vlSelf->top__DOT__reset = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchGlobalCtrl.v", 
                                                       201);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__reset = 0U;
    __Vtask_top__DOT__set_inputs__54__t_entry_lower_reached = 0U;
    __Vtask_top__DOT__set_inputs__54__t_entry_upper_reached = 1U;
    __Vtask_top__DOT__set_inputs__54__t_update_val = 0U;
    __Vtask_top__DOT__set_inputs__54__t_update_en = 0U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__set_inputs__54__t_update_en;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__set_inputs__54__t_update_val;
    vlSelf->top__DOT__entry_upper_reached = __Vtask_top__DOT__set_inputs__54__t_entry_upper_reached;
    vlSelf->top__DOT__entry_lower_reached = __Vtask_top__DOT__set_inputs__54__t_entry_lower_reached;
    vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\nWaiting for update_en\n");
    __Vtask_top__DOT__delay__55__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__55__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__55__unnamedblk1__DOT__i, __Vtask_top__DOT__delay__55__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_BranchGlobalCtrl.v", 
                                           243);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__55__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__55__unnamedblk1__DOT__i);
    }
    vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchGlobalCtrl.v", 
                                                       212);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_top__DOT__test_outputs__56__t_update_ghr = 0U;
    __Vtask_top__DOT__test_outputs__56__t_decrement_entry = 0U;
    __Vtask_top__DOT__test_outputs__56__t_increment_entry = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__increment_entry) 
                       == (IData)(__Vtask_top__DOT__test_outputs__56__t_increment_entry)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("increment_entry is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__56__t_increment_entry,
                          1,(IData)(vlSelf->top__DOT__increment_entry));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("increment_entry is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__56__t_increment_entry,
                      1,(IData)(vlSelf->top__DOT__increment_entry));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGlobalCtrl.v", 273, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__decrement_entry) 
                       == (IData)(__Vtask_top__DOT__test_outputs__56__t_decrement_entry)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("decrement_entry is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__56__t_decrement_entry,
                          1,(IData)(vlSelf->top__DOT__decrement_entry));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("decrement_entry is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__56__t_decrement_entry,
                      1,(IData)(vlSelf->top__DOT__decrement_entry));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGlobalCtrl.v", 279, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__update_ghr) 
                       == (IData)(__Vtask_top__DOT__test_outputs__56__t_update_ghr)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("update_ghr is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__56__t_update_ghr,
                          1,(IData)(vlSelf->top__DOT__update_ghr));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("update_ghr is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__56__t_update_ghr,
                      1,(IData)(vlSelf->top__DOT__update_ghr));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGlobalCtrl.v", 285, "");
        }
    }
    vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\nupdate_en is high, update_val is high and upper limit reached - do not increment\n");
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "utb_BranchGlobalCtrl.v", 
                                                       220);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_top__DOT__set_inputs__63__t_entry_lower_reached = 0U;
    __Vtask_top__DOT__set_inputs__63__t_entry_upper_reached = 1U;
    __Vtask_top__DOT__set_inputs__63__t_update_val = 1U;
    __Vtask_top__DOT__set_inputs__63__t_update_en = 1U;
    vlSelf->top__DOT__update_en = __Vtask_top__DOT__set_inputs__63__t_update_en;
    vlSelf->top__DOT__update_val = __Vtask_top__DOT__set_inputs__63__t_update_val;
    vlSelf->top__DOT__entry_upper_reached = __Vtask_top__DOT__set_inputs__63__t_entry_upper_reached;
    vlSelf->top__DOT__entry_lower_reached = __Vtask_top__DOT__set_inputs__63__t_entry_lower_reached;
    vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3d404911__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "utb_BranchGlobalCtrl.v", 
                                                       226);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_top__DOT__test_outputs__64__t_update_ghr = 1U;
    __Vtask_top__DOT__test_outputs__64__t_decrement_entry = 0U;
    __Vtask_top__DOT__test_outputs__64__t_increment_entry = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__increment_entry) 
                       == (IData)(__Vtask_top__DOT__test_outputs__64__t_increment_entry)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("increment_entry is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__64__t_increment_entry,
                          1,(IData)(vlSelf->top__DOT__increment_entry));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("increment_entry is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__64__t_increment_entry,
                      1,(IData)(vlSelf->top__DOT__increment_entry));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGlobalCtrl.v", 273, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__decrement_entry) 
                       == (IData)(__Vtask_top__DOT__test_outputs__64__t_decrement_entry)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("decrement_entry is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__64__t_decrement_entry,
                          1,(IData)(vlSelf->top__DOT__decrement_entry));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("decrement_entry is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__64__t_decrement_entry,
                      1,(IData)(vlSelf->top__DOT__decrement_entry));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGlobalCtrl.v", 279, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->top__DOT__update_ghr) 
                       == (IData)(__Vtask_top__DOT__test_outputs__64__t_update_ghr)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("update_ghr is correct.  Expected: %x, Actual: %x\n",
                          1,__Vtask_top__DOT__test_outputs__64__t_update_ghr,
                          1,(IData)(vlSelf->top__DOT__update_ghr));
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("update_ghr is incorrect.  Expected: %x, Actual: %x\n",
                      1,__Vtask_top__DOT__test_outputs__64__t_update_ghr,
                      1,(IData)(vlSelf->top__DOT__update_ghr));
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_FINISH_MT("utb_BranchGlobalCtrl.v", 285, "");
        }
    }
    vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
    __Vtask_top__DOT__delay__71__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__71__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__71__unnamedblk1__DOT__i, __Vtask_top__DOT__delay__71__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "utb_BranchGlobalCtrl.v", 
                                           243);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__71__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__71__unnamedblk1__DOT__i);
    }
    vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF("\nAll tests passed!\n");
    VL_FINISH_MT("utb_BranchGlobalCtrl.v", 236, "");
    vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
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
    vlSelf->__VactTriggered.set(0U, ((~ (IData)(vlSelf->clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0)));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
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
