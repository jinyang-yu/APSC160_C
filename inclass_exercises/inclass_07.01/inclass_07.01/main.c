//
//  main.c
//  07
//
//  Created by Jinyang Yu on 2023-06-16.
//

#include <stdio.h>

int main(void) {
    FILE* inputfile;
    double x, y;
    inputfile=fopen("/Users/jinyang/Documents/Term_Summer/APSC_160/07/07/07/points.txt", "r");
    if (inputfile == NULL) {
        /* if unsuccessful with fopen, print an error and exit */
        printf("Error: cannot open the input file\n");
        return 0;
    }
    while(fscanf(inputfile, "%lf %lf", &x, &y) == 2){
        if (x > 0 && y > 0){
            printf("(%.1f, %.1f) is in the first quadrant\n", x, y);
        }
        else if (x < 0 && y > 0){
            printf("(%.1f, %.1f) is in the second quadrant\n", x, y);
        }
        else if (x < 0 && y < 0){
            printf("(%.1f, %.1f) is in the third quadrant\n", x, y);
        }
        else {
            printf("(%.1f, %.1f) is in the fourth quadrant\n", x, y);
        }
    }
    fclose(inputfile);
    return 0;
}
