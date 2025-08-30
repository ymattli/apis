#include <stdio.h>
#include "module_d.h"

void module_d_soft_reset(int id) { printf("module_d[%d]: soft_reset\n", id); }
void module_d_init_start(int id) { printf("module_d[%d]: init_start\n", id); }
void module_d_init_done(int id)  { printf("module_d[%d]: init_done\n", id); }


