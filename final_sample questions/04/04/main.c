//
//  main.c
//  04
//
//  Created by Jinyang Yu on 2023-06-21.
//

#include <stdio.h>

void printChars (int numChars, char printChar);
void drawRamp (int rows);
int main(void) {
    drawRamp(4);
    return 0;
}

void printChars (int numChars, char printChar){
    int i;
    for (i=1; i<=numChars; i++){
        printf("%c", printChar);
    }
}

void drawRamp (int rows){
    int i;
    for(i=1; i<=rows; i++){
        printChars(rows-i, ' ');
        printChars(2*i-1, '*');
        printf("\n");
    }
}
