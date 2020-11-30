#include "I_Printable.h"

std::ostream &operator<<(std::ostream &os, I_Printable &obj){
    obj.print(os);
    return os;
    }
