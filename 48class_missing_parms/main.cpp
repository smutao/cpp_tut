#include<iostream>

using namespace std;

class myClass{
   public:
      myClass(int a, bool c=1);
};

myClass::myClass(int a, bool c){

   cout<< "a: "<<a<<" c: "<<c<<endl;
}


int main(){
 
 new myClass(1,0); 	
 new myClass(1);

 return 0;
}
