// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmask_generation_VGA.h"
#include "Vmask_generation_VGA__Syms.h"

//============================================================
// Constructors

Vmask_generation_VGA::Vmask_generation_VGA(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vmask_generation_VGA__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , clk_en{vlSymsp->TOP.clk_en}
    , pattern_w{vlSymsp->TOP.pattern_w}
    , pattern{vlSymsp->TOP.pattern}
    , repeatedPattern{vlSymsp->TOP.repeatedPattern}
    , load_pattern{vlSymsp->TOP.load_pattern}
    , mask_type{vlSymsp->TOP.mask_type}
    , rp_valid{vlSymsp->TOP.rp_valid}
    , mg_mask{vlSymsp->TOP.mg_mask}
    , rootp{&(vlSymsp->TOP)}
{
}

Vmask_generation_VGA::Vmask_generation_VGA(const char* _vcname__)
    : Vmask_generation_VGA(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vmask_generation_VGA::~Vmask_generation_VGA() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vmask_generation_VGA___024root___eval_initial(Vmask_generation_VGA___024root* vlSelf);
void Vmask_generation_VGA___024root___eval_settle(Vmask_generation_VGA___024root* vlSelf);
void Vmask_generation_VGA___024root___eval(Vmask_generation_VGA___024root* vlSelf);
#ifdef VL_DEBUG
void Vmask_generation_VGA___024root___eval_debug_assertions(Vmask_generation_VGA___024root* vlSelf);
#endif  // VL_DEBUG
void Vmask_generation_VGA___024root___final(Vmask_generation_VGA___024root* vlSelf);

static void _eval_initial_loop(Vmask_generation_VGA__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vmask_generation_VGA___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vmask_generation_VGA___024root___eval_settle(&(vlSymsp->TOP));
        Vmask_generation_VGA___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vmask_generation_VGA::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmask_generation_VGA::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmask_generation_VGA___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vmask_generation_VGA___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vmask_generation_VGA::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vmask_generation_VGA::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vmask_generation_VGA::final() {
    Vmask_generation_VGA___024root___final(&(vlSymsp->TOP));
}
