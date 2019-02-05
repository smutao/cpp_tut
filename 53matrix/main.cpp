#include<iostream>

using namespace std;



int main(){

   double ** m_p = new double * [3];  // 3 rows
   for (int i=0;i<3;i++ ){
       m_p[i] = new double [2]; // 2 columns 
       m_p[i][0] = i; 
       m_p[i][1] = i+1;
   }

   cout<< m_p[0][0] <<" "<<m_p[0][1]<<endl;
   cout<< m_p[1][0] <<" "<<m_p[1][1]<<endl;
   cout<< m_p[2][0] <<" "<<m_p[2][1]<<endl;

   //free-up memory
   for(int i = 0; i<3; i++){
      delete [] m_p[i];//delete each row
   }
   delete [] m_p;//delete the address for all rows 
}


