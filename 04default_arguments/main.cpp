#include <iostream>

using namespace std;

int volume(int l=1, int w=1, int h=1);//declare first 


int main(){

cout<<volume(5)<<endl;
return 0;
}

int volume(int l, int w, int h){
  return l*w*h;
}
