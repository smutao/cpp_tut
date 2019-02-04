#include<iostream>
#include<vector>

using namespace std;

int main(){

vector<int> v1(4,100);

cout<<"print out contents of a vector"<<endl;

for(vector<int>::iterator it = v1.begin(); it != v1.end();++it)
  { 
    cout<<" "<<*it;
  }
cout<<"\n";

return 0;

}

