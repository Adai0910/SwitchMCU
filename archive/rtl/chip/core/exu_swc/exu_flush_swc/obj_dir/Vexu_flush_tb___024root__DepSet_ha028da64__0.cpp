// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vexu_flush_tb.h for the primary calling header

#include "Vexu_flush_tb__pch.h"
#include "Vexu_flush_tb__Syms.h"
#include "Vexu_flush_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vexu_flush_tb___024root___dump_triggers__act(Vexu_flush_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vexu_flush_tb___024root___eval_triggers__act(Vexu_flush_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_flush_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->exu_flush_tb__DOT__hclk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__exu_flush_tb__DOT__hclk__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__exu_flush_tb__DOT__hclk__0 
        = vlSelf->exu_flush_tb__DOT__hclk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vexu_flush_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
