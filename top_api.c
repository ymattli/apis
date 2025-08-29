#include <stdio.h>  // For printf
#include "top_api.h"


#define MAX_MODULES 10
static ModuleInterface* module_registry[MAX_MODULES];
static int module_count = 0;
void register_module(ModuleInterface* module) {
    if (module_count < MAX_MODULES) {
        module_registry[module_count++] = module;
    }
}

#include "module_a.h"
#include "module_b.h"
void register_all_modules() {
    register_module(&moduleA);
    register_module(&moduleB);
}

void top_level_api() {
    for (int i = 0; i < module_count; ++i) {
        ModuleInterface* mod = module_registry[i];
        for (int j = 0; j < mod->instance_count; ++j) {
            printf("== %s Instance %d ==\n", mod->name, j);
            mod->soft_reset(j);
            mod->init_start(j);
            mod->init_done(j);
        }
    }
}
