#include<iostream>

using namespace std;

template<class A, class B>
A smaller(A m, B n){
    return (m<n?m:n);
}


int main(){
   //
   int x= 99;
   double y = 87.12;
   
   cout << smaller(x,y)<<endl;   
 
   return 0;
}
