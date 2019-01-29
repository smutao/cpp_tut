#include<iostream>
#include "people.h"
#include <string>
#include "birth.h"
using namespace std;

people::people(string x, birth bo)
: name(x), dob(bo) //initialization 
{
   
}

void people::printI(){
   cout << name<<" ";
   dob.printD(); 

}



