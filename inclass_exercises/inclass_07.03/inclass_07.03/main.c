//
//  main.c
//  07_02
//
//  Created by Jinyang Yu on 2023-06-20.
//

#include <stdio.h>

int main(void) {
    FILE* inputFile;
    inputFile=fopen ("points.txt", "r");
    if (inputFile==NULL){
        printf("error");
        return 0;
    }
    else {
        
        if (fscanf(inputFile, "%d"+"%d"!=2)){
            
        }
    }
    return 0;
}
