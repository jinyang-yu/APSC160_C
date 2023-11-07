//
//  main.c
//  lab03_02
//
//  Created by Jinyang Yu on 2023-05-29.
//

#include <stdio.h>

int main(void) {
    int size, space;
    int k,i;
    while ( 1 ){
        printf("please enter the size of a triangle: ");
        scanf("%d",&size);
        if (size<1 || size > 9 ){
            printf("Error:\n");
        }
        else{
            break;
        }
    }
    /* loop over each row */
    for (k = 1; k <= size; k++) {
        space=size-k;
        /* draw (size-row) spaces at the beginning of each row */
        while (space >0){
            printf(" ");
            space--;
        }
        /* loop inside each row */
        for (i = 1; i <= k; i++) {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}
