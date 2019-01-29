#include<iostream>
#include "birth.h"
using namespace std;

birth::birth(int m, int d, int y){
   month = m; day = d; year = y;

}

void birth::printD( ){
   cout<< month<<"/"<<day<<"/"<<year<<endl;

}

