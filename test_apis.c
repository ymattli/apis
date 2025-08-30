#include "top_api.h"  // Declares moduleA_register()

int main() {

    register_all_modules();  // Registers ModuleA with the system
    top_level_api(); // Calls soft_reset/init_start/init_done for all modules
    
    return 0;
}
