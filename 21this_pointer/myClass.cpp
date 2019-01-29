#include<iostream>
#include "myClass.h"
using namespace std;

myClass::myClass(int a)
:h(a)// identical to {h=a;}
{
    //h = a;
	}


void myClass::print1(){
    cout<<"h:"<<h<<endl;
    cout<<"this->h:"<< this->h <<endl; // 'this' is a pointer, 
                                       //current obj. address
    cout<<"(*this).h:"<< (*this).h <<endl;
}


