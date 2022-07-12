// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmask_generation_VGA.h for the primary calling header

#include "verilated.h"

#include "Vmask_generation_VGA___024root.h"

VL_ATTR_COLD void Vmask_generation_VGA___024root___eval_initial(Vmask_generation_VGA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmask_generation_VGA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask_generation_VGA___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst_n = vlSelf->rst_n;
}

VL_ATTR_COLD void Vmask_generation_VGA___024root___settle__TOP__0(Vmask_generation_VGA___024root* vlSelf);
VL_ATTR_COLD void Vmask_generation_VGA___024root___settle__TOP__1(Vmask_generation_VGA___024root* vlSelf);

VL_ATTR_COLD void Vmask_generation_VGA___024root___eval_settle(Vmask_generation_VGA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmask_generation_VGA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask_generation_VGA___024root___eval_settle\n"); );
    // Body
    Vmask_generation_VGA___024root___settle__TOP__0(vlSelf);
    Vmask_generation_VGA___024root___settle__TOP__1(vlSelf);
}

VL_ATTR_COLD void Vmask_generation_VGA___024root___final(Vmask_generation_VGA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmask_generation_VGA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask_generation_VGA___024root___final\n"); );
}

VL_ATTR_COLD void Vmask_generation_VGA___024root___ctor_var_reset(Vmask_generation_VGA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmask_generation_VGA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask_generation_VGA___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->clk_en = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->pattern_w = VL_RAND_RESET_I(5);
    vlSelf->pattern = VL_RAND_RESET_I(1);
    vlSelf->repeatedPattern = VL_RAND_RESET_I(8);
    vlSelf->load_pattern = VL_RAND_RESET_I(1);
    vlSelf->mask_type = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(640, vlSelf->mg_mask);
    vlSelf->rp_valid = VL_RAND_RESET_I(1);
    vlSelf->mask_generation_VGA__DOT__valid_next = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(640, vlSelf->mask_generation_VGA__DOT__reg_curr);
    VL_RAND_RESET_W(640, vlSelf->mask_generation_VGA__DOT__reg_next);
    vlSelf->mask_generation_VGA__DOT__pre_reg_curr = VL_RAND_RESET_I(32);
    vlSelf->mask_generation_VGA__DOT__pre_reg_next = VL_RAND_RESET_I(32);
    vlSelf->mask_generation_VGA__DOT__post_reg_curr = VL_RAND_RESET_I(32);
    vlSelf->mask_generation_VGA__DOT__post_reg_next = VL_RAND_RESET_I(32);
    vlSelf->mask_generation_VGA__DOT__slide_bit = VL_RAND_RESET_I(1);
    vlSelf->mask_generation_VGA__DOT__feedback_bit = VL_RAND_RESET_I(1);
    vlSelf->mask_generation_VGA__DOT__seedCounter = VL_RAND_RESET_I(1);
    vlSelf->mask_generation_VGA__DOT__seedLoaded = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<20; ++__Vi0) {
        for (int __Vi1=0; __Vi1<32; ++__Vi1) {
            vlSelf->mask_generation_VGA__DOT__feedback_bit_random[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    VL_RAND_RESET_W(640, vlSelf->mask_generation_VGA__DOT__reg_next_random);
    VL_RAND_RESET_W(640, vlSelf->mask_generation_VGA__DOT__c);
    vlSelf->mask_generation_VGA__DOT__p = VL_RAND_RESET_I(8);
    vlSelf->mask_generation_VGA__DOT__w5 = VL_RAND_RESET_I(1);
    vlSelf->mask_generation_VGA__DOT__w6 = VL_RAND_RESET_I(1);
    vlSelf->mask_generation_VGA__DOT__w7 = VL_RAND_RESET_I(1);
    vlSelf->mask_generation_VGA__DOT__w8 = VL_RAND_RESET_I(1);
}
