#include<iostream>

using namespace std;

double ** AllocateM( int nrow, int ncol);
void freeM( int nrow, double ** m);


int main(){
    double ** A;
    A = AllocateM(5,3);
    A[0][1] = 2.0;
    freeM(5,A);
     
    return 0; 


}

double **AllocateM(int nrow, int ncol)
{
   double ** matrix;
   matrix = new double * [nrow];
   for (int i=0;i<nrow;i++){
   matrix[i] = new double [ncol];
   }
   return matrix;

}

void freeM( int nrow, double **matrix)
{
   for (int i =0; i<nrow; i++){
      delete [] matrix[i];
   }
   delete [] matrix;
}



