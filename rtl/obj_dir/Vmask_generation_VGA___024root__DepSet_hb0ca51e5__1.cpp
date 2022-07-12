// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmask_generation_VGA.h for the primary calling header

#include "verilated.h"

#include "Vmask_generation_VGA___024root.h"

void Vmask_generation_VGA___024root___combo__TOP__0(Vmask_generation_VGA___024root* vlSelf);
void Vmask_generation_VGA___024root___sequent__TOP__0(Vmask_generation_VGA___024root* vlSelf);
void Vmask_generation_VGA___024root___combo__TOP__1(Vmask_generation_VGA___024root* vlSelf);

void Vmask_generation_VGA___024root___eval(Vmask_generation_VGA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmask_generation_VGA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask_generation_VGA___024root___eval\n"); );
    // Body
    Vmask_generation_VGA___024root___combo__TOP__0(vlSelf);
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->rst_n)) & (IData)(vlSelf->__Vclklast__TOP__rst_n)))) {
        Vmask_generation_VGA___024root___sequent__TOP__0(vlSelf);
    }
    Vmask_generation_VGA___024root___combo__TOP__1(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst_n = vlSelf->rst_n;
}

#ifdef VL_DEBUG
void Vmask_generation_VGA___024root___eval_debug_assertions(Vmask_generation_VGA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmask_generation_VGA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask_generation_VGA___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->clk_en & 0xfeU))) {
        Verilated::overWidthError("clk_en");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->pattern_w & 0xe0U))) {
        Verilated::overWidthError("pattern_w");}
    if (VL_UNLIKELY((vlSelf->pattern & 0xfeU))) {
        Verilated::overWidthError("pattern");}
    if (VL_UNLIKELY((vlSelf->load_pattern & 0xfeU))) {
        Verilated::overWidthError("load_pattern");}
    if (VL_UNLIKELY((vlSelf->mask_type & 0xfcU))) {
        Verilated::overWidthError("mask_type");}
}
#endif  // VL_DEBUG
