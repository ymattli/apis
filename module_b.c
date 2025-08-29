#include <stdio.h>

#include "module_b.h"

ModuleInterface moduleB = {
	.name = "ModuleB",
	.instance_count = 12,
	.soft_reset = moduleB_soft_reset,
	.init_start = moduleB_init_start,
	.init_done  = moduleB_init_done
};

void moduleB_soft_reset(int id) { printf("ModuleB[%d]: soft_reset\n", id); }
void moduleB_init_start(int id) { printf("ModuleB[%d]: init_start\n", id); }
void moduleB_init_done(int id)  { printf("ModuleB[%d]: init_done\n", id); }
