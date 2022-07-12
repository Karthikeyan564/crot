// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vmask_generation_VGA__Syms.h"
#include "Vmask_generation_VGA.h"
#include "Vmask_generation_VGA___024root.h"

// FUNCTIONS
Vmask_generation_VGA__Syms::~Vmask_generation_VGA__Syms()
{
}

Vmask_generation_VGA__Syms::Vmask_generation_VGA__Syms(VerilatedContext* contextp, const char* namep,Vmask_generation_VGA* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
