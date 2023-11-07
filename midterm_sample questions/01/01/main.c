//
//  main.c
//  middleexam2
//
//  Created by Jinyang Yu on 2023-06-04.
//

#include <stdio.h>

void printRect (int width,int height);

int main(void) {
    int size, row;
    printf("Enter the size: ");
    scanf("%d", &size);
    for (row=size; row>0; row--){
        printRect(row*size, size);
        //printf("\n");
    }
    return 0;
}

void printRect (int width,int height){
    int row, i;
    for (row=1;row<=height;row++){
        for (i=1; i<=width; i++){
            printf("* ");
        }
        printf("\n");
    }
}
