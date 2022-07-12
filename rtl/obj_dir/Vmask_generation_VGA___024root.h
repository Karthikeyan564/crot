// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmask_generation_VGA.h for the primary calling header

#ifndef VERILATED_VMASK_GENERATION_VGA___024ROOT_H_
#define VERILATED_VMASK_GENERATION_VGA___024ROOT_H_  // guard

#include "verilated.h"

class Vmask_generation_VGA__Syms;
VL_MODULE(Vmask_generation_VGA___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(clk_en,0,0);
    VL_IN8(pattern_w,4,0);
    VL_IN8(pattern,0,0);
    VL_IN8(repeatedPattern,7,0);
    VL_IN8(load_pattern,0,0);
    VL_IN8(mask_type,1,0);
    VL_OUT8(rp_valid,0,0);
    CData/*0:0*/ mask_generation_VGA__DOT__valid_next;
    CData/*0:0*/ mask_generation_VGA__DOT__slide_bit;
    CData/*0:0*/ mask_generation_VGA__DOT__feedback_bit;
    CData/*0:0*/ mask_generation_VGA__DOT__seedCounter;
    CData/*0:0*/ mask_generation_VGA__DOT__seedLoaded;
    CData/*7:0*/ mask_generation_VGA__DOT__p;
    CData/*0:0*/ mask_generation_VGA__DOT__w5;
    CData/*0:0*/ mask_generation_VGA__DOT__w6;
    CData/*0:0*/ mask_generation_VGA__DOT__w7;
    CData/*0:0*/ mask_generation_VGA__DOT__w8;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst_n;
    VL_OUTW(mg_mask,639,0,20);
    VlWide<20>/*639:0*/ mask_generation_VGA__DOT__reg_curr;
    VlWide<20>/*639:0*/ mask_generation_VGA__DOT__reg_next;
    IData/*31:0*/ mask_generation_VGA__DOT__pre_reg_curr;
    IData/*31:0*/ mask_generation_VGA__DOT__pre_reg_next;
    IData/*31:0*/ mask_generation_VGA__DOT__post_reg_curr;
    IData/*31:0*/ mask_generation_VGA__DOT__post_reg_next;
    VlWide<20>/*639:0*/ mask_generation_VGA__DOT__reg_next_random;
    VlWide<20>/*639:0*/ mask_generation_VGA__DOT__c;
    VlUnpacked<VlUnpacked<CData/*0:0*/, 32>, 20> mask_generation_VGA__DOT__feedback_bit_random;

    // INTERNAL VARIABLES
    Vmask_generation_VGA__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmask_generation_VGA___024root(Vmask_generation_VGA__Syms* symsp, const char* name);
    ~Vmask_generation_VGA___024root();
    VL_UNCOPYABLE(Vmask_generation_VGA___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
