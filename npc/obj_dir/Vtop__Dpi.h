// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at vsrc/top.v:371:30
    extern void c_trap(svBit done);
    // DPI import at vsrc/top.v:14:29
    extern int get_instr(int instr);
    // DPI import at vsrc/top.v:8:30
    extern void pmem_read(long long raddr, long long* rdata);
    // DPI import at vsrc/top.v:11:30
    extern void pmem_write(long long waddr, long long wdata, char wmask);
    // DPI import at vsrc/top.v:832:30
    extern void set_gpr_ptr(const svOpenArrayHandle a);

#ifdef __cplusplus
}
#endif
