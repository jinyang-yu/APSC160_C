#include <stdio.h>
#include <stdlib.h>

#define NROWS 2 /* number of rows in array */
#define NCOLS 3 /* number of cols in array */

/* add function prototype here */
double getAverage (double data[][NCOLS], int nRows, int colIndex);

int main( void )
{
   double data[][ NCOLS ] =  { { 1.0, 2.5, 3.1 }, { 2.0, 3.5, 4.1 } };
   double average;
   int colIndex;

   printf( "Enter index of column whose data you want to average: " );
   scanf( "%d", &colIndex );

   average = getAverage( data, NROWS, colIndex );

   printf( "The average of the elements in column %d is %f\n", colIndex, average );
   return 0;
}

double getAverage (double data[][NCOLS], int nRows, int colIndex){
    int rowindex;
    double avr, sum=0.0;
    //for (colindex=0; colindex<colIndex; colindex++){
    for (rowindex=0; rowindex<nRows; rowindex++){
        sum+=data[rowindex][colIndex];
    }
    avr=sum/nRows;
    return avr;
}
