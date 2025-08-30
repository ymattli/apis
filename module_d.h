#ifndef MODULE_D_H
#define MODULE_D_H

#include "module_interface.h"

void module_d_soft_reset(int id);
void module_d_init_start(int id);
void module_d_init_done(int id);

extern ModuleInterface module_d;

#endif // MODULE_D_H
