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


// Declare all module interfaces
#define REGISTER_MODULE(MOD) extern ModuleInterface module_##MOD;
#include "modules_list.h"
#undef REGISTER_MODULE

// Define all module interfaces
#include "module_a.h"
#include "module_b.h"
#include "module_c.h"
#include "module_d.h"

MODULE_DEFINE_SIMPLE(a, 3);
MODULE_DEFINE_SIMPLE(b, 12);
MODULE_DEFINE_SIMPLE(c, 1);
MODULE_DEFINE_SIMPLE(d, 4);

void register_all_modules() {
    register_module(&module_a);
    register_module(&module_b);
    register_module(&module_c);
    register_module(&module_d);
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
