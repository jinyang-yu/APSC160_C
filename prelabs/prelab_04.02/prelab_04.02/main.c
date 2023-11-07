//
//  main.c
//  lab04_02
//
//  Created by Jinyang Yu on 2023-05-30.
//

#include <stdio.h>

int n_choose_r(int n, int r);

int main(void) {
    int n,r, choose;
    printf("Please enter the number of a group of distinct objects: ");
    scanf("%d", &n);
    printf("Please enter the number of distinct objects that you selct: ");
    scanf("%d", &r);
    choose=n_choose_r(n,r);
    printf("You have %d ways in which you can select %d distinct objects from a group of %d distinct objects.\n", choose, r, n);
    return 0;
}

int n_choose_r(int n, int r){
    int choose, fac=1,nmr, denor=1, denonmr=1;
    nmr=n-r;
    while (n>=1){
        fac*=n;
        //printf("%d\n", fac);
        n--;
    }
    while (r>=1){
        denor*=r;
        //printf("%d\n", denor);
        r--;
    }
    while (nmr>=1){
        denonmr*=nmr;
        //printf("%d\n", denonmr);
        nmr--;
    }
    choose=fac/(denor*denonmr);
    //printf("%d\n", choose);
    return (choose);
}
