//
//  main.c
//  lab04_04
//
//  Created by Jinyang Yu on 2023-05-31.
//

#include <stdio.h>
#define MAX_ROW 12
#define MIN_ROW 1

void triangle (int size);
int n_choose_r(int n, int r);
int getInputInRange(int entry);
int factorial(int num);

int main(void) {
    int size;
    printf("please enter the number of rows: ");
    scanf("%d", &size);
    triangle (getInputInRange (size));
    return 0;
}

void triangle (int size){
    int i, row, coef;
    for (row=1; row<=size; row++){
        for (i=0; i< row; i++){
            coef=n_choose_r((row-1), i);
            printf("%d ", coef);
        }
        printf("\n");
    }
}

int factorial(int num)
{
    int fact = 1;
     
    while( num > 1 ) {
        fact *= num;
        num--;
    }
     
    return fact;
}

int n_choose_r(int n, int r){
    int choose;
    choose=factorial(n)/(factorial(r)*factorial(n-r));
    //printf("%d\n", choose);
    return (choose);
}

int getInputInRange (int entry) {
    while (entry > MAX_ROW || entry < MIN_ROW){
        printf("error\n");
        printf("please enter a number between min and max: ");
        scanf("%d", &entry);
    }
    return entry;
}


