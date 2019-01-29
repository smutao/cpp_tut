#include<iostream>
#include "myClass.h"

using namespace std;

myClass::myClass(){


}

myClass::myClass(int a){
   num = a;
}

void myClass::print1(){
    cout<< num<<endl;
  
}

myClass myClass::operator+(myClass obj){
       myClass objNew;
       objNew.num = num + obj.num;
       return (objNew);
}

