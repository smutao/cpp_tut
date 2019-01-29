#include<iostream>
using namespace std;

int main(){

    int mdarr[2][3] = {{3,2,1},{4,5,6}};
    
    for (int row=0;row<2;row++){
       for (int col=0;col<3;col++){
           cout<<mdarr[row][col]<<endl;
       }
    
    }

}
