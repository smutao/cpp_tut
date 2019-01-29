#include <iostream>
#include <string>

using namespace std;

class myClass{
      public:
	 myClass(string x){ // constructor does not have a return type
		    // is designed to give initial values 
	    //cout<<"get printed automatically"<<endl; 
	    name = x;
	 }

         void printName(){
	    cout<<name<<endl;
	 }

      private:
	 string name;
};

int main(){
  myClass obj1("Bill");
  obj1.printName();
  return 0;

}
