#include<iostream>

using namespace std;

void passme(int &a);

int main(){

  int a=9; 
  passme(a);
  cout<<"a= "<<a<<endl;
}

void passme(int &a){ // important

    a = 0;

}


