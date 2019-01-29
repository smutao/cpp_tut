/* C++ program to demonstrate the working of friend function.*/
// unfortunately, the object does not have the updated 'meter' value

#include <iostream>
using namespace std;

class Distance
{
    private:
        int meter;
    public:
        Distance(): meter(0) { }
	void print1(){
	     cout<<"current meter: "<<meter<<endl;
	}
        //friend function
        friend int addFive(Distance);
};

// friend function definition
int addFive(Distance d)
{
    //accessing private data from non-member function
    d.meter += 5;
    return d.meter;
}

int main()
{
    Distance D;
    cout<<"Distance: "<< addFive(D)<<endl;
    D.print1();
    return 0;
}

