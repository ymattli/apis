#ifndef MODULE_A_H
#define MODULE_A_H

#include "module_interface.h"  // Contains ModuleInterface definition and register_module()

void module_a_soft_reset(int id);
void module_a_init_start(int id);
void module_a_init_done(int id);

extern ModuleInterface module_a;

#endif