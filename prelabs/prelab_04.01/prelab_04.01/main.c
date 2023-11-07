//
//  main.c
//  lab04_01
//
//  Created by Jinyang Yu on 2023-05-30.
//

#include <stdio.h>

int factorial(int n);
int main(void) {
    int n, fac;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
    fac=factorial(n);
    printf("\n The factorial of %d is: %d\n", n, fac);
    return 0;
}

int factorial(int n){
    int i, fac=1;
    if (n>0){
        for (i=0; i<n; i++){
            fac*=(n-i);
        }
    }
    return fac;
}
