#include<iostream>

using namespace std;

void passbyR(int &r);

int main(){

int v1 = 99;
int &r1 = v1;

r1 = 88;

cout<<v1<<" "<<r1<<endl;

passbyR( r1 ) ;
cout<<v1<<" "<<r1<<endl;


return 0;

}


void passbyR( int &r ){
r = 77;
}




 
