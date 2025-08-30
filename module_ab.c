#include <stdio.h>
#include "module_ab.h"

void module_ab_soft_reset(int id) { printf("module_ab[%d]: soft_reset\n", id); }
void module_ab_init_start(int id) { printf("module_ab[%d]: init_start\n", id); }
void module_ab_init_done(int id)  { printf("module_ab[%d]: init_done\n", id); }

