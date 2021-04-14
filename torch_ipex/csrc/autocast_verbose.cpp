#include "autocast_verbose.h"

namespace torch_ipex {
namespace autocast {
namespace verbose {

#if defined(ENABLE_AUTOCAST_VERBOSE)
thread_local string current_op_name;

string get_current_op_name(){
    return current_op_name;
}

void set_current_op_name(const string& name){
    current_op_name = name;
}
#endif

}
}
}
