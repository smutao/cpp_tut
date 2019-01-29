#ifndef PEOPLE_H
#define PEOPLE_H

#include <iostream>
#include<string>
#include "birth.h"//we will store a 'birth' object
using namespace std;

class people{
  public:
     people(string x, birth bo);
     void printI();
  private:
     string name;
     birth dob;

    // birth bir1(10,1,1991);

};


#endif 



