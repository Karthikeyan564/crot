// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMASK_GENERATION_VGA__SYMS_H_
#define VERILATED_VMASK_GENERATION_VGA__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vmask_generation_VGA.h"

// INCLUDE MODULE CLASSES
#include "Vmask_generation_VGA___024root.h"

// SYMS CLASS (contains all model state)
class Vmask_generation_VGA__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vmask_generation_VGA* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vmask_generation_VGA___024root TOP;

    // CONSTRUCTORS
    Vmask_generation_VGA__Syms(VerilatedContext* contextp, const char* namep, Vmask_generation_VGA* modelp);
    ~Vmask_generation_VGA__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
