#include<iostream>
#include "myClass.h"

using namespace std;

int main(){
    const int x = 3;//const object needs constant functions 
    //x=5;
    cout<<x<<endl;
    myClass obj1;
    obj1.print1();
   
    const myClass obj2; //const. object here
    obj2.print2();
 
}


