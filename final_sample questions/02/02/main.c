//
//  main.c
//  02
//
//  Created by Jinyang Yu on 2023-06-20.
//

#include <stdio.h>

double sumX (double x, int n);

int main(void) {
    double x;
    int n;
    double sum;
    printf("please enter x: ");
    scanf("%lf", &x);
    printf("please enter n: ");
    scanf("%d", &n);
    sum=sumX(x, n);
    printf("the sum is: %.2f\n", sum);
    return 0;
}

double sumX (double x, int n){
    int i;
    double xn=1.0, total=1.0;
    for (i=1; i<=n; i++){
        xn*=x;
        total+=xn;
    }
    return total;
}
