#include<iostream>

using namespace std;

double square( double a);
double cube( double a);

int main(){

   double (*func_p)(double x); // important 

   cout<<"initial value: "<<2.0<<endl;
   func_p = &square;
   cout<< "square: "<< func_p(2.0) <<endl;

   func_p = &cube;
   cout<< "cube: "<<func_p(2.0)<<endl;

}


double square(double a){

   return a*a;
}

double cube(double a){
   return a*a*a;

}
