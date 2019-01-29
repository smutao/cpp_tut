#include<iostream>
#include<fstream>

using namespace std;

int main(){

    ofstream fileHand("test.txt");
    
    if(fileHand.is_open()){
        cout<<"obj. is associated with the file\n";
    }else{
        cout<<"obj. is not associated\n";
    }

    fileHand << "test sentences...\n";
    fileHand.close();


    

}

