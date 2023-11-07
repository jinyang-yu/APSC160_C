//
//  main.c
//  ca5_02
//
//  Created by Jinyang Yu on 2023-05-28.
//

#include <stdio.h>
#include <math.h>
#define Y_MAX 50
#define X_MAX 100

int main(void) {
    double x=0, y=0;
    double tem;
    printf("Printing the temperature values of the metal sheet based on x and y coordinates.\n");
    while (y<=Y_MAX){
        printf("     ");
        while (x<= X_MAX){
            printf("   x=%.f", x);
            x+=20;
        }
        x=0;
        printf("\ny=%2.f:",y);
        while (x<= X_MAX){
            tem=5*sin(x)*cos(y)+10;
            printf("%7.1f", tem);
            x+=20;
        }
        y+=10;
    }
    printf("\n");
    return 0;
}
