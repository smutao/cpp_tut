#include<iostream>
using namespace std;

int main(){
   
    try{
        int x,y;
        cout<<"enter a number"<<endl;
	cin>>x;	
	cout<<"enter second number"<<endl;
	cin>>y;
 
        if (y==0){
	    throw 0;
	}         
        cout<<x/y<<endl;
    }catch(...){//any error can be caught - default catch
       cout<<"can not divided by 0"<<endl;
    
    }	

}
