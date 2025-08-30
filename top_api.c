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

// Define all module interfaces
#include "module_a.h"
MODULE_DEFINE_SIMPLE(a, 3);
#include "module_b.h"
MODULE_DEFINE_SIMPLE(b, 12);
#include "module_c.h"
MODULE_DEFINE_SIMPLE(c, 1);
#include "module_d.h"
MODULE_DEFINE_SIMPLE(d, 4);
#include "module_ab.h"
MODULE_DEFINE_SIMPLE(ab, 2);

void register_all_modules() {
    register_module(&module_a);
    register_module(&module_b);
    register_module(&module_c);
    register_module(&module_d);
    register_module(&module_ab);
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
