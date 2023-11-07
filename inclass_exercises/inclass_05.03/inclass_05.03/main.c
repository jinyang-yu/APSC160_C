//
//  main.c
//  ca5_03
//
//  Created by Jinyang Yu on 2023-05-28.
//

#include <stdio.h>

int main(void) {
    int size;
    int k,i;
    while ( 1 ){
        printf("please enter the size of a triangle: ");
        scanf("%d",&size);
        if (size<1){
            printf("Error:\n");
        }
        else{
            break;
        }
    }
    for (k = 1; k <= size; k++) {
        for (i = 1; i <= k; i++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
