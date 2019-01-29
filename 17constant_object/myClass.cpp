#include<iostream>
#include "myClass.h"
using namespace std;

myClass::myClass(){

}
void myClass::print1(){
   cout<<"reg. print"<<endl; 
}

void myClass::print2() const{
   cout<<"const. print"<<endl;
}

