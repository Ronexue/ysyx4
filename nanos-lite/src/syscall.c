#include <common.h>
#include "/home/srx/ysyx-workbench/navy-apps/libs/libos/src/syscall.h"

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;

  switch (a[0]) {
    case SYS_exit: //printf("Strace: sys_exit.\n");
      halt(0); break;
    case SYS_yield: //printf("Strace: sys_yield.\n");
      yield(); c->GPRx = 0; break;
    case SYS_write: //printf("Strace: sys_write.\n");
      if (a[1] == 1 || a[1] == 2) {
        for (int i = 0; i < a[3]; ++i) {
          putch(*(char*)(a[2] + i));
        }
        c->GPRx = a[3];
      } else c->GPRx = -1;
      break;
    case SYS_brk: //printf("Strace: sys_brk.\n");
      c->GPRx = 0; //单任务操作系统, 空闲的内存都可以让用户程序自由使用, 因此我们只需要让SYS_brk系统调用总是返回0
      break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
