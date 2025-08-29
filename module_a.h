#ifndef MODULE_A_H
#define MODULE_A_H

#include "module_interface.h"  // Contains ModuleInterface definition and register_module()

void moduleA_soft_reset(int id);
void moduleA_init_start(int id);
void moduleA_init_done(int id);

extern ModuleInterface moduleA;

#endif