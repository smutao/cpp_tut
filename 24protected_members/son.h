#ifndef SON_H
#define SON_H
#include "mom.h" // this include can also be put into "son.cpp"

class son: public mom // inherit things from 'mom' class
{
     public:
	 son();
	 void doSome();
};

#endif

