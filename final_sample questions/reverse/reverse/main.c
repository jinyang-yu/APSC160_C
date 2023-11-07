//
//  main.c
//  reverse
//
//  Created by Jinyang Yu on 2023-06-21.
//

#include <stdio.h>

void reverse(char source[], char target[]);
int strLength (char str[]);
void reverse2(char source[]);

int main(void) {
    char source[]="Mina";
    char target[99];
    reverse(source, target);
    printf("%s\n", target);
    reverse2(source);
    printf("%s\n", source);
    return 0;
}
void reverse(char source[], char target[]){
    int index;
    int length;
    length=strLength(source);
    for (index=0; index<length; index++){
        target[length-index-1]=source[index];
    }
    target[index]='\0';
}

int strLength (char str[]){
    int index=0;
    while(str[index]!='\0'){
        index++;
    }
    return index;
}

void reverse2(char source[]){
    int index;
    int length;
    char temp;
    length=strLength(source);
    for (index=0; index<length/2; index++){
        temp = source[length - index - 1];
        source[length-index-1]=source[index];
        source[index]=temp;
    }
}
// half the size
// why cannot use a temporary array?
