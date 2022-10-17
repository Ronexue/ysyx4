/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>

word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  cpu.csr[mepc] = epc;         //mepc
  cpu.csr[mcause] = NO;          //mcause
#ifdef CONFIG_ETRACE
  printf("[ETrace] Exception %lx: mtvec = 0x%016lx, mepc = 0x%016lx, mstatus = 0x%016lx, mcause = 0x%016lx\n",
    NO, cpu.csr[mtvec], cpu.csr[mepc], cpu.csr[mstatus], cpu.csr[mcause]);
#endif
  return cpu.csr[mtvec];        //mtvec
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}
