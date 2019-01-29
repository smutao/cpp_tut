#include<iostream>

using namespace std;

int main(){
    
    try{//below is where error may occur 
       int big = 30; 
       int small = 40;

       if (small > big){
          throw 99;
       } 
    }catch(int x){
       cout <<"small should be smaller "<<endl;
       cout <<"error num: "<<x<<endl;
    }//	
	
}


