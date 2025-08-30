#ifndef MODULE_B_H
#define MODULE_B_H

#include "module_interface.h"  // Contains ModuleInterface definition and register_module()

void module_b_soft_reset(int id);
void module_b_init_start(int id);
void module_b_init_done(int id);

extern ModuleInterface module_b;
#endif