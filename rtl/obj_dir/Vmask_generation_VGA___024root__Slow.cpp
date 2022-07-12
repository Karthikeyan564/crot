// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmask_generation_VGA.h for the primary calling header

#include "verilated.h"

#include "Vmask_generation_VGA__Syms.h"
#include "Vmask_generation_VGA___024root.h"

void Vmask_generation_VGA___024root___ctor_var_reset(Vmask_generation_VGA___024root* vlSelf);

Vmask_generation_VGA___024root::Vmask_generation_VGA___024root(Vmask_generation_VGA__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmask_generation_VGA___024root___ctor_var_reset(this);
}

void Vmask_generation_VGA___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vmask_generation_VGA___024root::~Vmask_generation_VGA___024root() {
}
