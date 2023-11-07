//
//  main.c
//  Prelab_2.1
//
//  Created by Jinyang Yu on 2023-05-23.
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int year;
    printf("please enter a year:");
    scanf("%d", &year);
    if(year<1582){
        printf("Error: the Gregorian Calendar had not been adopted at that time");
    }
    
    else if(year%4!=0){
        printf("The year you entered %d is not a leap year", year);}
    
    else {
        if (year%100==0 && year%400!=0)
            printf("The year you entered %d is not a leap year", year);
        else
            printf("The year you entered %d is a leap year", year);
    }
    return 0;
}
