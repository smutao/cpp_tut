#include <iostream>
using namespace std;

//every class can have a friend 

class myCls1{
    public:
       myCls1(){
          var1=0;
       }
       void print1(){
          cout<<var1<<endl;
       }
    private:
       int var1;
    friend void objFunc( myCls1 &obj1 ); // pass by ref.
};


void objFunc( myCls1 &obj1 ){ // pass by ref.
     obj1.var1 = 99;
} 

int main(){
	myCls1 obj2;
	objFunc(obj2); // why in this way??
        obj2.print1();	
}


