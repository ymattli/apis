#ifndef MODULE_AB_H
#define MODULE_AB_H

#include "module_interface.h"

void module_ab_soft_reset(int id);
void module_ab_init_start(int id);
void module_ab_init_done(int id);

extern ModuleInterface module_ab;

#endif // MODULE_AB_H
