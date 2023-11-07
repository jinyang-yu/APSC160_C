//
//  main.c
//  05
//
//  Created by Jinyang Yu on 2023-06-21.
//

#include <stdio.h>

#define SOURCE "ballBearings.dat"

#define MIN_DIAM 9.95
#define MAX_DIAM 10.02

void doQualityControl( FILE* inFile);
void printReport( int numAccept, int numReject);

int main(void) {
    FILE* inFile;
    inFile=fopen(SOURCE, "r");
    if (inFile==NULL){
        printf("error\n");
        return 0;
    }
    else{
        doQualityControl(inFile);
        fclose(inFile);
    }
    return 0;
}

void doQualityControl(FILE* inFile){
    double diam, weight;
    int row=0, numReject=0, numAccept=0;
    while (fscanf(inFile, "%lf %lf", &diam, &weight)==2){
        if ( diam>MAX_DIAM || diam < MIN_DIAM){
            numReject++;
        }
        row++;
    }
    numAccept=row-numReject;
    printReport(numAccept, numReject);
}

void printReport( int numAccept, int numReject){
    int total=numAccept+numReject;
    double percentAccept, percentReject;
    percentAccept=numAccept/(double)total*100;
    percentReject=numReject/(double)total*100;
    printf("The percentages of accept and reject are: %.1f, %.1f\n", percentAccept, percentReject);
}
