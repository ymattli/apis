#ifndef TOP_API_H
#define TOP_API_H

#include "module_interface.h"  // Contains ModuleInterface definition and register_module()


void register_module(ModuleInterface* module);
void register_all_modules();
void top_level_api();

#endif // TOP_API_H
