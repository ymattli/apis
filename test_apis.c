#include "top_api.h"  // Declares moduleA_register()
#include "module_a.h"

int main() {
    register_all_modules();  // Registers ModuleA with the system
    top_level_api(); // Calls soft_reset/init_start/init_done for all modules

    moduleA_soft_reset(0);  // Directly call ModuleA's soft_reset for instance 0
    
    return 0;
}
