#include<iostream>

using namespace std;




class myClass{
    public:
    int age;	    


};


int main(){

   int i = 5;
   int *j = new int(5); //new returns an address

   cout<<i<<" "<<*j<<endl;
   
   //delete j;
   //cout << *j << endl;

   myClass * obj = new myClass;
   obj->age = 3;
   cout<< obj->age << endl;
}


