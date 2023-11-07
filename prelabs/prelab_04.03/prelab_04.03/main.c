//
//  main.c
//  lab04_03
//
//  Created by Jinyang Yu on 2023-05-30.
//

#include <stdio.h>
int getInputInRange(int min, int max);

int main(void) {
    int min, max;
    printf("please enter the min: ");
    scanf("%d", &min);
    printf("please enter the max: ");
    scanf("%d", &max);
    getInputInRange(min, max);
    return 0;
}

int getInputInRange (int min, int max) {
    int entry;
    printf("please enter a value between min and max: ");
    scanf("%d", &entry);
    while (entry > max || entry < min){
        printf("error\n");
        printf("please enter a value between min and max: ");
        scanf("%d", &entry);
    }
    return entry;
}

