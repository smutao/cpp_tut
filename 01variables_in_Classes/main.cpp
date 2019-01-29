#include <iostream>
#include <string>

using namespace std;

class myClass{
     public://access specifier
	  string name;  
          void setName(string x){
	      name = x;
	  }
	  void printName(){
	       cout<<name<<endl;
	  }
     private:
	  string secret;

};

int main()
{
    myClass obj1;
    obj1.name = "my name";//not a good way
    obj1.setName("what?");
    obj1.printName(); 
    //cout<<obj1.name<<endl;
    return 0;
}
