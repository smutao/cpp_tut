#include<iostream>

using namespace std;

int tuna = 89;//global


int main()
{
   int tuna = 1;//local
   cout<< ::tuna<<endl;//u. scope resolution
}





