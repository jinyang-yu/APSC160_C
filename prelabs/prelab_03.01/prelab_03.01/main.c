//
//  main.c
//  lab_03_01
//
//  Created by Jinyang Yu on 2023-05-28.
//

#include <stdio.h>

int main(void) {
    double c, inc, f;
    int not,k;
    printf("please enter the starting temperature: ");
    scanf("%lf", &c);
    printf("please enter the increment from one temperature to the next: ");
    scanf("%lf", &inc);
    printf("please enter the number of temperatures to be converted: ");
    scanf("%d", &not);
    while (not<=0){
        printf("error\n");
        printf("please enter the number of temperatures to be converted: ");
        scanf("%d", &not);
        }
    k=0;
    printf("celsius    fahrenheit\n");
    while (k<not){
        f=9/5.0*c+32;
        printf("%10.2f",c);
        printf("%10.2f\n",f);
        c+= inc;
        k++;
    }
    return 0;
}
