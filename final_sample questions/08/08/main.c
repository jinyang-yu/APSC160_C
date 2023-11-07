//
//  main.c
//  08
//
//  Created by Jinyang Yu on 2023-06-24.
//

#include <stdio.h>

int countChar(char str[], char character);
int main(void) {
    int count;
    char str[]="misana is the best";
    char character='a';
    count=countChar(str, character);
    printf("%d\n", count);
    return 0;
}

int countChar(char str[], char character){
    int count=0, i;
    for (i=0; str[i]!='\0'; i++){
        if(str[i]==character){
            count++;
        }
    }
    return count;
}
