#include<iostream>
#include "birth.h"
#include "people.h"

using namespace std;

int main(){
  birth bir1(10,1,1991);
  people peo1("Bill",bir1); 

  peo1.printI();
}
