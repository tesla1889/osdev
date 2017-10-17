/*
	kernel/kmain.c
	Copyright (C) 2017 Nick Trebes
	MIT License (MIT)
*/

#include <integer.h>
#include "vga.h"

extern uint32_t ksize __asm__("_ksize");

void kmain() {
	ksize = ((ksize >> 12) + 1);

	vga_init();
	vga_puts("Success!\n");

	for (;;) {}
}