#include<iostream>
using namespace std;

int main(){
   int arr[5];
   int *p = &arr[0];
   int *q = arr;
    
   cout<<p<<endl;
   cout<<q<<endl;
   
   p = p + 2;// math of pointer
   cout<<p<<endl;


}
