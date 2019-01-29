#include<iostream>
#include<typeinfo>
using namespace std;

int main(){

   auto x = 20;
   auto *y = &x;

   cout <<typeid(x).name()<<endl; //integer
   cout <<typeid(y).name()<<endl; //pointer of integer

   return 0;
}
