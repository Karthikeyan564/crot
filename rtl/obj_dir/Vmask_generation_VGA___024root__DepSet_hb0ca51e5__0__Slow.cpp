// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmask_generation_VGA.h for the primary calling header

#include "verilated.h"

#include "Vmask_generation_VGA___024root.h"

extern const VlWide<20>/*639:0*/ Vmask_generation_VGA__ConstPool__CONST_hb421a097_0;

VL_ATTR_COLD void Vmask_generation_VGA___024root___settle__TOP__0(Vmask_generation_VGA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmask_generation_VGA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask_generation_VGA___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->mask_generation_VGA__DOT__w6 = (IData)(
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->pattern_w))));
    vlSelf->mask_generation_VGA__DOT__w8 = (IData)(
                                                   (3U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->pattern_w))));
    vlSelf->mask_generation_VGA__DOT__w5 = (IData)(
                                                   (0U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->pattern_w))));
    vlSelf->mask_generation_VGA__DOT__w7 = (IData)(
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->pattern_w))));
    if (vlSelf->rst_n) {
        vlSelf->mask_generation_VGA__DOT__valid_next 
            = ((~ (IData)(vlSelf->load_pattern)) & (IData)(
                                                           ((2U 
                                                             != (IData)(vlSelf->mask_type)) 
                                                            | (IData)(vlSelf->mask_generation_VGA__DOT__seedLoaded))));
        if (vlSelf->load_pattern) {
            vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                = vlSelf->mask_generation_VGA__DOT__reg_curr[0U];
            vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                = vlSelf->mask_generation_VGA__DOT__reg_curr[1U];
            vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                = vlSelf->mask_generation_VGA__DOT__reg_curr[2U];
            vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                = vlSelf->mask_generation_VGA__DOT__reg_curr[3U];
            vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                = vlSelf->mask_generation_VGA__DOT__reg_curr[4U];
            vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                = vlSelf->mask_generation_VGA__DOT__reg_curr[5U];
            vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                = vlSelf->mask_generation_VGA__DOT__reg_curr[6U];
            vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                = vlSelf->mask_generation_VGA__DOT__reg_curr[7U];
            vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                = vlSelf->mask_generation_VGA__DOT__reg_curr[8U];
            vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                = vlSelf->mask_generation_VGA__DOT__reg_curr[9U];
            vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                = vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU];
            vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                = vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU];
            vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                = vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU];
            vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                = vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU];
            vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                = vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU];
            vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                = vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU];
            vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                = vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U];
            vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                = vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U];
            vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                = vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U];
            vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                = vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U];
        } else if ((1U & (~ ((IData)(vlSelf->mask_type) 
                             >> 1U)))) {
            if ((1U & (IData)(vlSelf->mask_type))) {
                if ((0x1fU == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__pre_reg_curr 
                                 >> 0x1eU));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            << 1U) | (IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]) 
                                         << 1U));
                }
                if ((0x1eU == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__pre_reg_curr 
                                 >> 0x1dU));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            << 1U) | (IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]) 
                                         << 1U));
                }
                if ((0x1dU == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__pre_reg_curr 
                                 >> 0x1cU));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            << 1U) | (IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]) 
                                         << 1U));
                }
                if ((0x1cU == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__pre_reg_curr 
                                 >> 0x1bU));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            << 1U) | (IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]) 
                                         << 1U));
                }
                if ((0x1bU == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__pre_reg_curr 
                                 >> 0x1aU));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            << 1U) | (IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]) 
                                         << 1U));
                }
                if ((0x1aU == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__pre_reg_curr 
                                 >> 0x19U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            << 1U) | (IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]) 
                                         << 1U));
                }
                if ((0x19U == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__pre_reg_curr 
                                 >> 0x18U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            << 1U) | (IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]) 
                                         << 1U));
                }
                if ((0x18U == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__pre_reg_curr 
                                 >> 0x17U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            << 1U) | (IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]) 
                                         << 1U));
                }
                if ((0x17U == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__pre_reg_curr 
                                 >> 0x16U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            << 1U) | (IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]) 
                                         << 1U));
                }
                if ((0x16U == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__pre_reg_curr 
                                 >> 0x15U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            << 1U) | (IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]) 
                                         << 1U));
                }
                if ((0x15U == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__pre_reg_curr 
                                 >> 0x14U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            << 1U) | (IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]) 
                                         << 1U));
                }
                if ((0x14U == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__pre_reg_curr 
                                 >> 0x13U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            << 1U) | (IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]) 
                                         << 1U));
                }
                if ((0x13U == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__pre_reg_curr 
                                 >> 0x12U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            << 1U) | (IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]) 
                                         << 1U));
                }
                if ((0x12U == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__pre_reg_curr 
                                 >> 0x11U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            << 1U) | (IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]) 
                                         << 1U));
                }
                if ((0x11U == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__pre_reg_curr 
                                 >> 0x10U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            << 1U) | (IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]) 
                                         << 1U));
                }
                if ((0x10U == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__pre_reg_curr 
                                 >> 0xfU));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            << 1U) | (IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]) 
                                         << 1U));
                }
                if ((0xfU == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__pre_reg_curr 
                                 >> 0xeU));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            << 1U) | (IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]) 
                                         << 1U));
                }
                if ((0xeU == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__pre_reg_curr 
                                 >> 0xdU));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            << 1U) | (IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]) 
                                         << 1U));
                }
                if ((0xdU == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__pre_reg_curr 
                                 >> 0xcU));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            << 1U) | (IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]) 
                                         << 1U));
                }
                if ((0xcU == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__pre_reg_curr 
                                 >> 0xbU));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            << 1U) | (IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]) 
                                         << 1U));
                }
                if ((0xbU == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__pre_reg_curr 
                                 >> 0xaU));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            << 1U) | (IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]) 
                                         << 1U));
                }
                if ((0xaU == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__pre_reg_curr 
                                 >> 9U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            << 1U) | (IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]) 
                                         << 1U));
                }
                if ((9U == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__pre_reg_curr 
                                 >> 8U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            << 1U) | (IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]) 
                                         << 1U));
                }
                if ((8U == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__pre_reg_curr 
                                 >> 7U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            << 1U) | (IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]) 
                                         << 1U));
                }
                if ((7U == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__pre_reg_curr 
                                 >> 6U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            << 1U) | (IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]) 
                                         << 1U));
                }
                if ((6U == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__pre_reg_curr 
                                 >> 5U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            << 1U) | (IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]) 
                                         << 1U));
                }
                if ((5U == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__pre_reg_curr 
                                 >> 4U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            << 1U) | (IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]) 
                                         << 1U));
                }
                if ((4U == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__pre_reg_curr 
                                 >> 3U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            << 1U) | (IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]) 
                                         << 1U));
                }
                if ((3U == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__pre_reg_curr 
                                 >> 2U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            << 1U) | (IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]) 
                                         << 1U));
                }
                if ((2U == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__pre_reg_curr 
                                 >> 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            << 1U) | (IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]) 
                                         << 1U));
                }
                if ((1U == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & vlSelf->mask_generation_VGA__DOT__pre_reg_curr);
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            << 1U) | (IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[1U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[2U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[3U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[4U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[5U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[6U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[7U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[8U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[9U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                                         << 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                             & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U]) 
                            >> 0x1fU) | ((Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                          & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]) 
                                         << 1U));
                }
            } else {
                if ((1U == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (vlSelf->mask_generation_VGA__DOT__post_reg_curr 
                           >> 0x1fU);
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit) 
                            << 0x1fU) | (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                         & (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                                            >> 1U)));
                }
                if ((2U == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__post_reg_curr 
                                 >> 0x1eU));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit) 
                            << 0x1fU) | (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                         & (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                                            >> 1U)));
                }
                if ((3U == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__post_reg_curr 
                                 >> 0x1dU));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit) 
                            << 0x1fU) | (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                         & (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                                            >> 1U)));
                }
                if ((4U == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__post_reg_curr 
                                 >> 0x1cU));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit) 
                            << 0x1fU) | (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                         & (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                                            >> 1U)));
                }
                if ((5U == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__post_reg_curr 
                                 >> 0x1bU));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit) 
                            << 0x1fU) | (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                         & (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                                            >> 1U)));
                }
                if ((6U == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__post_reg_curr 
                                 >> 0x1aU));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit) 
                            << 0x1fU) | (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                         & (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                                            >> 1U)));
                }
                if ((7U == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__post_reg_curr 
                                 >> 0x19U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit) 
                            << 0x1fU) | (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                         & (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                                            >> 1U)));
                }
                if ((8U == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__post_reg_curr 
                                 >> 0x18U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit) 
                            << 0x1fU) | (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                         & (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                                            >> 1U)));
                }
                if ((9U == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__post_reg_curr 
                                 >> 0x17U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit) 
                            << 0x1fU) | (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                         & (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                                            >> 1U)));
                }
                if ((0xaU == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__post_reg_curr 
                                 >> 0x16U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit) 
                            << 0x1fU) | (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                         & (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                                            >> 1U)));
                }
                if ((0xbU == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__post_reg_curr 
                                 >> 0x15U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit) 
                            << 0x1fU) | (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                         & (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                                            >> 1U)));
                }
                if ((0xcU == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__post_reg_curr 
                                 >> 0x14U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit) 
                            << 0x1fU) | (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                         & (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                                            >> 1U)));
                }
                if ((0xdU == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__post_reg_curr 
                                 >> 0x13U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit) 
                            << 0x1fU) | (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                         & (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                                            >> 1U)));
                }
                if ((0xeU == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__post_reg_curr 
                                 >> 0x12U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit) 
                            << 0x1fU) | (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                         & (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                                            >> 1U)));
                }
                if ((0xfU == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__post_reg_curr 
                                 >> 0x11U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit) 
                            << 0x1fU) | (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                         & (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                                            >> 1U)));
                }
                if ((0x10U == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__post_reg_curr 
                                 >> 0x10U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit) 
                            << 0x1fU) | (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                         & (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                                            >> 1U)));
                }
                if ((0x11U == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__post_reg_curr 
                                 >> 0xfU));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit) 
                            << 0x1fU) | (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                         & (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                                            >> 1U)));
                }
                if ((0x12U == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__post_reg_curr 
                                 >> 0xeU));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit) 
                            << 0x1fU) | (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                         & (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                                            >> 1U)));
                }
                if ((0x13U == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__post_reg_curr 
                                 >> 0xdU));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit) 
                            << 0x1fU) | (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                         & (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                                            >> 1U)));
                }
                if ((0x14U == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__post_reg_curr 
                                 >> 0xcU));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit) 
                            << 0x1fU) | (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                         & (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                                            >> 1U)));
                }
                if ((0x15U == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__post_reg_curr 
                                 >> 0xbU));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit) 
                            << 0x1fU) | (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                         & (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                                            >> 1U)));
                }
                if ((0x16U == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__post_reg_curr 
                                 >> 0xaU));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit) 
                            << 0x1fU) | (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                         & (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                                            >> 1U)));
                }
                if ((0x17U == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__post_reg_curr 
                                 >> 9U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit) 
                            << 0x1fU) | (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                         & (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                                            >> 1U)));
                }
                if ((0x18U == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__post_reg_curr 
                                 >> 8U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit) 
                            << 0x1fU) | (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                         & (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                                            >> 1U)));
                }
                if ((0x19U == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__post_reg_curr 
                                 >> 7U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit) 
                            << 0x1fU) | (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                         & (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                                            >> 1U)));
                }
                if ((0x1aU == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__post_reg_curr 
                                 >> 6U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit) 
                            << 0x1fU) | (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                         & (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                                            >> 1U)));
                }
                if ((0x1bU == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__post_reg_curr 
                                 >> 5U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit) 
                            << 0x1fU) | (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                         & (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                                            >> 1U)));
                }
                if ((0x1cU == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__post_reg_curr 
                                 >> 4U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit) 
                            << 0x1fU) | (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                         & (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                                            >> 1U)));
                }
                if ((0x1dU == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__post_reg_curr 
                                 >> 3U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit) 
                            << 0x1fU) | (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                         & (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                                            >> 1U)));
                }
                if ((0x1eU == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__post_reg_curr 
                                 >> 2U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit) 
                            << 0x1fU) | (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                         & (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                                            >> 1U)));
                }
                if ((0x1fU == (IData)(vlSelf->pattern_w))) {
                    vlSelf->mask_generation_VGA__DOT__feedback_bit 
                        = (1U & (vlSelf->mask_generation_VGA__DOT__post_reg_curr 
                                 >> 1U));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[1U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[1U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[1U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[2U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[2U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[2U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[3U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[3U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[3U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[4U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[4U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[4U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[5U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[5U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[5U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[6U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[6U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[6U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[7U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[7U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[7U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[8U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[8U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[8U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[9U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[9U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[9U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xaU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xaU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xbU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xbU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xcU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xcU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xdU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xdU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xeU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xeU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0xfU] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0xfU] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x10U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x10U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x11U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x11U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] 
                        = (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x12U] 
                           & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                               << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                                            >> 1U)));
                    vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] 
                        = (((IData)(vlSelf->mask_generation_VGA__DOT__feedback_bit) 
                            << 0x1fU) | (Vmask_generation_VGA__ConstPool__CONST_hb421a097_0[0x13U] 
                                         & (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                                            >> 1U)));
                }
            }
        }
        if ((1U & (~ (IData)(vlSelf->load_pattern)))) {
            if ((1U & (~ ((IData)(vlSelf->mask_type) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->mask_type))) {
                    vlSelf->mask_generation_VGA__DOT__post_reg_next = 0U;
                    vlSelf->mask_generation_VGA__DOT__slide_bit 
                        = (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                           >> 0x1fU);
                    vlSelf->mask_generation_VGA__DOT__pre_reg_next 
                        = ((vlSelf->mask_generation_VGA__DOT__pre_reg_curr 
                            << 1U) | (IData)(vlSelf->mask_generation_VGA__DOT__slide_bit));
                } else {
                    vlSelf->mask_generation_VGA__DOT__pre_reg_next = 0U;
                    vlSelf->mask_generation_VGA__DOT__slide_bit 
                        = (1U & vlSelf->mask_generation_VGA__DOT__reg_curr[0U]);
                    vlSelf->mask_generation_VGA__DOT__post_reg_next 
                        = (((IData)(vlSelf->mask_generation_VGA__DOT__slide_bit) 
                            << 0x1fU) | (vlSelf->mask_generation_VGA__DOT__post_reg_curr 
                                         >> 1U));
                }
            }
        }
    } else {
        vlSelf->mask_generation_VGA__DOT__valid_next = 0U;
        vlSelf->mask_generation_VGA__DOT__feedback_bit = 0U;
        vlSelf->mask_generation_VGA__DOT__reg_next[0U] = 0U;
        vlSelf->mask_generation_VGA__DOT__reg_next[1U] = 0U;
        vlSelf->mask_generation_VGA__DOT__reg_next[2U] = 0U;
        vlSelf->mask_generation_VGA__DOT__reg_next[3U] = 0U;
        vlSelf->mask_generation_VGA__DOT__reg_next[4U] = 0U;
        vlSelf->mask_generation_VGA__DOT__reg_next[5U] = 0U;
        vlSelf->mask_generation_VGA__DOT__reg_next[6U] = 0U;
        vlSelf->mask_generation_VGA__DOT__reg_next[7U] = 0U;
        vlSelf->mask_generation_VGA__DOT__reg_next[8U] = 0U;
        vlSelf->mask_generation_VGA__DOT__reg_next[9U] = 0U;
        vlSelf->mask_generation_VGA__DOT__reg_next[0xaU] = 0U;
        vlSelf->mask_generation_VGA__DOT__reg_next[0xbU] = 0U;
        vlSelf->mask_generation_VGA__DOT__reg_next[0xcU] = 0U;
        vlSelf->mask_generation_VGA__DOT__reg_next[0xdU] = 0U;
        vlSelf->mask_generation_VGA__DOT__reg_next[0xeU] = 0U;
        vlSelf->mask_generation_VGA__DOT__reg_next[0xfU] = 0U;
        vlSelf->mask_generation_VGA__DOT__reg_next[0x10U] = 0U;
        vlSelf->mask_generation_VGA__DOT__reg_next[0x11U] = 0U;
        vlSelf->mask_generation_VGA__DOT__reg_next[0x12U] = 0U;
        vlSelf->mask_generation_VGA__DOT__reg_next[0x13U] = 0U;
        vlSelf->mask_generation_VGA__DOT__slide_bit = 0U;
        vlSelf->mask_generation_VGA__DOT__pre_reg_next = 0U;
        vlSelf->mask_generation_VGA__DOT__post_reg_next = 0U;
    }
    vlSelf->mask_generation_VGA__DOT__c[0U] = ((0xffffffe0U 
                                                & vlSelf->mask_generation_VGA__DOT__c[0U]) 
                                               | (0x1fU 
                                                  & (IData)(vlSelf->mask_generation_VGA__DOT__p)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0U][0U] 
        = (1U & VL_REDXOR_32((0xc0000401U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0U][1U] 
        = (1U & VL_REDXOR_32((0x80008802U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0U][2U] 
        = (1U & VL_REDXOR_32((0x20011004U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0U][3U] 
        = (1U & VL_REDXOR_32((0x10022008U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0U][4U] 
        = (1U & VL_REDXOR_32((0x8044010U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0U][5U] 
        = (1U & VL_REDXOR_32((0x4088020U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0U][6U] 
        = (1U & VL_REDXOR_32((0x2110040U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0U][7U] 
        = (1U & VL_REDXOR_32((0x1220080U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0U][8U] 
        = (1U & VL_REDXOR_32((0x40840100U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0U][9U] 
        = (1U & VL_REDXOR_32((0x20480200U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0U][0xaU] 
        = (1U & VL_REDXOR_32((0x10100c00U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0U][0xbU] 
        = (1U & VL_REDXOR_32((0x8200c00U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0U][0xcU] 
        = (1U & VL_REDXOR_32((0x4401200U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0U][0xdU] 
        = (1U & VL_REDXOR_32((0x2802100U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0U][0xeU] 
        = (1U & VL_REDXOR_32((0x1004082U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0U][0xfU] 
        = (1U & VL_REDXOR_32((0x2008044U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0U][0x10U] 
        = (1U & VL_REDXOR_32((0x4010028U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0U][0x11U] 
        = (1U & VL_REDXOR_32((0x8020000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0U][0x12U] 
        = (1U & VL_REDXOR_32((0x10040021U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0U][0x13U] 
        = (1U & VL_REDXOR_32((0x20080044U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0U][0x14U] 
        = (1U & VL_REDXOR_32((0x40100082U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0U][0x15U] 
        = (1U & VL_REDXOR_32((0x80000100U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0U][0x16U] 
        = (1U & VL_REDXOR_32((0x400209U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0U][0x17U] 
        = (1U & VL_REDXOR_32((0x900402U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0U][0x19U] 
        = (1U & VL_REDXOR_32((0x2080804U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0U][0x1aU] 
        = (1U & VL_REDXOR_32((0x4041008U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0U][0x1bU] 
        = (1U & VL_REDXOR_32((0x8022010U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0U][0x18U] 
        = (1U & VL_REDXOR_32((0x1014020U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0U][0x1cU] 
        = (1U & VL_REDXOR_32((0x10408040U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0U][0x1dU] 
        = (1U & VL_REDXOR_32((0x20804080U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0U][0x1eU] 
        = (1U & VL_REDXOR_32((0x42002100U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0U][0x1fU] 
        = (1U & VL_REDXOR_32((0x81001200U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[1U][0U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1fU) ^ VL_REDXOR_32((0x60000200U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[1U][1U] 
        = (1U & VL_REDXOR_32((0x40004401U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[1U][2U] 
        = (1U & VL_REDXOR_32((0x10008802U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[1U][3U] 
        = (1U & VL_REDXOR_32((0x8011004U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[1U][4U] 
        = (1U & VL_REDXOR_32((0x4022008U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[1U][5U] 
        = (1U & VL_REDXOR_32((0x2044010U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[1U][6U] 
        = (1U & VL_REDXOR_32((0x1088020U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[1U][7U] 
        = (1U & VL_REDXOR_32((0x910040U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[1U][8U] 
        = (1U & VL_REDXOR_32((0x20420080U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[1U][9U] 
        = (1U & VL_REDXOR_32((0x10240100U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[1U][0xaU] 
        = (1U & VL_REDXOR_32((0x8080600U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[1U][0xbU] 
        = (1U & VL_REDXOR_32((0x4100600U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[1U][0xcU] 
        = (1U & VL_REDXOR_32((0x2200900U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[1U][0xdU] 
        = (1U & VL_REDXOR_32((0x1401080U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[1U][0xeU] 
        = (1U & VL_REDXOR_32((0x802041U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[1U][0xfU] 
        = (1U & VL_REDXOR_32((0x1004022U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[1U][0x10U] 
        = (1U & VL_REDXOR_32((0x2008014U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[1U][0x11U] 
        = (1U & VL_REDXOR_32((0x4010000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[1U][0x12U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1fU) ^ VL_REDXOR_32((0x8020010U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[1U][0x13U] 
        = (1U & VL_REDXOR_32((0x10040022U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[1U][0x14U] 
        = (1U & VL_REDXOR_32((0x20080041U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[1U][0x15U] 
        = (1U & VL_REDXOR_32((0x40000080U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[1U][0x16U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1fU) ^ VL_REDXOR_32((0x200104U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[1U][0x17U] 
        = (1U & VL_REDXOR_32((0x480201U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[1U][0x19U] 
        = (1U & VL_REDXOR_32((0x1040402U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[1U][0x1aU] 
        = (1U & VL_REDXOR_32((0x2020804U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[1U][0x1bU] 
        = (1U & VL_REDXOR_32((0x4011008U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[1U][0x18U] 
        = (1U & VL_REDXOR_32((0x80a010U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[1U][0x1cU] 
        = (1U & VL_REDXOR_32((0x8204020U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[1U][0x1dU] 
        = (1U & VL_REDXOR_32((0x10402040U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[1U][0x1eU] 
        = (1U & VL_REDXOR_32((0x21001080U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[1U][0x1fU] 
        = (1U & VL_REDXOR_32((0x40800900U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[2U][0U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1eU) ^ VL_REDXOR_32((0x30000100U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[2U][1U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1fU) ^ VL_REDXOR_32((0x20002200U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[2U][2U] 
        = (1U & VL_REDXOR_32((0x8004401U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[2U][3U] 
        = (1U & VL_REDXOR_32((0x4008802U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[2U][4U] 
        = (1U & VL_REDXOR_32((0x2011004U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[2U][5U] 
        = (1U & VL_REDXOR_32((0x1022008U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[2U][6U] 
        = (1U & VL_REDXOR_32((0x844010U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[2U][7U] 
        = (1U & VL_REDXOR_32((0x488020U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[2U][8U] 
        = (1U & VL_REDXOR_32((0x10210040U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[2U][9U] 
        = (1U & VL_REDXOR_32((0x8120080U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[2U][0xaU] 
        = (1U & VL_REDXOR_32((0x4040300U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[2U][0xbU] 
        = (1U & VL_REDXOR_32((0x2080300U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[2U][0xcU] 
        = (1U & VL_REDXOR_32((0x1100480U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[2U][0xdU] 
        = (1U & VL_REDXOR_32((0xa00840U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[2U][0xeU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1fU) ^ VL_REDXOR_32((0x401020U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[2U][0xfU] 
        = (1U & VL_REDXOR_32((0x802011U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[2U][0x10U] 
        = (1U & VL_REDXOR_32((0x100400aU & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[2U][0x11U] 
        = (1U & VL_REDXOR_32((0x2008000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[2U][0x12U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1eU) ^ VL_REDXOR_32((0x4010008U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[2U][0x13U] 
        = (1U & VL_REDXOR_32((0x8020011U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[2U][0x14U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1fU) ^ VL_REDXOR_32((0x10040020U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[2U][0x15U] 
        = (1U & VL_REDXOR_32((0x20000040U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[2U][0x16U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1eU) ^ VL_REDXOR_32((0x100082U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[2U][0x17U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1fU) ^ VL_REDXOR_32((0x240100U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[2U][0x19U] 
        = (1U & VL_REDXOR_32((0x820201U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[2U][0x1aU] 
        = (1U & VL_REDXOR_32((0x1010402U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[2U][0x1bU] 
        = (1U & VL_REDXOR_32((0x2008804U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[2U][0x18U] 
        = (1U & VL_REDXOR_32((0x405008U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[2U][0x1cU] 
        = (1U & VL_REDXOR_32((0x4102010U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[2U][0x1dU] 
        = (1U & VL_REDXOR_32((0x8201020U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[2U][0x1eU] 
        = (1U & VL_REDXOR_32((0x10800840U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[2U][0x1fU] 
        = (1U & VL_REDXOR_32((0x20400480U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[3U][0U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1dU) ^ VL_REDXOR_32((0x18000080U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[3U][1U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1eU) ^ VL_REDXOR_32((0x10001100U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[3U][2U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1fU) ^ VL_REDXOR_32((0x4002200U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[3U][3U] 
        = (1U & VL_REDXOR_32((0x2004401U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[3U][4U] 
        = (1U & VL_REDXOR_32((0x1008802U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[3U][5U] 
        = (1U & VL_REDXOR_32((0x811004U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[3U][6U] 
        = (1U & VL_REDXOR_32((0x422008U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[3U][7U] 
        = (1U & VL_REDXOR_32((0x244010U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[3U][8U] 
        = (1U & VL_REDXOR_32((0x8108020U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[3U][9U] 
        = (1U & VL_REDXOR_32((0x4090040U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[3U][0xaU] 
        = (1U & VL_REDXOR_32((0x2020180U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[3U][0xbU] 
        = (1U & VL_REDXOR_32((0x1040180U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[3U][0xcU] 
        = (1U & VL_REDXOR_32((0x880240U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[3U][0xdU] 
        = (1U & VL_REDXOR_32((0x500420U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[3U][0xeU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1eU) ^ VL_REDXOR_32((0x200810U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[3U][0xfU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1fU) ^ VL_REDXOR_32((0x401008U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[3U][0x10U] 
        = (1U & VL_REDXOR_32((0x802005U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[3U][0x11U] 
        = (1U & VL_REDXOR_32((0x1004000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[3U][0x12U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1dU) ^ VL_REDXOR_32((0x2008004U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[3U][0x13U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1fU) ^ VL_REDXOR_32((0x4010008U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[3U][0x14U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1eU) ^ VL_REDXOR_32((0x8020010U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[3U][0x15U] 
        = (1U & VL_REDXOR_32((0x10000020U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[3U][0x16U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1dU) ^ VL_REDXOR_32((0x80041U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[3U][0x17U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1eU) ^ VL_REDXOR_32((0x120080U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[3U][0x19U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1fU) ^ VL_REDXOR_32((0x410100U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[3U][0x1aU] 
        = (1U & VL_REDXOR_32((0x808201U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[3U][0x1bU] 
        = (1U & VL_REDXOR_32((0x1004402U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[3U][0x18U] 
        = (1U & VL_REDXOR_32((0x202804U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[3U][0x1cU] 
        = (1U & VL_REDXOR_32((0x2081008U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[3U][0x1dU] 
        = (1U & VL_REDXOR_32((0x4100810U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[3U][0x1eU] 
        = (1U & VL_REDXOR_32((0x8400420U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[3U][0x1fU] 
        = (1U & VL_REDXOR_32((0x10200240U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[4U][0U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1cU) ^ VL_REDXOR_32((0xc000040U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[4U][1U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1dU) ^ VL_REDXOR_32((0x8000880U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[4U][2U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1eU) ^ VL_REDXOR_32((0x2001100U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[4U][3U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1fU) ^ VL_REDXOR_32((0x1002200U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[4U][4U] 
        = (1U & VL_REDXOR_32((0x804401U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[4U][5U] 
        = (1U & VL_REDXOR_32((0x408802U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[4U][6U] 
        = (1U & VL_REDXOR_32((0x211004U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[4U][7U] 
        = (1U & VL_REDXOR_32((0x122008U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[4U][8U] 
        = (1U & VL_REDXOR_32((0x4084010U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[4U][9U] 
        = (1U & VL_REDXOR_32((0x2048020U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[4U][0xaU] 
        = (1U & VL_REDXOR_32((0x10100c0U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[4U][0xbU] 
        = (1U & VL_REDXOR_32((0x8200c0U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[4U][0xcU] 
        = (1U & VL_REDXOR_32((0x440120U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[4U][0xdU] 
        = (1U & VL_REDXOR_32((0x280210U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[4U][0xeU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1dU) ^ VL_REDXOR_32((0x100408U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[4U][0xfU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1eU) ^ VL_REDXOR_32((0x200804U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[4U][0x10U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1fU) ^ VL_REDXOR_32((0x401002U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[4U][0x11U] 
        = (1U & VL_REDXOR_32((0x802000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[4U][0x12U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1cU) ^ VL_REDXOR_32((0x1004002U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[4U][0x13U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1eU) ^ VL_REDXOR_32((0x2008004U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[4U][0x14U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1dU) ^ VL_REDXOR_32((0x4010008U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[4U][0x15U] 
        = (1U & VL_REDXOR_32((0x8000010U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[4U][0x16U] 
        = (1U & (VL_REDXOR_32((0x90000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_32((0x40020U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[4U][0x17U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1dU) ^ VL_REDXOR_32((0x90040U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[4U][0x19U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1eU) ^ VL_REDXOR_32((0x208080U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[4U][0x1aU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1fU) ^ VL_REDXOR_32((0x404100U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[4U][0x1bU] 
        = (1U & VL_REDXOR_32((0x802201U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[4U][0x18U] 
        = (1U & VL_REDXOR_32((0x101402U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[4U][0x1cU] 
        = (1U & VL_REDXOR_32((0x1040804U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[4U][0x1dU] 
        = (1U & VL_REDXOR_32((0x2080408U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[4U][0x1eU] 
        = (1U & VL_REDXOR_32((0x4200210U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[4U][0x1fU] 
        = (1U & VL_REDXOR_32((0x8100120U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[5U][0U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1bU) ^ VL_REDXOR_32((0x6000020U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[5U][1U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1cU) ^ VL_REDXOR_32((0x4000440U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[5U][2U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1dU) ^ VL_REDXOR_32((0x1000880U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[5U][3U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1eU) ^ VL_REDXOR_32((0x801100U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[5U][4U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1fU) ^ VL_REDXOR_32((0x402200U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[5U][5U] 
        = (1U & VL_REDXOR_32((0x204401U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[5U][6U] 
        = (1U & VL_REDXOR_32((0x108802U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[5U][7U] 
        = (1U & VL_REDXOR_32((0x91004U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[5U][8U] 
        = (1U & VL_REDXOR_32((0x2042008U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[5U][9U] 
        = (1U & VL_REDXOR_32((0x1024010U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[5U][0xaU] 
        = (1U & VL_REDXOR_32((0x808060U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[5U][0xbU] 
        = (1U & VL_REDXOR_32((0x410060U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[5U][0xcU] 
        = (1U & VL_REDXOR_32((0x220090U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[5U][0xdU] 
        = (1U & VL_REDXOR_32((0x140108U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[5U][0xeU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1cU) ^ VL_REDXOR_32((0x80204U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[5U][0xfU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1dU) ^ VL_REDXOR_32((0x100402U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[5U][0x10U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1eU) ^ VL_REDXOR_32((0x200801U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[5U][0x11U] 
        = (1U & VL_REDXOR_32((0x401000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[5U][0x12U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1bU) ^ VL_REDXOR_32((0x802001U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[5U][0x13U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1dU) ^ VL_REDXOR_32((0x1004002U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[5U][0x14U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1cU) ^ VL_REDXOR_32((0x2008004U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[5U][0x15U] 
        = (1U & VL_REDXOR_32((0x4000008U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[5U][0x16U] 
        = (1U & (VL_REDXOR_32((0x48000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_32((0x20010U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[5U][0x17U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1cU) ^ VL_REDXOR_32((0x48020U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[5U][0x19U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1dU) ^ VL_REDXOR_32((0x104040U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[5U][0x1aU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1eU) ^ VL_REDXOR_32((0x202080U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[5U][0x1bU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1fU) ^ VL_REDXOR_32((0x401100U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[5U][0x18U] 
        = (1U & VL_REDXOR_32((0x80a01U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[5U][0x1cU] 
        = (1U & VL_REDXOR_32((0x820402U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[5U][0x1dU] 
        = (1U & VL_REDXOR_32((0x1040204U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[5U][0x1eU] 
        = (1U & VL_REDXOR_32((0x2100108U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[5U][0x1fU] 
        = (1U & VL_REDXOR_32((0x4080090U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[6U][0U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1aU) ^ VL_REDXOR_32((0x3000010U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[6U][1U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1bU) ^ VL_REDXOR_32((0x2000220U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[6U][2U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1cU) ^ VL_REDXOR_32((0x800440U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[6U][3U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1dU) ^ VL_REDXOR_32((0x400880U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[6U][4U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1eU) ^ VL_REDXOR_32((0x201100U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[6U][5U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1fU) ^ VL_REDXOR_32((0x102200U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[6U][6U] 
        = (1U & VL_REDXOR_32((0x84401U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[6U][7U] 
        = (1U & VL_REDXOR_32((0x48802U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[6U][8U] 
        = (1U & VL_REDXOR_32((0x1021004U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[6U][9U] 
        = (1U & VL_REDXOR_32((0x812008U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[6U][0xaU] 
        = (1U & VL_REDXOR_32((0x404030U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[6U][0xbU] 
        = (1U & VL_REDXOR_32((0x208030U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[6U][0xcU] 
        = (1U & VL_REDXOR_32((0x110048U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[6U][0xdU] 
        = (1U & VL_REDXOR_32((0xa0084U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[6U][0xeU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1bU) ^ VL_REDXOR_32((0x40102U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[6U][0xfU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1cU) ^ VL_REDXOR_32((0x80201U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[6U][0x10U] 
        = (1U & (VL_REDXOR_32((0xa0000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_32((0x100400U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[6U][0x11U] 
        = (1U & VL_REDXOR_32((0x200800U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[6U][0x12U] 
        = (1U & (VL_REDXOR_32((0x84000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_32((0x401000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[6U][0x13U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1cU) ^ VL_REDXOR_32((0x802001U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[6U][0x14U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1bU) ^ VL_REDXOR_32((0x1004002U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[6U][0x15U] 
        = (1U & VL_REDXOR_32((0x2000004U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[6U][0x16U] 
        = (1U & (VL_REDXOR_32((0x24000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_32((0x10008U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[6U][0x17U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1bU) ^ VL_REDXOR_32((0x24010U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[6U][0x19U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1cU) ^ VL_REDXOR_32((0x82020U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[6U][0x1aU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1dU) ^ VL_REDXOR_32((0x101040U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[6U][0x1bU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1eU) ^ VL_REDXOR_32((0x200880U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[6U][0x18U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1fU) ^ VL_REDXOR_32((0x40500U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[6U][0x1cU] 
        = (1U & VL_REDXOR_32((0x410201U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[6U][0x1dU] 
        = (1U & VL_REDXOR_32((0x820102U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[6U][0x1eU] 
        = (1U & VL_REDXOR_32((0x1080084U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[6U][0x1fU] 
        = (1U & VL_REDXOR_32((0x2040048U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[7U][0U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x19U) ^ VL_REDXOR_32((0x1800008U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[7U][1U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1aU) ^ VL_REDXOR_32((0x1000110U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[7U][2U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1bU) ^ VL_REDXOR_32((0x400220U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[7U][3U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1cU) ^ VL_REDXOR_32((0x200440U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[7U][4U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1dU) ^ VL_REDXOR_32((0x100880U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[7U][5U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1eU) ^ VL_REDXOR_32((0x81100U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[7U][6U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1fU) ^ VL_REDXOR_32((0x42200U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[7U][7U] 
        = (1U & VL_REDXOR_32((0x24401U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[7U][8U] 
        = (1U & VL_REDXOR_32((0x810802U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[7U][9U] 
        = (1U & VL_REDXOR_32((0x409004U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[7U][0xaU] 
        = (1U & VL_REDXOR_32((0x202018U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[7U][0xbU] 
        = (1U & VL_REDXOR_32((0x104018U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[7U][0xcU] 
        = (1U & VL_REDXOR_32((0x88024U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[7U][0xdU] 
        = (1U & VL_REDXOR_32((0x50042U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[7U][0xeU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1aU) ^ VL_REDXOR_32((0x20081U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[7U][0xfU] 
        = (1U & (VL_REDXOR_32((0x88000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_32((0x40100U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[7U][0x10U] 
        = (1U & (VL_REDXOR_32((0x50000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_32((0x80200U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[7U][0x11U] 
        = (1U & VL_REDXOR_32((0x100400U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[7U][0x12U] 
        = (1U & (VL_REDXOR_32((0x42000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_32((0x200800U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[7U][0x13U] 
        = (1U & (VL_REDXOR_32((0x88000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_32((0x401000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[7U][0x14U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1aU) ^ VL_REDXOR_32((0x802001U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[7U][0x15U] 
        = (1U & VL_REDXOR_32((0x1000002U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[7U][0x16U] 
        = (1U & (VL_REDXOR_32((0x12000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x8004U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[7U][0x17U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1aU) ^ VL_REDXOR_32((0x12008U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[7U][0x19U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1bU) ^ VL_REDXOR_32((0x41010U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[7U][0x1aU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1cU) ^ VL_REDXOR_32((0x80820U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[7U][0x1bU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1dU) ^ VL_REDXOR_32((0x100440U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[7U][0x18U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1eU) ^ VL_REDXOR_32((0x20280U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[7U][0x1cU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1fU) ^ VL_REDXOR_32((0x208100U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[7U][0x1dU] 
        = (1U & VL_REDXOR_32((0x410081U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[7U][0x1eU] 
        = (1U & VL_REDXOR_32((0x840042U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[7U][0x1fU] 
        = (1U & VL_REDXOR_32((0x1020024U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[8U][0U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x18U) ^ VL_REDXOR_32((0xc00004U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[8U][1U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x19U) ^ VL_REDXOR_32((0x800088U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[8U][2U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1aU) ^ VL_REDXOR_32((0x200110U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[8U][3U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1bU) ^ VL_REDXOR_32((0x100220U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[8U][4U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1cU) ^ VL_REDXOR_32((0x80440U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[8U][5U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1dU) ^ VL_REDXOR_32((0x40880U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[8U][6U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1eU) ^ VL_REDXOR_32((0x21100U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[8U][7U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1fU) ^ VL_REDXOR_32((0x12200U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[8U][8U] 
        = (1U & VL_REDXOR_32((0x408401U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[8U][9U] 
        = (1U & VL_REDXOR_32((0x204802U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[8U][0xaU] 
        = (1U & VL_REDXOR_32((0x10100cU & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[8U][0xbU] 
        = (1U & VL_REDXOR_32((0x8200cU & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[8U][0xcU] 
        = (1U & VL_REDXOR_32((0x44012U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[8U][0xdU] 
        = (1U & VL_REDXOR_32((0x28021U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[8U][0xeU] 
        = (1U & (VL_REDXOR_32((0x82000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_32((0x10040U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[8U][0xfU] 
        = (1U & (VL_REDXOR_32((0x44000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_32((0x20080U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[8U][0x10U] 
        = (1U & (VL_REDXOR_32((0x28000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_32((0x40100U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[8U][0x11U] 
        = (1U & VL_REDXOR_32((0x80200U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[8U][0x12U] 
        = (1U & (VL_REDXOR_32((0x21000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_32((0x100400U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[8U][0x13U] 
        = (1U & (VL_REDXOR_32((0x44000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_32((0x200800U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[8U][0x14U] 
        = (1U & (VL_REDXOR_32((0x82000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_32((0x401000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[8U][0x15U] 
        = (1U & VL_REDXOR_32((0x800001U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[8U][0x16U] 
        = (1U & (VL_REDXOR_32((0x9000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x4002U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[8U][0x17U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x19U) ^ VL_REDXOR_16((0x9004U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[8U][0x19U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1aU) ^ VL_REDXOR_32((0x20808U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[8U][0x1aU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1bU) ^ VL_REDXOR_32((0x40410U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[8U][0x1bU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1cU) ^ VL_REDXOR_32((0x80220U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[8U][0x18U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1dU) ^ VL_REDXOR_32((0x10140U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[8U][0x1cU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1eU) ^ VL_REDXOR_32((0x104080U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[8U][0x1dU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1fU) ^ VL_REDXOR_32((0x208040U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[8U][0x1eU] 
        = (1U & VL_REDXOR_32((0x420021U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[8U][0x1fU] 
        = (1U & VL_REDXOR_32((0x810012U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[9U][0U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x17U) ^ VL_REDXOR_32((0x600002U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[9U][1U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x18U) ^ VL_REDXOR_32((0x400044U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[9U][2U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x19U) ^ VL_REDXOR_32((0x100088U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[9U][3U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1aU) ^ VL_REDXOR_32((0x80110U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[9U][4U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1bU) ^ VL_REDXOR_32((0x40220U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[9U][5U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1cU) ^ VL_REDXOR_32((0x20440U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[9U][6U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1dU) ^ VL_REDXOR_32((0x10880U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[9U][7U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1eU) ^ VL_REDXOR_16((0x9100U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[9U][8U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1fU) ^ VL_REDXOR_32((0x204200U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[9U][9U] 
        = (1U & VL_REDXOR_32((0x102401U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[9U][0xaU] 
        = (1U & VL_REDXOR_32((0x80806U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[9U][0xbU] 
        = (1U & VL_REDXOR_32((0x41006U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[9U][0xcU] 
        = (1U & VL_REDXOR_32((0x22009U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[9U][0xdU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1fU) ^ VL_REDXOR_32((0x14010U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[9U][0xeU] 
        = (1U & (VL_REDXOR_32((0x41000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x8020U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[9U][0xfU] 
        = (1U & (VL_REDXOR_32((0x22000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_32((0x10040U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[9U][0x10U] 
        = (1U & (VL_REDXOR_32((0x14000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_32((0x20080U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[9U][0x11U] 
        = (1U & VL_REDXOR_32((0x40100U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[9U][0x12U] 
        = (1U & (VL_REDXOR_32((0x10800000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_32((0x80200U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[9U][0x13U] 
        = (1U & (VL_REDXOR_32((0x22000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_32((0x100400U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[9U][0x14U] 
        = (1U & (VL_REDXOR_32((0x41000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_32((0x200800U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[9U][0x15U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1fU) ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                               >> 0x16U)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[9U][0x16U] 
        = (1U & (VL_REDXOR_32((0x4800000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x2001U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[9U][0x17U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x18U) ^ VL_REDXOR_16((0x4802U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[9U][0x19U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x19U) ^ VL_REDXOR_32((0x10404U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[9U][0x1aU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1aU) ^ VL_REDXOR_32((0x20208U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[9U][0x1bU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1bU) ^ VL_REDXOR_32((0x40110U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[9U][0x18U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1cU) ^ VL_REDXOR_16((0x80a0U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[9U][0x1cU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1dU) ^ VL_REDXOR_32((0x82040U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[9U][0x1dU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1eU) ^ VL_REDXOR_32((0x104020U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[9U][0x1eU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1fU) ^ VL_REDXOR_32((0x210010U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[9U][0x1fU] 
        = (1U & VL_REDXOR_32((0x408009U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xaU][0U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x16U) ^ VL_REDXOR_32((0x300001U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xaU][1U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x17U) ^ VL_REDXOR_32((0x200022U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xaU][2U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x18U) ^ VL_REDXOR_32((0x80044U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xaU][3U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x19U) ^ VL_REDXOR_32((0x40088U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xaU][4U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1aU) ^ VL_REDXOR_32((0x20110U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xaU][5U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1bU) ^ VL_REDXOR_32((0x10220U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xaU][6U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1cU) ^ VL_REDXOR_16((0x8440U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xaU][7U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1dU) ^ VL_REDXOR_16((0x4880U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xaU][8U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1eU) ^ VL_REDXOR_32((0x102100U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xaU][9U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1fU) ^ VL_REDXOR_32((0x81200U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xaU][0xaU] 
        = (1U & VL_REDXOR_32((0x40403U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xaU][0xbU] 
        = (1U & VL_REDXOR_32((0x20803U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xaU][0xcU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1fU) ^ VL_REDXOR_32((0x11004U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xaU][0xdU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1eU) ^ VL_REDXOR_16((0xa008U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xaU][0xeU] 
        = (1U & (VL_REDXOR_32((0x20800000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x4010U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xaU][0xfU] 
        = (1U & (VL_REDXOR_32((0x11000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x8020U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xaU][0x10U] 
        = (1U & (VL_REDXOR_32((0xa000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_32((0x10040U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xaU][0x11U] 
        = (1U & VL_REDXOR_32((0x20080U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xaU][0x12U] 
        = (1U & (VL_REDXOR_32((0x8400000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_32((0x40100U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xaU][0x13U] 
        = (1U & (VL_REDXOR_32((0x11000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_32((0x80200U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xaU][0x14U] 
        = (1U & (VL_REDXOR_32((0x20800000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_32((0x100400U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xaU][0x15U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1eU) ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                               >> 0x15U)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xaU][0x16U] 
        = (1U & (VL_REDXOR_32((0x82400000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                    >> 0xcU)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xaU][0x17U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x17U) ^ VL_REDXOR_16((0x2401U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xaU][0x19U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x18U) ^ VL_REDXOR_16((0x8202U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xaU][0x1aU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x19U) ^ VL_REDXOR_32((0x10104U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xaU][0x1bU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1aU) ^ VL_REDXOR_32((0x20088U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xaU][0x18U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1bU) ^ VL_REDXOR_16((0x4050U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xaU][0x1cU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1cU) ^ VL_REDXOR_32((0x41020U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xaU][0x1dU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1dU) ^ VL_REDXOR_32((0x82010U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xaU][0x1eU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1eU) ^ VL_REDXOR_32((0x108008U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xaU][0x1fU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1fU) ^ VL_REDXOR_32((0x204004U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xbU][0U] 
        = (1U & (VL_REDXOR_32((0x80200000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_32((0x180000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xbU][1U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x16U) ^ VL_REDXOR_32((0x100011U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xbU][2U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x17U) ^ VL_REDXOR_32((0x40022U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xbU][3U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x18U) ^ VL_REDXOR_32((0x20044U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xbU][4U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x19U) ^ VL_REDXOR_32((0x10088U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xbU][5U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1aU) ^ VL_REDXOR_16((0x8110U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xbU][6U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1bU) ^ VL_REDXOR_16((0x4220U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xbU][7U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1cU) ^ VL_REDXOR_16((0x2440U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xbU][8U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1dU) ^ VL_REDXOR_32((0x81080U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xbU][9U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1eU) ^ VL_REDXOR_32((0x40900U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xbU][0xaU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1fU) ^ VL_REDXOR_32((0x20201U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xbU][0xbU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1fU) ^ VL_REDXOR_32((0x10401U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xbU][0xcU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1eU) ^ VL_REDXOR_16((0x8802U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xbU][0xdU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1dU) ^ VL_REDXOR_16((0x5004U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xbU][0xeU] 
        = (1U & (VL_REDXOR_32((0x10400000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x2008U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xbU][0xfU] 
        = (1U & (VL_REDXOR_32((0x8800000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x4010U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xbU][0x10U] 
        = (1U & (VL_REDXOR_32((0x5000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x8020U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xbU][0x11U] 
        = (1U & VL_REDXOR_32((0x10040U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xbU][0x12U] 
        = (1U & (VL_REDXOR_32((0x4200000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_32((0x20080U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xbU][0x13U] 
        = (1U & (VL_REDXOR_32((0x8800000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_32((0x40100U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xbU][0x14U] 
        = (1U & (VL_REDXOR_32((0x10400000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_32((0x80200U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xbU][0x15U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1dU) ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                               >> 0x14U)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xbU][0x16U] 
        = (1U & (VL_REDXOR_32((0x41200000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                    >> 0xbU)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xbU][0x17U] 
        = (1U & (VL_REDXOR_32((0x80400000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x1200U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xbU][0x19U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x17U) ^ VL_REDXOR_16((0x4101U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xbU][0x1aU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x18U) ^ VL_REDXOR_16((0x8082U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xbU][0x1bU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x19U) ^ VL_REDXOR_32((0x10044U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xbU][0x18U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1aU) ^ VL_REDXOR_16((0x2028U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xbU][0x1cU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1bU) ^ VL_REDXOR_32((0x20810U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xbU][0x1dU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1cU) ^ VL_REDXOR_32((0x41008U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xbU][0x1eU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1dU) ^ VL_REDXOR_32((0x84004U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xbU][0x1fU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1eU) ^ VL_REDXOR_32((0x102002U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xcU][0U] 
        = (1U & (VL_REDXOR_32((0x40100000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_32((0xc0000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xcU][1U] 
        = (1U & (VL_REDXOR_32((0x80200000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_32((0x80008U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xcU][2U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x16U) ^ VL_REDXOR_32((0x20011U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xcU][3U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x17U) ^ VL_REDXOR_32((0x10022U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xcU][4U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x18U) ^ VL_REDXOR_16((0x8044U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xcU][5U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x19U) ^ VL_REDXOR_16((0x4088U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xcU][6U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1aU) ^ VL_REDXOR_16((0x2110U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xcU][7U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1bU) ^ VL_REDXOR_16((0x1220U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xcU][8U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1cU) ^ VL_REDXOR_32((0x40840U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xcU][9U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1dU) ^ VL_REDXOR_32((0x20480U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xcU][0xaU] 
        = (1U & (VL_REDXOR_32((0xc0000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_32((0x10100U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xcU][0xbU] 
        = (1U & (VL_REDXOR_32((0xc0000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x8200U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xcU][0xcU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1dU) ^ VL_REDXOR_16((0x4401U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xcU][0xdU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1cU) ^ VL_REDXOR_16((0x2802U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xcU][0xeU] 
        = (1U & (VL_REDXOR_32((0x8200000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x1004U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xcU][0xfU] 
        = (1U & (VL_REDXOR_32((0x4400000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x2008U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xcU][0x10U] 
        = (1U & (VL_REDXOR_32((0x2800000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x4010U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xcU][0x11U] 
        = (1U & VL_REDXOR_16((0x8020U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xcU][0x12U] 
        = (1U & (VL_REDXOR_32((0x2100000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_32((0x10040U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xcU][0x13U] 
        = (1U & (VL_REDXOR_32((0x4400000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_32((0x20080U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xcU][0x14U] 
        = (1U & (VL_REDXOR_32((0x8200000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_32((0x40100U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xcU][0x15U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1cU) ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                               >> 0x13U)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xcU][0x16U] 
        = (1U & (VL_REDXOR_32((0x20900000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                    >> 0xaU)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xcU][0x17U] 
        = (1U & (VL_REDXOR_32((0x40200000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x900U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xcU][0x19U] 
        = (1U & (VL_REDXOR_32((0x80400000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x2080U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xcU][0x1aU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x17U) ^ VL_REDXOR_16((0x4041U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xcU][0x1bU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x18U) ^ VL_REDXOR_16((0x8022U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xcU][0x18U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x19U) ^ VL_REDXOR_16((0x1014U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xcU][0x1cU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1aU) ^ VL_REDXOR_32((0x10408U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xcU][0x1dU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1bU) ^ VL_REDXOR_32((0x20804U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xcU][0x1eU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1cU) ^ VL_REDXOR_32((0x42002U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xcU][0x1fU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1dU) ^ VL_REDXOR_32((0x81001U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xdU][0U] 
        = (1U & (VL_REDXOR_32((0x20080000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_32((0x60000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xdU][1U] 
        = (1U & (VL_REDXOR_32((0x40100000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_32((0x40004U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xdU][2U] 
        = (1U & (VL_REDXOR_32((0x80200000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_32((0x10008U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xdU][3U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x16U) ^ VL_REDXOR_16((0x8011U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xdU][4U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x17U) ^ VL_REDXOR_16((0x4022U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xdU][5U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x18U) ^ VL_REDXOR_16((0x2044U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xdU][6U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x19U) ^ VL_REDXOR_16((0x1088U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xdU][7U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1aU) ^ VL_REDXOR_16((0x910U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xdU][8U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1bU) ^ VL_REDXOR_32((0x20420U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xdU][9U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1cU) ^ VL_REDXOR_32((0x10240U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xdU][0xaU] 
        = (1U & (VL_REDXOR_32((0x60000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x8080U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xdU][0xbU] 
        = (1U & (VL_REDXOR_32((0x60000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x4100U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xdU][0xcU] 
        = (1U & (VL_REDXOR_32((0x90000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x2200U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xdU][0xdU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1bU) ^ VL_REDXOR_16((0x1401U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xdU][0xeU] 
        = (1U & (VL_REDXOR_32((0x4100000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x802U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xdU][0xfU] 
        = (1U & (VL_REDXOR_32((0x2200000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x1004U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xdU][0x10U] 
        = (1U & (VL_REDXOR_32((0x1400000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x2008U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xdU][0x11U] 
        = (1U & VL_REDXOR_16((0x4010U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xdU][0x12U] 
        = (1U & (VL_REDXOR_32((0x1080000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x8020U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xdU][0x13U] 
        = (1U & (VL_REDXOR_32((0x2200000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_32((0x10040U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xdU][0x14U] 
        = (1U & (VL_REDXOR_32((0x4100000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_32((0x20080U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xdU][0x15U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1bU) ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                               >> 0x12U)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xdU][0x16U] 
        = (1U & (VL_REDXOR_32((0x10480000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                    >> 9U)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xdU][0x17U] 
        = (1U & (VL_REDXOR_32((0x20100000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x480U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xdU][0x19U] 
        = (1U & (VL_REDXOR_32((0x40200000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x1040U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xdU][0x1aU] 
        = (1U & (VL_REDXOR_32((0x80400000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x2020U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xdU][0x1bU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x17U) ^ VL_REDXOR_16((0x4011U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xdU][0x18U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x18U) ^ VL_REDXOR_16((0x80aU 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xdU][0x1cU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x19U) ^ VL_REDXOR_16((0x8204U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xdU][0x1dU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1aU) ^ VL_REDXOR_32((0x10402U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xdU][0x1eU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1bU) ^ VL_REDXOR_32((0x21001U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xdU][0x1fU] 
        = (1U & (VL_REDXOR_32((0x90000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_32((0x40800U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xeU][0U] 
        = (1U & (VL_REDXOR_32((0x10040000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_32((0x30000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xeU][1U] 
        = (1U & (VL_REDXOR_32((0x20080000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_32((0x20002U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xeU][2U] 
        = (1U & (VL_REDXOR_32((0x40100000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x8004U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xeU][3U] 
        = (1U & (VL_REDXOR_32((0x80200000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x4008U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xeU][4U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x16U) ^ VL_REDXOR_16((0x2011U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xeU][5U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x17U) ^ VL_REDXOR_16((0x1022U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xeU][6U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x18U) ^ VL_REDXOR_16((0x844U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xeU][7U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x19U) ^ VL_REDXOR_16((0x488U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xeU][8U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1aU) ^ VL_REDXOR_32((0x10210U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xeU][9U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1bU) ^ VL_REDXOR_16((0x8120U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xeU][0xaU] 
        = (1U & (VL_REDXOR_32((0x30000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x4040U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xeU][0xbU] 
        = (1U & (VL_REDXOR_32((0x30000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x2080U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xeU][0xcU] 
        = (1U & (VL_REDXOR_32((0x48000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x1100U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xeU][0xdU] 
        = (1U & (VL_REDXOR_32((0x84000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0xa00U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xeU][0xeU] 
        = (1U & (VL_REDXOR_32((0x2080000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x401U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xeU][0xfU] 
        = (1U & (VL_REDXOR_32((0x1100000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x802U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xeU][0x10U] 
        = (1U & (VL_REDXOR_32((0xa00000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x1004U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xeU][0x11U] 
        = (1U & VL_REDXOR_16((0x2008U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xeU][0x12U] 
        = (1U & (VL_REDXOR_32((0x840000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x4010U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xeU][0x13U] 
        = (1U & (VL_REDXOR_32((0x1100000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x8020U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xeU][0x14U] 
        = (1U & (VL_REDXOR_32((0x2080000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_32((0x10040U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xeU][0x15U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1aU) ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                               >> 0x11U)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xeU][0x16U] 
        = (1U & (VL_REDXOR_32((0x8240000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                    >> 8U)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xeU][0x17U] 
        = (1U & (VL_REDXOR_32((0x10080000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x240U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xeU][0x19U] 
        = (1U & (VL_REDXOR_32((0x20100000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x820U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xeU][0x1aU] 
        = (1U & (VL_REDXOR_32((0x40200000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x1010U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xeU][0x1bU] 
        = (1U & (VL_REDXOR_32((0x80400000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x2008U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xeU][0x18U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x17U) ^ VL_REDXOR_16((0x405U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xeU][0x1cU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x18U) ^ VL_REDXOR_16((0x4102U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xeU][0x1dU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x19U) ^ VL_REDXOR_16((0x8201U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xeU][0x1eU] 
        = (1U & (VL_REDXOR_32((0x84000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_32((0x10800U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xeU][0x1fU] 
        = (1U & (VL_REDXOR_32((0x48000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_32((0x20400U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xfU][0U] 
        = (1U & (VL_REDXOR_32((0x8020000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_32((0x18000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xfU][1U] 
        = (1U & (VL_REDXOR_32((0x10040000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_32((0x10001U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xfU][2U] 
        = (1U & (VL_REDXOR_32((0x20080000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x4002U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xfU][3U] 
        = (1U & (VL_REDXOR_32((0x40100000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x2004U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xfU][4U] 
        = (1U & (VL_REDXOR_32((0x80200000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x1008U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xfU][5U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x16U) ^ VL_REDXOR_16((0x811U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xfU][6U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x17U) ^ VL_REDXOR_16((0x422U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xfU][7U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x18U) ^ VL_REDXOR_16((0x244U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xfU][8U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x19U) ^ VL_REDXOR_16((0x8108U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xfU][9U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1aU) ^ VL_REDXOR_16((0x4090U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xfU][0xaU] 
        = (1U & (VL_REDXOR_32((0x18000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x2020U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xfU][0xbU] 
        = (1U & (VL_REDXOR_32((0x18000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x1040U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xfU][0xcU] 
        = (1U & (VL_REDXOR_32((0x24000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x880U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xfU][0xdU] 
        = (1U & (VL_REDXOR_32((0x42000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x500U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xfU][0xeU] 
        = (1U & (VL_REDXOR_32((0x81040000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                    >> 9U)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xfU][0xfU] 
        = (1U & (VL_REDXOR_32((0x880000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x401U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xfU][0x10U] 
        = (1U & (VL_REDXOR_32((0x500000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x802U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xfU][0x11U] 
        = (1U & VL_REDXOR_16((0x1004U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xfU][0x12U] 
        = (1U & (VL_REDXOR_32((0x420000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x2008U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xfU][0x13U] 
        = (1U & (VL_REDXOR_32((0x880000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x4010U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xfU][0x14U] 
        = (1U & (VL_REDXOR_32((0x1040000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x8020U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xfU][0x15U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x19U) ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                               >> 0x10U)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xfU][0x16U] 
        = (1U & (VL_REDXOR_32((0x4120000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                    >> 7U)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xfU][0x17U] 
        = (1U & (VL_REDXOR_32((0x8040000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x120U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xfU][0x19U] 
        = (1U & (VL_REDXOR_32((0x10080000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x410U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xfU][0x1aU] 
        = (1U & (VL_REDXOR_32((0x20100000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x808U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xfU][0x1bU] 
        = (1U & (VL_REDXOR_32((0x40200000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x1004U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xfU][0x18U] 
        = (1U & (VL_REDXOR_32((0x80400000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x202U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xfU][0x1cU] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x17U) ^ VL_REDXOR_16((0x2081U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xfU][0x1dU] 
        = (1U & (VL_REDXOR_32((0x81000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x4100U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xfU][0x1eU] 
        = (1U & (VL_REDXOR_32((0x42000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x8400U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0xfU][0x1fU] 
        = (1U & (VL_REDXOR_32((0x24000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_32((0x10200U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x10U][0U] 
        = (1U & (VL_REDXOR_32((0x4010000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0xc000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x10U][1U] 
        = (1U & (VL_REDXOR_32((0x88020000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                    >> 0xfU)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x10U][2U] 
        = (1U & (VL_REDXOR_32((0x10040000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x2001U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x10U][3U] 
        = (1U & (VL_REDXOR_32((0x20080000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x1002U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x10U][4U] 
        = (1U & (VL_REDXOR_32((0x40100000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x804U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x10U][5U] 
        = (1U & (VL_REDXOR_32((0x80200000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x408U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x10U][6U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x16U) ^ VL_REDXOR_16((0x211U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x10U][7U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x17U) ^ VL_REDXOR_16((0x122U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x10U][8U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x18U) ^ VL_REDXOR_16((0x4084U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x10U][9U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x19U) ^ VL_REDXOR_16((0x2048U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x10U][0xaU] 
        = (1U & (VL_REDXOR_32((0xc000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x1010U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x10U][0xbU] 
        = (1U & (VL_REDXOR_32((0xc000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x820U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x10U][0xcU] 
        = (1U & (VL_REDXOR_32((0x12000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x440U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x10U][0xdU] 
        = (1U & (VL_REDXOR_32((0x21000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x280U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x10U][0xeU] 
        = (1U & (VL_REDXOR_32((0x40820000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                    >> 8U)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x10U][0xfU] 
        = (1U & (VL_REDXOR_32((0x80440000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                    >> 9U)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x10U][0x10U] 
        = (1U & (VL_REDXOR_32((0x280000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x401U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x10U][0x11U] 
        = (1U & VL_REDXOR_16((0x802U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x10U][0x12U] 
        = (1U & (VL_REDXOR_32((0x210000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x1004U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x10U][0x13U] 
        = (1U & (VL_REDXOR_32((0x440000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x2008U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x10U][0x14U] 
        = (1U & (VL_REDXOR_32((0x820000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x4010U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x10U][0x15U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x18U) ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                               >> 0xfU)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x10U][0x16U] 
        = (1U & (VL_REDXOR_32((0x2090000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                    >> 6U)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x10U][0x17U] 
        = (1U & (VL_REDXOR_32((0x4020000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_8((0x90U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x10U][0x19U] 
        = (1U & (VL_REDXOR_32((0x8040000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x208U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x10U][0x1aU] 
        = (1U & (VL_REDXOR_32((0x10080000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x404U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x10U][0x1bU] 
        = (1U & (VL_REDXOR_32((0x20100000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x802U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x10U][0x18U] 
        = (1U & (VL_REDXOR_32((0x40200000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x101U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x10U][0x1cU] 
        = (1U & (VL_REDXOR_32((0x80400000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x1040U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x10U][0x1dU] 
        = (1U & (VL_REDXOR_32((0x40800000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x2080U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x10U][0x1eU] 
        = (1U & (VL_REDXOR_32((0x21000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x4200U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x10U][0x1fU] 
        = (1U & (VL_REDXOR_32((0x12000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x8100U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x11U][0U] 
        = (1U & (VL_REDXOR_32((0x2008000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x6000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x11U][1U] 
        = (1U & (VL_REDXOR_32((0x44010000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                    >> 0xeU)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x11U][2U] 
        = (1U & (VL_REDXOR_32((0x88020000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                    >> 0xcU)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x11U][3U] 
        = (1U & (VL_REDXOR_32((0x10040000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x801U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x11U][4U] 
        = (1U & (VL_REDXOR_32((0x20080000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x402U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x11U][5U] 
        = (1U & (VL_REDXOR_32((0x40100000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x204U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x11U][6U] 
        = (1U & (VL_REDXOR_32((0x80200000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x108U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x11U][7U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x16U) ^ VL_REDXOR_8((0x91U & 
                                           vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x11U][8U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x17U) ^ VL_REDXOR_16((0x2042U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x11U][9U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x18U) ^ VL_REDXOR_16((0x1024U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x11U][0xaU] 
        = (1U & (VL_REDXOR_32((0x6000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x808U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x11U][0xbU] 
        = (1U & (VL_REDXOR_32((0x6000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x410U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x11U][0xcU] 
        = (1U & (VL_REDXOR_32((0x9000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x220U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x11U][0xdU] 
        = (1U & (VL_REDXOR_32((0x10800000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x140U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x11U][0xeU] 
        = (1U & (VL_REDXOR_32((0x20410000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                    >> 7U)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x11U][0xfU] 
        = (1U & (VL_REDXOR_32((0x40220000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                    >> 8U)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x11U][0x10U] 
        = (1U & (VL_REDXOR_32((0x80140000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                    >> 9U)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x11U][0x11U] 
        = (1U & VL_REDXOR_16((0x401U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U])));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x11U][0x12U] 
        = (1U & (VL_REDXOR_32((0x108000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x802U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x11U][0x13U] 
        = (1U & (VL_REDXOR_32((0x220000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x1004U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x11U][0x14U] 
        = (1U & (VL_REDXOR_32((0x410000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x2008U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x11U][0x15U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x17U) ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                               >> 0xeU)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x11U][0x16U] 
        = (1U & (VL_REDXOR_32((0x1048000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                    >> 5U)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x11U][0x17U] 
        = (1U & (VL_REDXOR_32((0x2010000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_8((0x48U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x11U][0x19U] 
        = (1U & (VL_REDXOR_32((0x4020000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x104U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x11U][0x1aU] 
        = (1U & (VL_REDXOR_32((0x8040000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x202U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x11U][0x1bU] 
        = (1U & (VL_REDXOR_32((0x10080000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x401U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x11U][0x18U] 
        = (1U & (VL_REDXOR_32((0xa0100000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                    >> 7U)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x11U][0x1cU] 
        = (1U & (VL_REDXOR_32((0x40200000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x820U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x11U][0x1dU] 
        = (1U & (VL_REDXOR_32((0x20400000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x1040U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x11U][0x1eU] 
        = (1U & (VL_REDXOR_32((0x10800000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x2100U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x11U][0x1fU] 
        = (1U & (VL_REDXOR_32((0x9000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x4080U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x12U][0U] 
        = (1U & (VL_REDXOR_32((0x1004000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x3000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x12U][1U] 
        = (1U & (VL_REDXOR_32((0x22008000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                    >> 0xdU)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x12U][2U] 
        = (1U & (VL_REDXOR_32((0x44010000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                    >> 0xbU)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x12U][3U] 
        = (1U & (VL_REDXOR_32((0x88020000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                    >> 0xaU)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x12U][4U] 
        = (1U & (VL_REDXOR_32((0x10040000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x201U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x12U][5U] 
        = (1U & (VL_REDXOR_32((0x20080000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x102U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x12U][6U] 
        = (1U & (VL_REDXOR_32((0x40100000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_8((0x84U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x12U][7U] 
        = (1U & (VL_REDXOR_32((0x80200000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_8((0x48U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x12U][8U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x16U) ^ VL_REDXOR_16((0x1021U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x12U][9U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x17U) ^ VL_REDXOR_16((0x812U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x12U][0xaU] 
        = (1U & (VL_REDXOR_32((0x3000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x404U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x12U][0xbU] 
        = (1U & (VL_REDXOR_32((0x3000000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x208U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x12U][0xcU] 
        = (1U & (VL_REDXOR_32((0x4800000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x110U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x12U][0xdU] 
        = (1U & (VL_REDXOR_32((0x8400000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_8((0xa0U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x12U][0xeU] 
        = (1U & (VL_REDXOR_32((0x10208000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                    >> 6U)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x12U][0xfU] 
        = (1U & (VL_REDXOR_32((0x20110000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                    >> 7U)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x12U][0x10U] 
        = (1U & (VL_REDXOR_32((0x400a0000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                    >> 8U)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x12U][0x11U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1fU) ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                               >> 9U)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x12U][0x12U] 
        = (1U & (VL_REDXOR_32((0x84000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x401U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x12U][0x13U] 
        = (1U & (VL_REDXOR_32((0x110000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x802U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x12U][0x14U] 
        = (1U & (VL_REDXOR_32((0x208000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x1004U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x12U][0x15U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x16U) ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                               >> 0xdU)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x12U][0x16U] 
        = (1U & (VL_REDXOR_32((0x824000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                    >> 4U)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x12U][0x17U] 
        = (1U & (VL_REDXOR_32((0x1008000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_8((0x24U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x12U][0x19U] 
        = (1U & (VL_REDXOR_32((0x2010000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_8((0x82U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x12U][0x1aU] 
        = (1U & (VL_REDXOR_32((0x4020000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x101U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x12U][0x1bU] 
        = (1U & (VL_REDXOR_32((0x88040000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                    >> 9U)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x12U][0x18U] 
        = (1U & (VL_REDXOR_32((0x50080000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                    >> 6U)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x12U][0x1cU] 
        = (1U & (VL_REDXOR_32((0x20100000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x410U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x12U][0x1dU] 
        = (1U & (VL_REDXOR_32((0x10200000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x820U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x12U][0x1eU] 
        = (1U & (VL_REDXOR_32((0x8400000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x1080U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x12U][0x1fU] 
        = (1U & (VL_REDXOR_32((0x4800000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x2040U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x13U][0U] 
        = (1U & (VL_REDXOR_32((0x802000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x1800U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x13U][1U] 
        = (1U & (VL_REDXOR_32((0x11004000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                    >> 0xcU)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x13U][2U] 
        = (1U & (VL_REDXOR_32((0x22008000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                    >> 0xaU)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x13U][3U] 
        = (1U & (VL_REDXOR_32((0x44010000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                    >> 9U)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x13U][4U] 
        = (1U & (VL_REDXOR_32((0x88020000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                    >> 8U)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x13U][5U] 
        = (1U & (VL_REDXOR_32((0x10040000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_8((0x81U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x13U][6U] 
        = (1U & (VL_REDXOR_32((0x20080000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_8((0x42U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x13U][7U] 
        = (1U & (VL_REDXOR_32((0x40100000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_8((0x24U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x13U][8U] 
        = (1U & (VL_REDXOR_32((0x80200000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x810U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x13U][9U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x16U) ^ VL_REDXOR_16((0x409U 
                                            & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x13U][0xaU] 
        = (1U & (VL_REDXOR_32((0x1800000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x202U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x13U][0xbU] 
        = (1U & (VL_REDXOR_32((0x1800000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x104U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x13U][0xcU] 
        = (1U & (VL_REDXOR_32((0x2400000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_8((0x88U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x13U][0xdU] 
        = (1U & (VL_REDXOR_32((0x4200000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_8((0x50U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x13U][0xeU] 
        = (1U & (VL_REDXOR_32((0x8104000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                    >> 5U)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x13U][0xfU] 
        = (1U & (VL_REDXOR_32((0x10088000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                    >> 6U)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x13U][0x10U] 
        = (1U & (VL_REDXOR_32((0x20050000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                    >> 7U)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x13U][0x11U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x1eU) ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                               >> 8U)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x13U][0x12U] 
        = (1U & (VL_REDXOR_32((0x80042000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                    >> 9U)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x13U][0x13U] 
        = (1U & (VL_REDXOR_32((0x88000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x401U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x13U][0x14U] 
        = (1U & (VL_REDXOR_32((0x104000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x802U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x13U][0x15U] 
        = (1U & ((vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U] 
                  >> 0x15U) ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                               >> 0xcU)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x13U][0x16U] 
        = (1U & (VL_REDXOR_32((0x412000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                    >> 3U)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x13U][0x17U] 
        = (1U & (VL_REDXOR_32((0x804000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_8((0x12U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x13U][0x19U] 
        = (1U & (VL_REDXOR_32((0x1008000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_8((0x41U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x13U][0x1aU] 
        = (1U & (VL_REDXOR_32((0x82010000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                    >> 7U)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x13U][0x1bU] 
        = (1U & (VL_REDXOR_32((0x44020000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                    >> 8U)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x13U][0x18U] 
        = (1U & (VL_REDXOR_32((0x28040000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ (vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U] 
                    >> 5U)));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x13U][0x1cU] 
        = (1U & (VL_REDXOR_32((0x10080000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x208U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x13U][0x1dU] 
        = (1U & (VL_REDXOR_32((0x8100000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x410U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x13U][0x1eU] 
        = (1U & (VL_REDXOR_32((0x4200000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x840U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__feedback_bit_random[0x13U][0x1fU] 
        = (1U & (VL_REDXOR_32((0x2400000U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x12U])) 
                 ^ VL_REDXOR_16((0x1020U & vlSelf->mask_generation_VGA__DOT__reg_curr[0x13U]))));
    vlSelf->mask_generation_VGA__DOT__c[8U] = ((0xfeffffffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[8U]) 
                                               | (0x1000000U 
                                                  & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                       & (~ (IData)(vlSelf->mask_generation_VGA__DOT__w6))) 
                                                      << 0x18U) 
                                                     | (0xff000000U 
                                                        & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                            << 0x14U) 
                                                           & ((IData)(vlSelf->mask_generation_VGA__DOT__w6) 
                                                              << 0x18U))))));
    vlSelf->mask_generation_VGA__DOT__c[8U] = ((0xfdffffffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[8U]) 
                                               | (0x2000000U 
                                                  & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                       << 0x18U) 
                                                      & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w6)) 
                                                         << 0x19U)) 
                                                     | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 0x14U) 
                                                        & ((IData)(vlSelf->mask_generation_VGA__DOT__w6) 
                                                           << 0x19U)))));
    vlSelf->mask_generation_VGA__DOT__c[8U] = ((0xfbffffffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[8U]) 
                                               | (0x4000000U 
                                                  & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                       & (IData)(vlSelf->mask_generation_VGA__DOT__w6)) 
                                                      << 0x1aU) 
                                                     | (0xfc000000U 
                                                        & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                            << 0x18U) 
                                                           & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w6)) 
                                                              << 0x1aU))))));
    vlSelf->mask_generation_VGA__DOT__c[8U] = ((0xf7ffffffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[8U]) 
                                               | (0x8000000U 
                                                  & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                       << 0x1aU) 
                                                      & ((IData)(vlSelf->mask_generation_VGA__DOT__w6) 
                                                         << 0x1bU)) 
                                                     | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 0x18U) 
                                                        & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w6)) 
                                                           << 0x1bU)))));
    vlSelf->mask_generation_VGA__DOT__c[8U] = ((0xefffffffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[8U]) 
                                               | (0x10000000U 
                                                  & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                       << 0x1aU) 
                                                      & ((IData)(vlSelf->mask_generation_VGA__DOT__w6) 
                                                         << 0x1cU)) 
                                                     | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 0x18U) 
                                                        & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w6)) 
                                                           << 0x1cU)))));
    vlSelf->mask_generation_VGA__DOT__c[0x11U] = ((0xfffeffffU 
                                                   & vlSelf->mask_generation_VGA__DOT__c[0x11U]) 
                                                  | (0x10000U 
                                                     & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                          & (~ (IData)(vlSelf->mask_generation_VGA__DOT__w6))) 
                                                         << 0x10U) 
                                                        | (0xffff0000U 
                                                           & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                               << 0xeU) 
                                                              & ((IData)(vlSelf->mask_generation_VGA__DOT__w6) 
                                                                 << 0x10U))))));
    vlSelf->mask_generation_VGA__DOT__c[0x11U] = ((0xfffdffffU 
                                                   & vlSelf->mask_generation_VGA__DOT__c[0x11U]) 
                                                  | (0x20000U 
                                                     & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                          << 0x10U) 
                                                         & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w6)) 
                                                            << 0x11U)) 
                                                        | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                            << 0xeU) 
                                                           & ((IData)(vlSelf->mask_generation_VGA__DOT__w6) 
                                                              << 0x11U)))));
    vlSelf->mask_generation_VGA__DOT__c[0x11U] = ((0xfffbffffU 
                                                   & vlSelf->mask_generation_VGA__DOT__c[0x11U]) 
                                                  | (0x40000U 
                                                     & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                          << 0x10U) 
                                                         & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w6)) 
                                                            << 0x12U)) 
                                                        | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                            << 0xeU) 
                                                           & ((IData)(vlSelf->mask_generation_VGA__DOT__w6) 
                                                              << 0x12U)))));
    vlSelf->mask_generation_VGA__DOT__c[0x11U] = ((0xfff7ffffU 
                                                   & vlSelf->mask_generation_VGA__DOT__c[0x11U]) 
                                                  | (0x80000U 
                                                     & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                          << 0x10U) 
                                                         & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w6)) 
                                                            << 0x13U)) 
                                                        | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                            << 0xeU) 
                                                           & ((IData)(vlSelf->mask_generation_VGA__DOT__w6) 
                                                              << 0x13U)))));
    vlSelf->mask_generation_VGA__DOT__c[0x11U] = ((0xffefffffU 
                                                   & vlSelf->mask_generation_VGA__DOT__c[0x11U]) 
                                                  | (0x100000U 
                                                     & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                          & (IData)(vlSelf->mask_generation_VGA__DOT__w6)) 
                                                         << 0x14U) 
                                                        | (0xfff00000U 
                                                           & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                               << 0x10U) 
                                                              & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w6)) 
                                                                 << 0x14U))))));
    vlSelf->mask_generation_VGA__DOT__c[6U] = ((0xfffbffffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[6U]) 
                                               | (0x40000U 
                                                  & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                       & (~ (IData)(vlSelf->mask_generation_VGA__DOT__w8))) 
                                                      << 0x12U) 
                                                     | (0xfffc0000U 
                                                        & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                            << 0x10U) 
                                                           & ((IData)(vlSelf->mask_generation_VGA__DOT__w8) 
                                                              << 0x12U))))));
    vlSelf->mask_generation_VGA__DOT__c[6U] = ((0xfff7ffffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[6U]) 
                                               | (0x80000U 
                                                  & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                       << 0x12U) 
                                                      & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w8)) 
                                                         << 0x13U)) 
                                                     | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 0x10U) 
                                                        & ((IData)(vlSelf->mask_generation_VGA__DOT__w8) 
                                                           << 0x13U)))));
    vlSelf->mask_generation_VGA__DOT__c[6U] = ((0xffefffffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[6U]) 
                                               | (0x100000U 
                                                  & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                       << 0x12U) 
                                                      & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w8)) 
                                                         << 0x14U)) 
                                                     | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 0x10U) 
                                                        & ((IData)(vlSelf->mask_generation_VGA__DOT__w8) 
                                                           << 0x14U)))));
    vlSelf->mask_generation_VGA__DOT__c[6U] = ((0xffdfffffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[6U]) 
                                               | (0x200000U 
                                                  & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                       << 0x12U) 
                                                      & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w8)) 
                                                         << 0x15U)) 
                                                     | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 0x10U) 
                                                        & ((IData)(vlSelf->mask_generation_VGA__DOT__w8) 
                                                           << 0x15U)))));
    vlSelf->mask_generation_VGA__DOT__c[6U] = ((0xffbfffffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[6U]) 
                                               | (0x400000U 
                                                  & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                       << 0x12U) 
                                                      & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w8)) 
                                                         << 0x16U)) 
                                                     | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 0x10U) 
                                                        & ((IData)(vlSelf->mask_generation_VGA__DOT__w8) 
                                                           << 0x16U)))));
    vlSelf->mask_generation_VGA__DOT__c[0xdU] = ((0xffffffefU 
                                                  & vlSelf->mask_generation_VGA__DOT__c[0xdU]) 
                                                 | (0x10U 
                                                    & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         & (~ (IData)(vlSelf->mask_generation_VGA__DOT__w8))) 
                                                        << 4U) 
                                                       | (0xfffffff0U 
                                                          & ((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                             & ((IData)(vlSelf->mask_generation_VGA__DOT__w8) 
                                                                << 4U))))));
    vlSelf->mask_generation_VGA__DOT__c[0xdU] = ((0xffffffdfU 
                                                  & vlSelf->mask_generation_VGA__DOT__c[0xdU]) 
                                                 | (0x20U 
                                                    & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 4U) 
                                                        & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w8)) 
                                                           << 5U)) 
                                                       | ((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                          & ((IData)(vlSelf->mask_generation_VGA__DOT__w8) 
                                                             << 5U)))));
    vlSelf->mask_generation_VGA__DOT__c[0xdU] = ((0xffffffbfU 
                                                  & vlSelf->mask_generation_VGA__DOT__c[0xdU]) 
                                                 | (0x40U 
                                                    & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 4U) 
                                                        & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w8)) 
                                                           << 6U)) 
                                                       | ((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                          & ((IData)(vlSelf->mask_generation_VGA__DOT__w8) 
                                                             << 6U)))));
    vlSelf->mask_generation_VGA__DOT__c[0xdU] = ((0xffffff7fU 
                                                  & vlSelf->mask_generation_VGA__DOT__c[0xdU]) 
                                                 | (0x80U 
                                                    & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 4U) 
                                                        & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w8)) 
                                                           << 7U)) 
                                                       | ((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                          & ((IData)(vlSelf->mask_generation_VGA__DOT__w8) 
                                                             << 7U)))));
    vlSelf->mask_generation_VGA__DOT__c[0xdU] = ((0xfffffeffU 
                                                  & vlSelf->mask_generation_VGA__DOT__c[0xdU]) 
                                                 | (0x100U 
                                                    & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         & (IData)(vlSelf->mask_generation_VGA__DOT__w8)) 
                                                        << 8U) 
                                                       | (0xffffff00U 
                                                          & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                              << 4U) 
                                                             & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w8)) 
                                                                << 8U))))));
    vlSelf->mask_generation_VGA__DOT__c[0x13U] = ((0xffbfffffU 
                                                   & vlSelf->mask_generation_VGA__DOT__c[0x13U]) 
                                                  | (0x400000U 
                                                     & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                          & (~ (IData)(vlSelf->mask_generation_VGA__DOT__w8))) 
                                                         << 0x16U) 
                                                        | (0xffc00000U 
                                                           & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                               << 0x10U) 
                                                              & ((IData)(vlSelf->mask_generation_VGA__DOT__w8) 
                                                                 << 0x16U))))));
    vlSelf->mask_generation_VGA__DOT__c[0x13U] = ((0xff7fffffU 
                                                   & vlSelf->mask_generation_VGA__DOT__c[0x13U]) 
                                                  | (0x800000U 
                                                     & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                          << 0x16U) 
                                                         & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w8)) 
                                                            << 0x17U)) 
                                                        | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                            << 0x10U) 
                                                           & ((IData)(vlSelf->mask_generation_VGA__DOT__w8) 
                                                              << 0x17U)))));
    vlSelf->mask_generation_VGA__DOT__c[0x13U] = ((0xfeffffffU 
                                                   & vlSelf->mask_generation_VGA__DOT__c[0x13U]) 
                                                  | (0x1000000U 
                                                     & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                          & (IData)(vlSelf->mask_generation_VGA__DOT__w8)) 
                                                         << 0x18U) 
                                                        | (0xff000000U 
                                                           & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                               << 0x16U) 
                                                              & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w8)) 
                                                                 << 0x18U))))));
    vlSelf->mask_generation_VGA__DOT__c[0x13U] = ((0xfdffffffU 
                                                   & vlSelf->mask_generation_VGA__DOT__c[0x13U]) 
                                                  | (0x2000000U 
                                                     & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                          << 0x18U) 
                                                         & ((IData)(vlSelf->mask_generation_VGA__DOT__w8) 
                                                            << 0x19U)) 
                                                        | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                            << 0x16U) 
                                                           & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w8)) 
                                                              << 0x19U)))));
    vlSelf->mask_generation_VGA__DOT__c[0x13U] = ((0xfbffffffU 
                                                   & vlSelf->mask_generation_VGA__DOT__c[0x13U]) 
                                                  | (0x4000000U 
                                                     & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                          << 0x18U) 
                                                         & ((IData)(vlSelf->mask_generation_VGA__DOT__w8) 
                                                            << 0x1aU)) 
                                                        | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                            << 0x16U) 
                                                           & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w8)) 
                                                              << 0x1aU)))));
    vlSelf->mask_generation_VGA__DOT__c[0U] = ((0xffffffdfU 
                                                & vlSelf->mask_generation_VGA__DOT__c[0U]) 
                                               | (0x20U 
                                                  & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                       & (IData)(vlSelf->mask_generation_VGA__DOT__w5)) 
                                                      << 5U) 
                                                     | (0xffffffe0U 
                                                        & ((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                           & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w5)) 
                                                              << 5U))))));
    vlSelf->mask_generation_VGA__DOT__c[5U] = ((0xfffffeffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[5U]) 
                                               | (0x100U 
                                                  & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                       & (~ (IData)(vlSelf->mask_generation_VGA__DOT__w5))) 
                                                      << 8U) 
                                                     | (0xffffff00U 
                                                        & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                            << 5U) 
                                                           & ((IData)(vlSelf->mask_generation_VGA__DOT__w5) 
                                                              << 8U))))));
    vlSelf->mask_generation_VGA__DOT__c[5U] = ((0xfffffdffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[5U]) 
                                               | (0x200U 
                                                  & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                       << 8U) 
                                                      & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w5)) 
                                                         << 9U)) 
                                                     | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 5U) 
                                                        & ((IData)(vlSelf->mask_generation_VGA__DOT__w5) 
                                                           << 9U)))));
    vlSelf->mask_generation_VGA__DOT__c[5U] = ((0xfffffbffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[5U]) 
                                               | (0x400U 
                                                  & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                       & (IData)(vlSelf->mask_generation_VGA__DOT__w5)) 
                                                      << 0xaU) 
                                                     | (0xfffffc00U 
                                                        & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                            << 8U) 
                                                           & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w5)) 
                                                              << 0xaU))))));
    vlSelf->mask_generation_VGA__DOT__c[5U] = ((0xfffff7ffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[5U]) 
                                               | (0x800U 
                                                  & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                       << 0xaU) 
                                                      & ((IData)(vlSelf->mask_generation_VGA__DOT__w5) 
                                                         << 0xbU)) 
                                                     | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 8U) 
                                                        & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w5)) 
                                                           << 0xbU)))));
    vlSelf->mask_generation_VGA__DOT__c[5U] = ((0xffffefffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[5U]) 
                                               | (0x1000U 
                                                  & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                       << 0xaU) 
                                                      & ((IData)(vlSelf->mask_generation_VGA__DOT__w5) 
                                                         << 0xcU)) 
                                                     | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 8U) 
                                                        & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w5)) 
                                                           << 0xcU)))));
    vlSelf->mask_generation_VGA__DOT__c[5U] = ((0xffffdfffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[5U]) 
                                               | (0x2000U 
                                                  & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                       << 0xaU) 
                                                      & ((IData)(vlSelf->mask_generation_VGA__DOT__w5) 
                                                         << 0xdU)) 
                                                     | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 8U) 
                                                        & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w5)) 
                                                           << 0xdU)))));
    vlSelf->mask_generation_VGA__DOT__c[0xaU] = ((0xfffeffffU 
                                                  & vlSelf->mask_generation_VGA__DOT__c[0xaU]) 
                                                 | (0x10000U 
                                                    & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         & (~ (IData)(vlSelf->mask_generation_VGA__DOT__w5))) 
                                                        << 0x10U) 
                                                       | (0xffff0000U 
                                                          & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                              << 0xfU) 
                                                             & ((IData)(vlSelf->mask_generation_VGA__DOT__w5) 
                                                                << 0x10U))))));
    vlSelf->mask_generation_VGA__DOT__c[0xaU] = ((0xfffdffffU 
                                                  & vlSelf->mask_generation_VGA__DOT__c[0xaU]) 
                                                 | (0x20000U 
                                                    & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 0x10U) 
                                                        & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w5)) 
                                                           << 0x11U)) 
                                                       | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                           << 0xfU) 
                                                          & ((IData)(vlSelf->mask_generation_VGA__DOT__w5) 
                                                             << 0x11U)))));
    vlSelf->mask_generation_VGA__DOT__c[0xaU] = ((0xfffbffffU 
                                                  & vlSelf->mask_generation_VGA__DOT__c[0xaU]) 
                                                 | (0x40000U 
                                                    & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 0x10U) 
                                                        & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w5)) 
                                                           << 0x12U)) 
                                                       | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                           << 0xfU) 
                                                          & ((IData)(vlSelf->mask_generation_VGA__DOT__w5) 
                                                             << 0x12U)))));
    vlSelf->mask_generation_VGA__DOT__c[0xaU] = ((0xfff7ffffU 
                                                  & vlSelf->mask_generation_VGA__DOT__c[0xaU]) 
                                                 | (0x80000U 
                                                    & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 0x10U) 
                                                        & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w5)) 
                                                           << 0x13U)) 
                                                       | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                           << 0xfU) 
                                                          & ((IData)(vlSelf->mask_generation_VGA__DOT__w5) 
                                                             << 0x13U)))));
    vlSelf->mask_generation_VGA__DOT__c[0xaU] = ((0xffefffffU 
                                                  & vlSelf->mask_generation_VGA__DOT__c[0xaU]) 
                                                 | (0x100000U 
                                                    & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         & (IData)(vlSelf->mask_generation_VGA__DOT__w5)) 
                                                        << 0x14U) 
                                                       | (0xfff00000U 
                                                          & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                              << 0x10U) 
                                                             & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w5)) 
                                                                << 0x14U))))));
    vlSelf->mask_generation_VGA__DOT__c[0xaU] = ((0xffdfffffU 
                                                  & vlSelf->mask_generation_VGA__DOT__c[0xaU]) 
                                                 | (0x200000U 
                                                    & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 0x14U) 
                                                        & ((IData)(vlSelf->mask_generation_VGA__DOT__w5) 
                                                           << 0x15U)) 
                                                       | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                           << 0x10U) 
                                                          & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w5)) 
                                                             << 0x15U)))));
    vlSelf->mask_generation_VGA__DOT__c[0xfU] = ((0xfeffffffU 
                                                  & vlSelf->mask_generation_VGA__DOT__c[0xfU]) 
                                                 | (0x1000000U 
                                                    & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         & (~ (IData)(vlSelf->mask_generation_VGA__DOT__w5))) 
                                                        << 0x18U) 
                                                       | (0xff000000U 
                                                          & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                              << 0x14U) 
                                                             & ((IData)(vlSelf->mask_generation_VGA__DOT__w5) 
                                                                << 0x18U))))));
    vlSelf->mask_generation_VGA__DOT__c[0xfU] = ((0xfdffffffU 
                                                  & vlSelf->mask_generation_VGA__DOT__c[0xfU]) 
                                                 | (0x2000000U 
                                                    & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         & (IData)(vlSelf->mask_generation_VGA__DOT__w5)) 
                                                        << 0x19U) 
                                                       | (0xfe000000U 
                                                          & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                              << 0x18U) 
                                                             & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w5)) 
                                                                << 0x19U))))));
    vlSelf->mask_generation_VGA__DOT__c[0xfU] = ((0xfbffffffU 
                                                  & vlSelf->mask_generation_VGA__DOT__c[0xfU]) 
                                                 | (0x4000000U 
                                                    & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 0x19U) 
                                                        & ((IData)(vlSelf->mask_generation_VGA__DOT__w5) 
                                                           << 0x1aU)) 
                                                       | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                           << 0x18U) 
                                                          & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w5)) 
                                                             << 0x1aU)))));
    vlSelf->mask_generation_VGA__DOT__c[0xfU] = ((0xf7ffffffU 
                                                  & vlSelf->mask_generation_VGA__DOT__c[0xfU]) 
                                                 | (0x8000000U 
                                                    & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 0x19U) 
                                                        & ((IData)(vlSelf->mask_generation_VGA__DOT__w5) 
                                                           << 0x1bU)) 
                                                       | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                           << 0x18U) 
                                                          & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w5)) 
                                                             << 0x1bU)))));
    vlSelf->mask_generation_VGA__DOT__c[0xfU] = ((0xefffffffU 
                                                  & vlSelf->mask_generation_VGA__DOT__c[0xfU]) 
                                                 | (0x10000000U 
                                                    & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 0x19U) 
                                                        & ((IData)(vlSelf->mask_generation_VGA__DOT__w5) 
                                                           << 0x1cU)) 
                                                       | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                           << 0x18U) 
                                                          & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w5)) 
                                                             << 0x1cU)))));
    vlSelf->mask_generation_VGA__DOT__c[0xfU] = ((0xdfffffffU 
                                                  & vlSelf->mask_generation_VGA__DOT__c[0xfU]) 
                                                 | (0x20000000U 
                                                    & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 0x19U) 
                                                        & ((IData)(vlSelf->mask_generation_VGA__DOT__w5) 
                                                           << 0x1dU)) 
                                                       | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                           << 0x18U) 
                                                          & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w5)) 
                                                             << 0x1dU)))));
    vlSelf->mask_generation_VGA__DOT__c[3U] = ((0xfeffffffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[3U]) 
                                               | (0x1000000U 
                                                  & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                       & (~ (IData)(vlSelf->mask_generation_VGA__DOT__w7))) 
                                                      << 0x18U) 
                                                     | (0xff000000U 
                                                        & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                            << 0x17U) 
                                                           & ((IData)(vlSelf->mask_generation_VGA__DOT__w7) 
                                                              << 0x18U))))));
    vlSelf->mask_generation_VGA__DOT__c[3U] = ((0xfdffffffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[3U]) 
                                               | (0x2000000U 
                                                  & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                       << 0x18U) 
                                                      & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w7)) 
                                                         << 0x19U)) 
                                                     | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 0x17U) 
                                                        & ((IData)(vlSelf->mask_generation_VGA__DOT__w7) 
                                                           << 0x19U)))));
    vlSelf->mask_generation_VGA__DOT__c[3U] = ((0xfbffffffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[3U]) 
                                               | (0x4000000U 
                                                  & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                       << 0x18U) 
                                                      & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w7)) 
                                                         << 0x1aU)) 
                                                     | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 0x17U) 
                                                        & ((IData)(vlSelf->mask_generation_VGA__DOT__w7) 
                                                           << 0x1aU)))));
    vlSelf->mask_generation_VGA__DOT__c[3U] = ((0xf7ffffffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[3U]) 
                                               | (0x8000000U 
                                                  & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                       << 0x18U) 
                                                      & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w7)) 
                                                         << 0x1bU)) 
                                                     | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 0x17U) 
                                                        & ((IData)(vlSelf->mask_generation_VGA__DOT__w7) 
                                                           << 0x1bU)))));
    vlSelf->mask_generation_VGA__DOT__c[3U] = ((0xefffffffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[3U]) 
                                               | (0x10000000U 
                                                  & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                       << 0x18U) 
                                                      & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w7)) 
                                                         << 0x1cU)) 
                                                     | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 0x17U) 
                                                        & ((IData)(vlSelf->mask_generation_VGA__DOT__w7) 
                                                           << 0x1cU)))));
    vlSelf->mask_generation_VGA__DOT__c[7U] = ((0xfffeffffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[7U]) 
                                               | (0x10000U 
                                                  & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                       & (~ (IData)(vlSelf->mask_generation_VGA__DOT__w7))) 
                                                      << 0x10U) 
                                                     | (0xffff0000U 
                                                        & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                            << 0xeU) 
                                                           & ((IData)(vlSelf->mask_generation_VGA__DOT__w7) 
                                                              << 0x10U))))));
    vlSelf->mask_generation_VGA__DOT__c[7U] = ((0xfffdffffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[7U]) 
                                               | (0x20000U 
                                                  & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                       << 0x10U) 
                                                      & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w7)) 
                                                         << 0x11U)) 
                                                     | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 0xeU) 
                                                        & ((IData)(vlSelf->mask_generation_VGA__DOT__w7) 
                                                           << 0x11U)))));
    vlSelf->mask_generation_VGA__DOT__c[7U] = ((0xfffbffffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[7U]) 
                                               | (0x40000U 
                                                  & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                       << 0x10U) 
                                                      & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w7)) 
                                                         << 0x12U)) 
                                                     | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 0xeU) 
                                                        & ((IData)(vlSelf->mask_generation_VGA__DOT__w7) 
                                                           << 0x12U)))));
    vlSelf->mask_generation_VGA__DOT__c[7U] = ((0xfff7ffffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[7U]) 
                                               | (0x80000U 
                                                  & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                       << 0x10U) 
                                                      & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w7)) 
                                                         << 0x13U)) 
                                                     | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 0xeU) 
                                                        & ((IData)(vlSelf->mask_generation_VGA__DOT__w7) 
                                                           << 0x13U)))));
    vlSelf->mask_generation_VGA__DOT__c[7U] = ((0xffefffffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[7U]) 
                                               | (0x100000U 
                                                  & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                       << 0x10U) 
                                                      & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w7)) 
                                                         << 0x14U)) 
                                                     | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 0xeU) 
                                                        & ((IData)(vlSelf->mask_generation_VGA__DOT__w7) 
                                                           << 0x14U)))));
    vlSelf->mask_generation_VGA__DOT__c[0xbU] = ((0xfffffeffU 
                                                  & vlSelf->mask_generation_VGA__DOT__c[0xbU]) 
                                                 | (0x100U 
                                                    & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         & (~ (IData)(vlSelf->mask_generation_VGA__DOT__w7))) 
                                                        << 8U) 
                                                       | (0xffffff00U 
                                                          & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                              << 5U) 
                                                             & ((IData)(vlSelf->mask_generation_VGA__DOT__w7) 
                                                                << 8U))))));
    vlSelf->mask_generation_VGA__DOT__c[0xbU] = ((0xfffffdffU 
                                                  & vlSelf->mask_generation_VGA__DOT__c[0xbU]) 
                                                 | (0x200U 
                                                    & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 8U) 
                                                        & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w7)) 
                                                           << 9U)) 
                                                       | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                           << 5U) 
                                                          & ((IData)(vlSelf->mask_generation_VGA__DOT__w7) 
                                                             << 9U)))));
    vlSelf->mask_generation_VGA__DOT__c[0xbU] = ((0xfffffbffU 
                                                  & vlSelf->mask_generation_VGA__DOT__c[0xbU]) 
                                                 | (0x400U 
                                                    & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 8U) 
                                                        & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w7)) 
                                                           << 0xaU)) 
                                                       | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                           << 5U) 
                                                          & ((IData)(vlSelf->mask_generation_VGA__DOT__w7) 
                                                             << 0xaU)))));
    vlSelf->mask_generation_VGA__DOT__c[0xbU] = ((0xfffff7ffU 
                                                  & vlSelf->mask_generation_VGA__DOT__c[0xbU]) 
                                                 | (0x800U 
                                                    & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 8U) 
                                                        & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w7)) 
                                                           << 0xbU)) 
                                                       | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                           << 5U) 
                                                          & ((IData)(vlSelf->mask_generation_VGA__DOT__w7) 
                                                             << 0xbU)))));
    vlSelf->mask_generation_VGA__DOT__c[0xbU] = ((0xffffefffU 
                                                  & vlSelf->mask_generation_VGA__DOT__c[0xbU]) 
                                                 | (0x1000U 
                                                    & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         & (IData)(vlSelf->mask_generation_VGA__DOT__w7)) 
                                                        << 0xcU) 
                                                       | (0xfffff000U 
                                                          & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                              << 8U) 
                                                             & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w7)) 
                                                                << 0xcU))))));
    vlSelf->mask_generation_VGA__DOT__c[0xfU] = ((0xfffffffeU 
                                                  & vlSelf->mask_generation_VGA__DOT__c[0xfU]) 
                                                 | (1U 
                                                    & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                        & (~ (IData)(vlSelf->mask_generation_VGA__DOT__w7))) 
                                                       | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                           >> 4U) 
                                                          & (IData)(vlSelf->mask_generation_VGA__DOT__w7)))));
    vlSelf->mask_generation_VGA__DOT__c[0xfU] = ((0xfffffffdU 
                                                  & vlSelf->mask_generation_VGA__DOT__c[0xfU]) 
                                                 | (2U 
                                                    & ((0xfffffffeU 
                                                        & ((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                           & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w7)) 
                                                              << 1U))) 
                                                       | (0xffffffeU 
                                                          & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                              >> 4U) 
                                                             & ((IData)(vlSelf->mask_generation_VGA__DOT__w7) 
                                                                << 1U))))));
    vlSelf->mask_generation_VGA__DOT__c[0xfU] = ((0xfffffffbU 
                                                  & vlSelf->mask_generation_VGA__DOT__c[0xfU]) 
                                                 | (4U 
                                                    & ((0xfffffffcU 
                                                        & ((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                           & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w7)) 
                                                              << 2U))) 
                                                       | (0xffffffcU 
                                                          & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                              >> 4U) 
                                                             & ((IData)(vlSelf->mask_generation_VGA__DOT__w7) 
                                                                << 2U))))));
    vlSelf->mask_generation_VGA__DOT__c[0xfU] = ((0xfffffff7U 
                                                  & vlSelf->mask_generation_VGA__DOT__c[0xfU]) 
                                                 | (8U 
                                                    & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         & (IData)(vlSelf->mask_generation_VGA__DOT__w7)) 
                                                        << 3U) 
                                                       | (0xfffffff8U 
                                                          & ((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                             & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w7)) 
                                                                << 3U))))));
    vlSelf->mask_generation_VGA__DOT__c[0xfU] = ((0xffffffefU 
                                                  & vlSelf->mask_generation_VGA__DOT__c[0xfU]) 
                                                 | (0x10U 
                                                    & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 3U) 
                                                        & ((IData)(vlSelf->mask_generation_VGA__DOT__w7) 
                                                           << 4U)) 
                                                       | ((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                          & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w7)) 
                                                             << 4U)))));
    vlSelf->mask_generation_VGA__DOT__c[0x12U] = ((0xfeffffffU 
                                                   & vlSelf->mask_generation_VGA__DOT__c[0x12U]) 
                                                  | (0x1000000U 
                                                     & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                          & (~ (IData)(vlSelf->mask_generation_VGA__DOT__w7))) 
                                                         << 0x18U) 
                                                        | (0xff000000U 
                                                           & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                               << 0x13U) 
                                                              & ((IData)(vlSelf->mask_generation_VGA__DOT__w7) 
                                                                 << 0x18U))))));
    vlSelf->mask_generation_VGA__DOT__c[0x12U] = ((0xfdffffffU 
                                                   & vlSelf->mask_generation_VGA__DOT__c[0x12U]) 
                                                  | (0x2000000U 
                                                     & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                          << 0x18U) 
                                                         & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w7)) 
                                                            << 0x19U)) 
                                                        | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                            << 0x13U) 
                                                           & ((IData)(vlSelf->mask_generation_VGA__DOT__w7) 
                                                              << 0x19U)))));
    vlSelf->mask_generation_VGA__DOT__c[0x12U] = ((0xfbffffffU 
                                                   & vlSelf->mask_generation_VGA__DOT__c[0x12U]) 
                                                  | (0x4000000U 
                                                     & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                          & (IData)(vlSelf->mask_generation_VGA__DOT__w7)) 
                                                         << 0x1aU) 
                                                        | (0xfc000000U 
                                                           & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                               << 0x18U) 
                                                              & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w7)) 
                                                                 << 0x1aU))))));
    vlSelf->mask_generation_VGA__DOT__c[0x12U] = ((0xf7ffffffU 
                                                   & vlSelf->mask_generation_VGA__DOT__c[0x12U]) 
                                                  | (0x8000000U 
                                                     & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                          << 0x1aU) 
                                                         & ((IData)(vlSelf->mask_generation_VGA__DOT__w7) 
                                                            << 0x1bU)) 
                                                        | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                            << 0x18U) 
                                                           & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w7)) 
                                                              << 0x1bU)))));
    vlSelf->mask_generation_VGA__DOT__c[0x12U] = ((0xefffffffU 
                                                   & vlSelf->mask_generation_VGA__DOT__c[0x12U]) 
                                                  | (0x10000000U 
                                                     & ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                          << 0x1aU) 
                                                         & ((IData)(vlSelf->mask_generation_VGA__DOT__w7) 
                                                            << 0x1cU)) 
                                                        | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                            << 0x18U) 
                                                           & ((~ (IData)(vlSelf->mask_generation_VGA__DOT__w7)) 
                                                              << 0x1cU)))));
    vlSelf->mask_generation_VGA__DOT__c[0U] = ((0xffffffbfU 
                                                & vlSelf->mask_generation_VGA__DOT__c[0U]) 
                                               | (0xffffffc0U 
                                                  & (((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                        & (IData)(vlSelf->mask_generation_VGA__DOT__w6)) 
                                                       << 6U) 
                                                      | (0xffffffc0U 
                                                         & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                             << 5U) 
                                                            & ((IData)(vlSelf->mask_generation_VGA__DOT__w5) 
                                                               << 6U)))) 
                                                     | (0xffffffc0U 
                                                        & ((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                           & (((IData)(vlSelf->mask_generation_VGA__DOT__w7) 
                                                               | (IData)(vlSelf->mask_generation_VGA__DOT__w8)) 
                                                              << 6U))))));
    vlSelf->mask_generation_VGA__DOT__c[0U] = ((0xffffff7fU 
                                                & vlSelf->mask_generation_VGA__DOT__c[0U]) 
                                               | (0xffffff80U 
                                                  & ((((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         & (IData)(vlSelf->mask_generation_VGA__DOT__w7)) 
                                                        << 7U) 
                                                       | (0xffffff80U 
                                                          & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                              << 6U) 
                                                             & ((IData)(vlSelf->mask_generation_VGA__DOT__w6) 
                                                                << 7U)))) 
                                                      | (0xffffff80U 
                                                         & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                             << 5U) 
                                                            & ((IData)(vlSelf->mask_generation_VGA__DOT__w5) 
                                                               << 7U)))) 
                                                     | (0xffffff80U 
                                                        & ((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                           & ((IData)(vlSelf->mask_generation_VGA__DOT__w8) 
                                                              << 7U))))));
    vlSelf->mask_generation_VGA__DOT__c[0U] = ((0xfffffeffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[0U]) 
                                               | (0xffffff00U 
                                                  & ((((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         & (IData)(vlSelf->mask_generation_VGA__DOT__w8)) 
                                                        << 8U) 
                                                       | (0xffffff00U 
                                                          & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                              << 7U) 
                                                             & ((IData)(vlSelf->mask_generation_VGA__DOT__w7) 
                                                                << 8U)))) 
                                                      | (0xffffff00U 
                                                         & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                             << 6U) 
                                                            & ((IData)(vlSelf->mask_generation_VGA__DOT__w6) 
                                                               << 8U)))) 
                                                     | (0xffffff00U 
                                                        & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                            << 5U) 
                                                           & ((IData)(vlSelf->mask_generation_VGA__DOT__w5) 
                                                              << 8U))))));
    vlSelf->mask_generation_VGA__DOT__c[0U] = ((0xfffffdffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[0U]) 
                                               | (0xfffffe00U 
                                                  & ((((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 8U) 
                                                        & ((IData)(vlSelf->mask_generation_VGA__DOT__w8) 
                                                           << 9U)) 
                                                       | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                           << 7U) 
                                                          & ((IData)(vlSelf->mask_generation_VGA__DOT__w7) 
                                                             << 9U))) 
                                                      | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                          << 6U) 
                                                         & ((IData)(vlSelf->mask_generation_VGA__DOT__w6) 
                                                            << 9U))) 
                                                     | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 5U) 
                                                        & ((IData)(vlSelf->mask_generation_VGA__DOT__w5) 
                                                           << 9U)))));
    vlSelf->mask_generation_VGA__DOT__c[0U] = ((0xfffffbffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[0U]) 
                                               | (0xfffffc00U 
                                                  & ((((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         & (IData)(vlSelf->mask_generation_VGA__DOT__w5)) 
                                                        << 0xaU) 
                                                       | (0xfffffc00U 
                                                          & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                              << 8U) 
                                                             & ((IData)(vlSelf->mask_generation_VGA__DOT__w8) 
                                                                << 0xaU)))) 
                                                      | (0xfffffc00U 
                                                         & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                             << 7U) 
                                                            & ((IData)(vlSelf->mask_generation_VGA__DOT__w7) 
                                                               << 0xaU)))) 
                                                     | (0xfffffc00U 
                                                        & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                            << 6U) 
                                                           & ((IData)(vlSelf->mask_generation_VGA__DOT__w6) 
                                                              << 0xaU))))));
    vlSelf->mask_generation_VGA__DOT__c[0U] = ((0xfffff7ffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[0U]) 
                                               | (0xfffff800U 
                                                  & ((((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 0xaU) 
                                                        & ((IData)(vlSelf->mask_generation_VGA__DOT__w5) 
                                                           << 0xbU)) 
                                                       | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                           << 8U) 
                                                          & ((IData)(vlSelf->mask_generation_VGA__DOT__w8) 
                                                             << 0xbU))) 
                                                      | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                          << 7U) 
                                                         & ((IData)(vlSelf->mask_generation_VGA__DOT__w7) 
                                                            << 0xbU))) 
                                                     | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 6U) 
                                                        & ((IData)(vlSelf->mask_generation_VGA__DOT__w6) 
                                                           << 0xbU)))));
    vlSelf->mask_generation_VGA__DOT__c[0U] = ((0xffffefffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[0U]) 
                                               | (0xfffff000U 
                                                  & ((((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         & (IData)(vlSelf->mask_generation_VGA__DOT__w6)) 
                                                        << 0xcU) 
                                                       | (0xfffff000U 
                                                          & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                              << 0xaU) 
                                                             & ((IData)(vlSelf->mask_generation_VGA__DOT__w5) 
                                                                << 0xcU)))) 
                                                      | (0xfffff000U 
                                                         & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                             << 8U) 
                                                            & ((IData)(vlSelf->mask_generation_VGA__DOT__w8) 
                                                               << 0xcU)))) 
                                                     | (0xfffff000U 
                                                        & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                            << 7U) 
                                                           & ((IData)(vlSelf->mask_generation_VGA__DOT__w7) 
                                                              << 0xcU))))));
    vlSelf->mask_generation_VGA__DOT__c[0U] = ((0xffffdfffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[0U]) 
                                               | (0xffffe000U 
                                                  & ((((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 0xcU) 
                                                        & ((IData)(vlSelf->mask_generation_VGA__DOT__w6) 
                                                           << 0xdU)) 
                                                       | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                           << 0xaU) 
                                                          & ((IData)(vlSelf->mask_generation_VGA__DOT__w5) 
                                                             << 0xdU))) 
                                                      | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                          << 8U) 
                                                         & ((IData)(vlSelf->mask_generation_VGA__DOT__w8) 
                                                            << 0xdU))) 
                                                     | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 7U) 
                                                        & ((IData)(vlSelf->mask_generation_VGA__DOT__w7) 
                                                           << 0xdU)))));
    vlSelf->mask_generation_VGA__DOT__c[0U] = ((0xffffbfffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[0U]) 
                                               | (0xffffc000U 
                                                  & ((((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         & (IData)(vlSelf->mask_generation_VGA__DOT__w7)) 
                                                        << 0xeU) 
                                                       | (0xffffc000U 
                                                          & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                              << 0xcU) 
                                                             & ((IData)(vlSelf->mask_generation_VGA__DOT__w6) 
                                                                << 0xeU)))) 
                                                      | (0xffffc000U 
                                                         & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                             << 0xaU) 
                                                            & ((IData)(vlSelf->mask_generation_VGA__DOT__w5) 
                                                               << 0xeU)))) 
                                                     | (0xffffc000U 
                                                        & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                            << 8U) 
                                                           & ((IData)(vlSelf->mask_generation_VGA__DOT__w8) 
                                                              << 0xeU))))));
    vlSelf->mask_generation_VGA__DOT__c[0U] = ((0xffff7fffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[0U]) 
                                               | (0xffff8000U 
                                                  & ((((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         & (IData)(vlSelf->mask_generation_VGA__DOT__w5)) 
                                                        << 0xfU) 
                                                       | (0xffff8000U 
                                                          & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                              << 0xeU) 
                                                             & ((IData)(vlSelf->mask_generation_VGA__DOT__w7) 
                                                                << 0xfU)))) 
                                                      | (0xffff8000U 
                                                         & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                             << 0xcU) 
                                                            & ((IData)(vlSelf->mask_generation_VGA__DOT__w6) 
                                                               << 0xfU)))) 
                                                     | (0xffff8000U 
                                                        & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                            << 8U) 
                                                           & ((IData)(vlSelf->mask_generation_VGA__DOT__w8) 
                                                              << 0xfU))))));
    vlSelf->mask_generation_VGA__DOT__c[0U] = ((0xfffeffffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[0U]) 
                                               | (0xffff0000U 
                                                  & ((((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         & (IData)(vlSelf->mask_generation_VGA__DOT__w8)) 
                                                        << 0x10U) 
                                                       | (0xffff0000U 
                                                          & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                              << 0xfU) 
                                                             & ((IData)(vlSelf->mask_generation_VGA__DOT__w5) 
                                                                << 0x10U)))) 
                                                      | (0xffff0000U 
                                                         & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                             << 0xeU) 
                                                            & ((IData)(vlSelf->mask_generation_VGA__DOT__w7) 
                                                               << 0x10U)))) 
                                                     | (0xffff0000U 
                                                        & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                            << 0xcU) 
                                                           & ((IData)(vlSelf->mask_generation_VGA__DOT__w6) 
                                                              << 0x10U))))));
    vlSelf->mask_generation_VGA__DOT__c[0U] = ((0xfffdffffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[0U]) 
                                               | (0xfffe0000U 
                                                  & ((((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 0x10U) 
                                                        & ((IData)(vlSelf->mask_generation_VGA__DOT__w8) 
                                                           << 0x11U)) 
                                                       | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                           << 0xfU) 
                                                          & ((IData)(vlSelf->mask_generation_VGA__DOT__w5) 
                                                             << 0x11U))) 
                                                      | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                          << 0xeU) 
                                                         & ((IData)(vlSelf->mask_generation_VGA__DOT__w7) 
                                                            << 0x11U))) 
                                                     | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 0xcU) 
                                                        & ((IData)(vlSelf->mask_generation_VGA__DOT__w6) 
                                                           << 0x11U)))));
    vlSelf->mask_generation_VGA__DOT__c[0U] = ((0xfffbffffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[0U]) 
                                               | (0xfffc0000U 
                                                  & ((((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         & (IData)(vlSelf->mask_generation_VGA__DOT__w6)) 
                                                        << 0x12U) 
                                                       | (0xfffc0000U 
                                                          & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                              << 0x10U) 
                                                             & ((IData)(vlSelf->mask_generation_VGA__DOT__w8) 
                                                                << 0x12U)))) 
                                                      | (0xfffc0000U 
                                                         & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                             << 0xfU) 
                                                            & ((IData)(vlSelf->mask_generation_VGA__DOT__w5) 
                                                               << 0x12U)))) 
                                                     | (0xfffc0000U 
                                                        & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                            << 0xeU) 
                                                           & ((IData)(vlSelf->mask_generation_VGA__DOT__w7) 
                                                              << 0x12U))))));
    vlSelf->mask_generation_VGA__DOT__c[0U] = ((0xfff7ffffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[0U]) 
                                               | (0xfff80000U 
                                                  & ((((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 0x12U) 
                                                        & ((IData)(vlSelf->mask_generation_VGA__DOT__w6) 
                                                           << 0x13U)) 
                                                       | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                           << 0x10U) 
                                                          & ((IData)(vlSelf->mask_generation_VGA__DOT__w8) 
                                                             << 0x13U))) 
                                                      | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                          << 0xfU) 
                                                         & ((IData)(vlSelf->mask_generation_VGA__DOT__w5) 
                                                            << 0x13U))) 
                                                     | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 0xeU) 
                                                        & ((IData)(vlSelf->mask_generation_VGA__DOT__w7) 
                                                           << 0x13U)))));
    vlSelf->mask_generation_VGA__DOT__c[0U] = ((0xffefffffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[0U]) 
                                               | (0xfff00000U 
                                                  & ((((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         & (IData)(vlSelf->mask_generation_VGA__DOT__w5)) 
                                                        << 0x14U) 
                                                       | (0xfff00000U 
                                                          & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                              << 0x12U) 
                                                             & ((IData)(vlSelf->mask_generation_VGA__DOT__w6) 
                                                                << 0x14U)))) 
                                                      | (0xfff00000U 
                                                         & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                             << 0x10U) 
                                                            & ((IData)(vlSelf->mask_generation_VGA__DOT__w8) 
                                                               << 0x14U)))) 
                                                     | (0xfff00000U 
                                                        & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                            << 0xeU) 
                                                           & ((IData)(vlSelf->mask_generation_VGA__DOT__w7) 
                                                              << 0x14U))))));
    vlSelf->mask_generation_VGA__DOT__c[0U] = ((0xffdfffffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[0U]) 
                                               | (0xffe00000U 
                                                  & ((((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         & (IData)(vlSelf->mask_generation_VGA__DOT__w7)) 
                                                        << 0x15U) 
                                                       | (0xffe00000U 
                                                          & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                              << 0x14U) 
                                                             & ((IData)(vlSelf->mask_generation_VGA__DOT__w5) 
                                                                << 0x15U)))) 
                                                      | (0xffe00000U 
                                                         & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                             << 0x12U) 
                                                            & ((IData)(vlSelf->mask_generation_VGA__DOT__w6) 
                                                               << 0x15U)))) 
                                                     | (0xffe00000U 
                                                        & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                            << 0x10U) 
                                                           & ((IData)(vlSelf->mask_generation_VGA__DOT__w8) 
                                                              << 0x15U))))));
    vlSelf->mask_generation_VGA__DOT__c[0U] = ((0xffbfffffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[0U]) 
                                               | (0xffc00000U 
                                                  & ((((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 0x15U) 
                                                        & ((IData)(vlSelf->mask_generation_VGA__DOT__w7) 
                                                           << 0x16U)) 
                                                       | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                           << 0x14U) 
                                                          & ((IData)(vlSelf->mask_generation_VGA__DOT__w5) 
                                                             << 0x16U))) 
                                                      | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                          << 0x12U) 
                                                         & ((IData)(vlSelf->mask_generation_VGA__DOT__w6) 
                                                            << 0x16U))) 
                                                     | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 0x10U) 
                                                        & ((IData)(vlSelf->mask_generation_VGA__DOT__w8) 
                                                           << 0x16U)))));
    vlSelf->mask_generation_VGA__DOT__c[0U] = ((0xff7fffffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[0U]) 
                                               | (0xff800000U 
                                                  & ((((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 0x15U) 
                                                        & ((IData)(vlSelf->mask_generation_VGA__DOT__w7) 
                                                           << 0x17U)) 
                                                       | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                           << 0x14U) 
                                                          & ((IData)(vlSelf->mask_generation_VGA__DOT__w5) 
                                                             << 0x17U))) 
                                                      | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                          << 0x12U) 
                                                         & ((IData)(vlSelf->mask_generation_VGA__DOT__w6) 
                                                            << 0x17U))) 
                                                     | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 0x10U) 
                                                        & ((IData)(vlSelf->mask_generation_VGA__DOT__w8) 
                                                           << 0x17U)))));
    vlSelf->mask_generation_VGA__DOT__c[0U] = ((0xfeffffffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[0U]) 
                                               | (0xff000000U 
                                                  & (((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                        & ((IData)(vlSelf->mask_generation_VGA__DOT__w6) 
                                                           | (IData)(vlSelf->mask_generation_VGA__DOT__w8))) 
                                                       << 0x18U) 
                                                      | (0xff000000U 
                                                         & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                             << 0x15U) 
                                                            & ((IData)(vlSelf->mask_generation_VGA__DOT__w7) 
                                                               << 0x18U)))) 
                                                     | (0xff000000U 
                                                        & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                            << 0x14U) 
                                                           & ((IData)(vlSelf->mask_generation_VGA__DOT__w5) 
                                                              << 0x18U))))));
    vlSelf->mask_generation_VGA__DOT__c[0U] = ((0xfdffffffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[0U]) 
                                               | (0xfe000000U 
                                                  & (((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                        & (IData)(vlSelf->mask_generation_VGA__DOT__w5)) 
                                                       << 0x19U) 
                                                      | (0xfe000000U 
                                                         & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                             << 0x18U) 
                                                            & (((IData)(vlSelf->mask_generation_VGA__DOT__w6) 
                                                                | (IData)(vlSelf->mask_generation_VGA__DOT__w8)) 
                                                               << 0x19U)))) 
                                                     | (0xfe000000U 
                                                        & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                            << 0x15U) 
                                                           & ((IData)(vlSelf->mask_generation_VGA__DOT__w7) 
                                                              << 0x19U))))));
    vlSelf->mask_generation_VGA__DOT__c[0U] = ((0xfbffffffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[0U]) 
                                               | (0xfc000000U 
                                                  & (((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                        << 0x19U) 
                                                       & ((IData)(vlSelf->mask_generation_VGA__DOT__w5) 
                                                          << 0x1aU)) 
                                                      | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                          << 0x18U) 
                                                         & (((IData)(vlSelf->mask_generation_VGA__DOT__w6) 
                                                             | (IData)(vlSelf->mask_generation_VGA__DOT__w8)) 
                                                            << 0x1aU))) 
                                                     | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 0x15U) 
                                                        & ((IData)(vlSelf->mask_generation_VGA__DOT__w7) 
                                                           << 0x1aU)))));
    vlSelf->mask_generation_VGA__DOT__c[0U] = ((0xf7ffffffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[0U]) 
                                               | (0xf8000000U 
                                                  & (((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                        << 0x19U) 
                                                       & ((IData)(vlSelf->mask_generation_VGA__DOT__w5) 
                                                          << 0x1bU)) 
                                                      | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                          << 0x18U) 
                                                         & (((IData)(vlSelf->mask_generation_VGA__DOT__w6) 
                                                             | (IData)(vlSelf->mask_generation_VGA__DOT__w8)) 
                                                            << 0x1bU))) 
                                                     | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 0x15U) 
                                                        & ((IData)(vlSelf->mask_generation_VGA__DOT__w7) 
                                                           << 0x1bU)))));
    vlSelf->mask_generation_VGA__DOT__c[0U] = ((0xefffffffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[0U]) 
                                               | (0xf0000000U 
                                                  & (((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                        & (IData)(vlSelf->mask_generation_VGA__DOT__w7)) 
                                                       << 0x1cU) 
                                                      | (0xf0000000U 
                                                         & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                             << 0x19U) 
                                                            & ((IData)(vlSelf->mask_generation_VGA__DOT__w5) 
                                                               << 0x1cU)))) 
                                                     | (0xf0000000U 
                                                        & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                            << 0x18U) 
                                                           & (((IData)(vlSelf->mask_generation_VGA__DOT__w6) 
                                                               | (IData)(vlSelf->mask_generation_VGA__DOT__w8)) 
                                                              << 0x1cU))))));
    vlSelf->mask_generation_VGA__DOT__c[0U] = ((0xdfffffffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[0U]) 
                                               | (0xe0000000U 
                                                  & (((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                        << 0x1cU) 
                                                       & ((IData)(vlSelf->mask_generation_VGA__DOT__w7) 
                                                          << 0x1dU)) 
                                                      | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                          << 0x19U) 
                                                         & ((IData)(vlSelf->mask_generation_VGA__DOT__w5) 
                                                            << 0x1dU))) 
                                                     | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 0x18U) 
                                                        & (((IData)(vlSelf->mask_generation_VGA__DOT__w6) 
                                                            | (IData)(vlSelf->mask_generation_VGA__DOT__w8)) 
                                                           << 0x1dU)))));
    vlSelf->mask_generation_VGA__DOT__c[0U] = ((0xbfffffffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[0U]) 
                                               | (0xc0000000U 
                                                  & (((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                        & ((IData)(vlSelf->mask_generation_VGA__DOT__w5) 
                                                           | (IData)(vlSelf->mask_generation_VGA__DOT__w6))) 
                                                       << 0x1eU) 
                                                      | (0xc0000000U 
                                                         & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                             << 0x1cU) 
                                                            & ((IData)(vlSelf->mask_generation_VGA__DOT__w7) 
                                                               << 0x1eU)))) 
                                                     | (0xc0000000U 
                                                        & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                            << 0x18U) 
                                                           & ((IData)(vlSelf->mask_generation_VGA__DOT__w8) 
                                                              << 0x1eU))))));
    vlSelf->mask_generation_VGA__DOT__c[0U] = ((0x7fffffffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[0U]) 
                                               | (0x80000000U 
                                                  & (((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                        << 0x1eU) 
                                                       & (((IData)(vlSelf->mask_generation_VGA__DOT__w5) 
                                                           | (IData)(vlSelf->mask_generation_VGA__DOT__w6)) 
                                                          << 0x1fU)) 
                                                      | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                          << 0x1cU) 
                                                         & ((IData)(vlSelf->mask_generation_VGA__DOT__w7) 
                                                            << 0x1fU))) 
                                                     | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 0x18U) 
                                                        & ((IData)(vlSelf->mask_generation_VGA__DOT__w8) 
                                                           << 0x1fU)))));
    vlSelf->mask_generation_VGA__DOT__c[1U] = ((0xfffffffeU 
                                                & vlSelf->mask_generation_VGA__DOT__c[1U]) 
                                               | ((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                    & (IData)(vlSelf->mask_generation_VGA__DOT__w8)) 
                                                   | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                       >> 2U) 
                                                      & ((IData)(vlSelf->mask_generation_VGA__DOT__w5) 
                                                         | (IData)(vlSelf->mask_generation_VGA__DOT__w6)))) 
                                                  | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                      >> 4U) 
                                                     & (IData)(vlSelf->mask_generation_VGA__DOT__w7))));
    vlSelf->mask_generation_VGA__DOT__c[1U] = ((0xfffffffdU 
                                                & vlSelf->mask_generation_VGA__DOT__c[1U]) 
                                               | (0xfffffffeU 
                                                  & (((0xfffffffeU 
                                                       & ((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                          & ((IData)(vlSelf->mask_generation_VGA__DOT__w8) 
                                                             << 1U))) 
                                                      | (0x3ffffffeU 
                                                         & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                             >> 2U) 
                                                            & (((IData)(vlSelf->mask_generation_VGA__DOT__w5) 
                                                                | (IData)(vlSelf->mask_generation_VGA__DOT__w6)) 
                                                               << 1U)))) 
                                                     | (0xffffffeU 
                                                        & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                            >> 4U) 
                                                           & ((IData)(vlSelf->mask_generation_VGA__DOT__w7) 
                                                              << 1U))))));
    vlSelf->mask_generation_VGA__DOT__c[1U] = ((0xfffffffbU 
                                                & vlSelf->mask_generation_VGA__DOT__c[1U]) 
                                               | (0xfffffffcU 
                                                  & (((0xfffffffcU 
                                                       & ((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                          & ((IData)(vlSelf->mask_generation_VGA__DOT__w8) 
                                                             << 2U))) 
                                                      | (0x3ffffffcU 
                                                         & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                             >> 2U) 
                                                            & (((IData)(vlSelf->mask_generation_VGA__DOT__w5) 
                                                                | (IData)(vlSelf->mask_generation_VGA__DOT__w6)) 
                                                               << 2U)))) 
                                                     | (0xffffffcU 
                                                        & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                            >> 4U) 
                                                           & ((IData)(vlSelf->mask_generation_VGA__DOT__w7) 
                                                              << 2U))))));
    vlSelf->mask_generation_VGA__DOT__c[1U] = ((0xfffffff7U 
                                                & vlSelf->mask_generation_VGA__DOT__c[1U]) 
                                               | (0xfffffff8U 
                                                  & (((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                        & ((IData)(vlSelf->mask_generation_VGA__DOT__w5) 
                                                           | (IData)(vlSelf->mask_generation_VGA__DOT__w7))) 
                                                       << 3U) 
                                                      | (0xfffffff8U 
                                                         & ((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                            & ((IData)(vlSelf->mask_generation_VGA__DOT__w8) 
                                                               << 3U)))) 
                                                     | (0x3ffffff8U 
                                                        & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                            >> 2U) 
                                                           & ((IData)(vlSelf->mask_generation_VGA__DOT__w6) 
                                                              << 3U))))));
    vlSelf->mask_generation_VGA__DOT__c[1U] = ((0xffffffefU 
                                                & vlSelf->mask_generation_VGA__DOT__c[1U]) 
                                               | (0xfffffff0U 
                                                  & (((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                        & (IData)(vlSelf->mask_generation_VGA__DOT__w6)) 
                                                       << 4U) 
                                                      | (0xfffffff0U 
                                                         & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                             << 3U) 
                                                            & (((IData)(vlSelf->mask_generation_VGA__DOT__w5) 
                                                                | (IData)(vlSelf->mask_generation_VGA__DOT__w7)) 
                                                               << 4U)))) 
                                                     | (0xfffffff0U 
                                                        & ((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                           & ((IData)(vlSelf->mask_generation_VGA__DOT__w8) 
                                                              << 4U))))));
    vlSelf->mask_generation_VGA__DOT__c[1U] = ((0xffffffdfU 
                                                & vlSelf->mask_generation_VGA__DOT__c[1U]) 
                                               | (0xffffffe0U 
                                                  & (((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                        << 4U) 
                                                       & ((IData)(vlSelf->mask_generation_VGA__DOT__w6) 
                                                          << 5U)) 
                                                      | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                          << 3U) 
                                                         & (((IData)(vlSelf->mask_generation_VGA__DOT__w5) 
                                                             | (IData)(vlSelf->mask_generation_VGA__DOT__w7)) 
                                                            << 5U))) 
                                                     | ((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                        & ((IData)(vlSelf->mask_generation_VGA__DOT__w8) 
                                                           << 5U)))));
    vlSelf->mask_generation_VGA__DOT__c[1U] = ((0xffffffbfU 
                                                & vlSelf->mask_generation_VGA__DOT__c[1U]) 
                                               | (0xffffffc0U 
                                                  & (((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                        << 4U) 
                                                       & ((IData)(vlSelf->mask_generation_VGA__DOT__w6) 
                                                          << 6U)) 
                                                      | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                          << 3U) 
                                                         & (((IData)(vlSelf->mask_generation_VGA__DOT__w5) 
                                                             | (IData)(vlSelf->mask_generation_VGA__DOT__w7)) 
                                                            << 6U))) 
                                                     | ((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                        & ((IData)(vlSelf->mask_generation_VGA__DOT__w8) 
                                                           << 6U)))));
    vlSelf->mask_generation_VGA__DOT__c[1U] = ((0xffffff7fU 
                                                & vlSelf->mask_generation_VGA__DOT__c[1U]) 
                                               | (0xffffff80U 
                                                  & (((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                        << 4U) 
                                                       & ((IData)(vlSelf->mask_generation_VGA__DOT__w6) 
                                                          << 7U)) 
                                                      | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                          << 3U) 
                                                         & (((IData)(vlSelf->mask_generation_VGA__DOT__w5) 
                                                             | (IData)(vlSelf->mask_generation_VGA__DOT__w7)) 
                                                            << 7U))) 
                                                     | ((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                        & ((IData)(vlSelf->mask_generation_VGA__DOT__w8) 
                                                           << 7U)))));
    vlSelf->mask_generation_VGA__DOT__c[1U] = ((0xfffffeffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[1U]) 
                                               | (0xffffff00U 
                                                  & (((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                        & ((IData)(vlSelf->mask_generation_VGA__DOT__w5) 
                                                           | (IData)(vlSelf->mask_generation_VGA__DOT__w8))) 
                                                       << 8U) 
                                                      | (0xffffff00U 
                                                         & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                             << 4U) 
                                                            & ((IData)(vlSelf->mask_generation_VGA__DOT__w6) 
                                                               << 8U)))) 
                                                     | (0xffffff00U 
                                                        & (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                            << 3U) 
                                                           & ((IData)(vlSelf->mask_generation_VGA__DOT__w7) 
                                                              << 8U))))));
    vlSelf->mask_generation_VGA__DOT__c[1U] = ((0xfffffdffU 
                                                & vlSelf->mask_generation_VGA__DOT__c[1U]) 
                                               | (0xfffffe00U 
                                                  & (((((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                        << 8U) 
                                                       & (((IData)(vlSelf->mask_generation_VGA__DOT__w5) 
                                                           | (IData)(vlSelf->mask_generation_VGA__DOT__w8)) 
                                                          << 9U)) 
                                                      | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                          << 4U) 
                                                         & ((IData)(vlSelf->mask_generation_VGA__DOT__w6) 
                                                            << 9U))) 
                                                     | (((IData)(vlSelf->mask_generation_VGA__DOT__p) 
                                                         << 3U) 
                                                        & ((IData)(vlSelf->mask_generation_VGA__DOT__w7) 
                                                           << 9U)))));
}
