#include<iostream>
#include "myClass.h"
using namespace std;

int main(){

    myClass obj1(34);
    myClass obj2(21);
    myClass obj3;
    obj3 = obj1+obj2; // + operator is overloaded
    obj3.print1();

}

