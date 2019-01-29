#include<iostream>
using namespace std;



void byVal(int x);
void byRef(int *x);

int main(){
    int a = 13;
    int b = 14;
    byVal(a);
    byRef(&b);
    cout<<a<<endl<<b<<endl;
}


 void byVal(int x){
    x = 99;
 }

 void byRef(int *x){
    *x = 99;
 }




