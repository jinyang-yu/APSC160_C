//
//  main.c
//  07
//
//  Created by Jinyang Yu on 2023-06-23.
//

#include <stdio.h>
#define SENTINEL -1

int main(void) {
    int num, num2;
    int max, min;
    printf("Enter a series of positive integers, terminated by -1: \n");
    scanf("%d", &num);
    if(num==SENTINEL){
        printf("ERROR: no data entered!\n");
    }
    
    else{
        max=num;
        min=num;
        scanf("%d", &num2);
        while(num2!=SENTINEL){
            if (num2>num){
                max=num2;
            }
            else {
                min=num2;
            }
            num=num2;
            scanf("%d", &num2);
        }
        printf("Minimum value: %d, maximum value: %d\n", min, max);
    }
    printf("Press any key to continue...\n");
    return 0;
}
