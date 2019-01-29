#include<iostream>

using namespace std;

void printIt(int x){
  cout<<"int: "<<x<<endl;
}

void printIt(float x){
   cout<<"float: "<<x<<endl;
}//define twice for overloading


int main(){
 int a = 54;
 float b= 3.14;

 printIt(a);
 printIt(b);

 return 0;
}


