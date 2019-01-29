#include<iostream>

using namespace std;

template<class T>
class myClass{
      	
      public:
         myClass( T a, T b){
	     v1 = a;
	     v2 = b;
	 }
	 void print1();
	 T bigger();
      private:
         T v1, v2;
};


template<class T>//
void myClass<T>::print1(){
cout << v1<<" "<<v2<<endl;
}

template<class T>//
T myClass<T>::bigger(){
   return (v1>v2?v1:v2);
}

int main(){

    myClass <int> obj1(1,2);
    obj1.print1();
    cout<<"bigger: "<<obj1.bigger()<<endl;

}
