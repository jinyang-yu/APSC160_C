//
//  main.c
//  07_01
//
//  Created by Jinyang Yu on 2023-06-20.
//

#include <stdio.h>

int main (void){
    FILE* outputFile;
    int x, y;
    outputFile=fopen ("results.txt", "w");
    if (outputFile== NULL){
        printf("error");
        return 0;
    }
    else{
        for (x=0; x<11; x++){
            y=x*x+2;
            fprintf(outputFile, "%d %d\n", x, y);
        }
        fclose(outputFile);
        return 0;
    }
}
