#include <iostream> 
using namespace std;

class basClass{
      public:
          void setV(int a ){
	    v1 = a;
	  }      
      protected:
          int v1;

};

class derClass1: public basClass
{
      public:
         void derFunc(){
	   cout<<"derived Class 1-derFunc: "<<v1<<endl;
	 }

};


class derClass2: public basClass
{
     public:
	void derFunc(){
	    cout << "derived Class 2-derFunc: "<<v1<<endl;
	}

};


int main(){
    derClass1 obj1;
    derClass2 obj2;
    basClass * b1 = &obj1;//
    basClass * b2 = &obj2;//
    b1->setV(6);// same function name, but actually different
    b2->setV(9);// 
     
    obj1.derFunc();
    obj2.derFunc();


}


