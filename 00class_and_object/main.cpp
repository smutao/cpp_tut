#include <iostream>
using namespace std;

class MyClass{
    public://access specifier  
        void coolSaying(){
	   cout<< "to the choir"<<endl;
	}

};

int main()
{
   MyClass obj1;
   obj1.coolSaying();   
   return 0;
}
