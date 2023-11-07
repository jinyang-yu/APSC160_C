//
//  main.c
//  middleexamlast
//
//  Created by Jinyang Yu on 2023-06-12.
//

#include <stdio.h>

int reverseNum (int num);
int main(void) {
    int num;
    int reverse;
    printf("Please enter an integer number: ");
    scanf("%d", &num);
    reverse=reverseNum(num);
    printf("The reverse of %d is: %d\n", num, reverse);
    return 0;
}

int reverseNum (int num){
    int reverse=0;
    int digit;
    if (num<0){
        reverse=-1;
    }
    else if (num==0){
        reverse=0;
    }
    reverse=0;
    while (num>0){
        digit=num%10;
        num=num/10;
        //reverse+=digit;
        reverse=reverse*10+digit;
        //if (num!=0){
            //reverse*=10;
        //}
    }
    return reverse;
}
