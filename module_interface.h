#ifndef MODULE_INTERFACE_H
#define MODULE_INTERFACE_H
typedef struct {
    const char* name;                     // Module name
    int instance_count;                   // Number of instances
    void (*soft_reset)(int instance_id);  // Instance-aware function
    void (*init_start)(int instance_id);
    void (*init_done)(int instance_id);
} ModuleInterface;


#define MODULE_DEFINE_SIMPLE(MOD, COUNT) \
    ModuleInterface module_##MOD = { \
        .name = "module_" #MOD, \
        .instance_count = COUNT, \
        .soft_reset = module_##MOD##_soft_reset, \
        .init_start = module_##MOD##_init_start, \
        .init_done = module_##MOD##_init_done \
    }

#endif