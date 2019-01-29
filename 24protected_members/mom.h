#ifndef MOM_H
#define MOM_H

class mom{
      public:
	 int pub1;     
	 mom();
	 void sayName();
      private:
         int priv1;
      protected: // its derived class can have access
         int prot1;
};

#endif
