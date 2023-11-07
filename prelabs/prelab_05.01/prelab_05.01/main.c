//
//  main.c
//  lab05_01
//
//  Created by Jinyang Yu on 2023-06-03.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double average( double data[], int numEntries );
double variance( double data[], double avr, int numEntries );
double standardDeviation( double data[], double avr, int numEntries );
double minimum( double data[], int numEntries );

int main(void) {
    //double test[] = { 1.0 };
    //int numEntries = 1;
     
    //double test[] = { 1.0, 1.0 };
    //int numEntries = 2;

    //double test[] = { 1.0, 3.0, 5.0 };
    //int numEntries = 3;

    //double test[] = { -1.0, -3.0, -5.0 };
    //int numEntries = 3;

    //double test[] = { 3.0, 1.0, 5.0 };
    //int numEntries = 3;

    double test[] = { 1.1, -5.4, 4.2, 6.5, -8.7, 9.1 }; 
    int numEntries = 6;
     
    double avr;
    double var;
    double stdDev;
    double min;

    avr=average(test, numEntries);
    printf("%f\n",avr);
    
    if( numEntries > 1 ) {
        var = variance( test, avr, numEntries );
        stdDev = standardDeviation( test, avr, numEntries );
        printf( "Variance = %f\n", var );
        printf( "Standard Deviation = %f\n", stdDev );
    }
    else
        printf(" Num of enteries is 1: no variance or std deviation");
    
    //var=variance(test, avr, numEntries);
    //printf("%f\n",var);
    //stdDev=standardDeviation(test, avr, numEntries);
    //printf("%f\n",stdDev);
    min=minimum(test, numEntries);
    printf("%f\n",min);
    return 0;
}

double average( double data[], int numEntries ){
    int index;
    double sum = 0.0;
     
    for( index = 0; index < numEntries; index++ )
        sum += data[ index ];
     
    return( sum / numEntries );
}

double variance( double data[], double avr, int numEntries ){
    int index;
    double sum=0.0;
    for( index = 0; index < numEntries; index++ ){
        sum+=pow((data[index]-avr),2);
    }
    return (sum/(numEntries-1));
}

double standardDeviation( double data[], double avr, int numEntries ){
    int index;
    double sum=0.0;
    //for( index = 0; index < numEntries; index++ ){
        //sum+=pow((data[index]-avr),2);
    //}
    return (sqrt(variance(data, avr, numEntries)));
}

double minimum( double data[], int numEntries ){
    int index;
    double min;
    min=data[0];
    for( index = 1; index < numEntries; index++ ){
        if (data[index]<=min) {
            min=data[index];
        }
    }
    return min;
}
