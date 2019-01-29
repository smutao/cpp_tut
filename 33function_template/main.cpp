#include <iostream>

using namespace std;

//template definition
template <class anyclass>
anyclass func(anyclass a){
    return a+a;
}

int main(){
   int x = 7;
   float y = 8.2;

   cout << func(x)<<endl;
   cout << func(y)<<endl;
   return 0;
}
