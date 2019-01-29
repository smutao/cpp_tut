#ifndef MYCLASS_H
#define MYCLASS_H

class myClass{
     public:
	 myClass(); // init. 1
	 myClass(int a); // init. 2 
	 myClass operator+(myClass);  //overloading
	 void print1();
     private:
         int num;
};


#endif
