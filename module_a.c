#include <stdio.h>
#include "module_a.h"



void module_a_soft_reset(int id) { printf("module_a[%d]: soft_reset\n", id); }
void module_a_init_start(int id) { printf("module_a[%d]: init_start\n", id); }
void module_a_init_done(int id)  { printf("module_a[%d]: init_done\n", id); }