#include <stdio.h>
#include "module_c.h"

void module_c_soft_reset(int id) { printf("module_c[%d]: soft_reset\n", id); }
void module_c_init_start(int id) { printf("module_c[%d]: init_start\n", id); }
void module_c_init_done(int id)  { printf("module_c[%d]: init_done\n", id); }


