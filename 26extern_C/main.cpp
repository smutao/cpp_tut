//When to use extern "C" in C++?
//writing C++ code and including C code
//

#include <iostream>
extern "C"{
#include "cfile.h"
}

using namespace std;

int main(){
    cfunc();
    return 0;

}


