#include <stdint.h>

#include "memdefs.h"
#include "stdio.h"

uint8_t *KernelLoadBuffer = (uint8_t *)MEMORY_LOAD_KERNEL;
uint8_t *Kernel = (uint8_t *)MEMORY_KERNEL_ADDR;

// typedef void (*KernelStart)(VbeModeInfo* vbeModeInfo);

#define COLOR(r, g, b) ((b) | (g << 8) | (r << 16))

void __attribute__((cdecl)) start(uint16_t bootDrive) {
  clrscr();
end:
  for (;;)
    ;
}