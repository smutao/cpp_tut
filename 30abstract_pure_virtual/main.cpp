#include<iostream>

using namespace std;


//pure virtual function
// a class having "pure virtual function" is an abstract class

class basClass{
      public:
	   virtual void commFunc()=0;// utilize Polymorphism
           // is now a pure virtual function
	   // does not have defult function body		   
};         


class derClass1: public basClass
{
      public:
	    void commFunc(){
	      cout <<"derClass1 func"<<endl;
	    }
};

class derClass2: public basClass
{
     public:
	   void commFunc(){
	      cout<<"derClass2 func"<<endl;
	   }
};


int main(){
    derClass1 obj1;
    derClass2 obj2;
    basClass * b1 = &obj1;
    basClass * b2 = &obj2;
    b1->commFunc(); // same function, but different results 
    b2->commFunc();

}


