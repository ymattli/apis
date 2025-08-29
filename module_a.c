#include <stdio.h>
#include "module_a.h"

ModuleInterface moduleA = {
	.name = "ModuleA",
	.instance_count = 3,
	.soft_reset = moduleA_soft_reset,
	.init_start = moduleA_init_start,
	.init_done  = moduleA_init_done
};

void moduleA_soft_reset(int id) { printf("ModuleA[%d]: soft_reset\n", id); }
void moduleA_init_start(int id) { printf("ModuleA[%d]: init_start\n", id); }
void moduleA_init_done(int id)  { printf("ModuleA[%d]: init_done\n", id); }