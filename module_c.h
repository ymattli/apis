#ifndef MODULE_C_H
#define MODULE_C_H

#include "module_interface.h"

void module_c_soft_reset(int id);
void module_c_init_start(int id);
void module_c_init_done(int id);

extern ModuleInterface module_c;

#endif // MODULE_C_H
