#include <iostream>

using namespace std;

template <class T>
class myClass{
     public:
	 myClass(T x){
	     cout<<"treat non char.: "<<x<<endl;
	 }
};


template<> //template specialization
class myClass<char>{
    public:
	myClass(char x){
	   cout << "treat char.: "<<x<<endl;
	}
};


int main(){
    myClass<int> obj1(7);
    myClass<double> obj2(2.313);
    myClass<char> obj3('c');
    return 0;
}


