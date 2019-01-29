#include<iostream>
#include "myClass.h"

using namespace std;

myClass::myClass(int a, int b)   
: v1(a), v2(b)//member initialize syntax
{
 
}

void myClass::print1(){
    cout <<  "reg. print. "<<v1 <<" const. print. "<<v2  <<endl;
}

//void myClass::print2() const {
//
//}

