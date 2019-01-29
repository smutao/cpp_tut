#include <iostream>
using namespace std;

void funcArray(int arr1[], int sizeArr);//prototype

int main(){
 int a1[3]={1,2,3};
 funcArray(a1,3);
 return 0;
}


void funcArray(int arr1[], int sizeArr){//[] after array name 
  for (int x=0;x<sizeArr;x++){
      cout<<arr1[x]<<endl;
  }

}


