#include<iostream>
#include<fstream>
using namespace std;

int main(){

   ofstream fileHand;
   fileHand.open("test.txt");

   fileHand << "this is for a file\n";

   fileHand.close();

}



