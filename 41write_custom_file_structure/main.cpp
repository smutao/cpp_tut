#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ofstream fileHand("test.txt"); //create this file 

    cout<<"Enter something:\n";
    cout<<"press Ctrl+C to quit\n";
    int id;
    string name;

    while(cin>>id>>name){
      fileHand<< id<<" "<< name<<endl;
    } 
}





