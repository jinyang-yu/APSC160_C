//
//  main.c
//  swap
//
//  Created by Jinyang Yu on 2023-06-19.
//

#include <stdio.h>

int main(void) {
    int x=2;
    int y=-3;
    int z;
    printf ("before swap x is %d and y is %d", x, y);
    // using a third variable
    z=x;
    x=y;
    y=z;
    // not using a third variable
    x=x+y;
    y=x-y;
    x=x-y;
    printf("after swap x is %d and y is %d", x, y);
    
    return 0;
}
