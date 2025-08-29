#ifndef MODULE_INTERFACE_H
#define MODULE_INTERFACE_H
typedef struct {
    const char* name;                     // Module name
    int instance_count;                   // Number of instances
    void (*soft_reset)(int instance_id);  // Instance-aware function
    void (*init_start)(int instance_id);
    void (*init_done)(int instance_id);
} ModuleInterface;
#endif