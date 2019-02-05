#include<iostream>

using namespace std;

int main(){

    int a;
    a=6;
    {//Block 
       int a = 9;
    }
    cout<<"a= "<<a<<endl;
    return 0;
}


