#include <stdio.h>

#include "module_b.h"



void module_b_soft_reset(int id) { printf("module_b[%d]: soft_reset\n", id); }
void module_b_init_start(int id) { printf("module_b[%d]: init_start\n", id); }
void module_b_init_done(int id)  { printf("module_b[%d]: init_done\n", id); }
