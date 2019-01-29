#include<iostream>
#include "myClass.h"
using namespace std;


int main(){
    myClass obj1;
    myClass *obj2 = &obj1;

    obj1.print1();
    obj2->print1();

}
