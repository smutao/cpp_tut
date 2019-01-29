#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){

    //ofstream is for ouput 
    ifstream fileHand("dat.txt");
    
    int id;
    string name;

    while(fileHand>> id >> name){
        cout << id<< " "<<name<<endl; 
    }


}



