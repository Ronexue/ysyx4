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
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>

void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  if (direction == DIFFTEST_TO_REF) {
  	int paddr = addr;
  	uint8_t* buff = (uint8_t*) buf;//riscv64
  	for(int i = 0; i < n; i++){
  		word_t data = buff[i];
  		paddr_write(paddr, 1, data);
  	}
  } else {
    assert(0);
  }
}

void difftest_regcpy(void *dut, bool direction) {
  if (direction == DIFFTEST_TO_REF) {
    memcpy((CPU_state*)dut, &cpu, DIFFTEST_REG_SIZE);
  } else {
    memcpy(&cpu, (CPU_state*)dut, DIFFTEST_REG_SIZE);
  }
}

void difftest_exec(uint64_t n) {
  cpu_exec(n);
}

void difftest_raise_intr(word_t NO) {
  assert(0);
}

void difftest_init(int port) {
  /* Perform ISA dependent initialization. */
  init_isa();
}
