#include<iostream>

using namespace std;


class basClass{
      public:
	   virtual void commFunc(){}// utilize Polymorphism 
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


