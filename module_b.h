#ifndef MODULE_B_H
#define MODULE_B_H

#include "module_interface.h"  // Contains ModuleInterface definition and register_module()

void moduleB_soft_reset(int id);
void moduleB_init_start(int id);
void moduleB_init_done(int id);

extern ModuleInterface moduleB;
#endif