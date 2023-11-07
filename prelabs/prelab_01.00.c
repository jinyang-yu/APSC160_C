//
// prelab_1
//
// Created by Jinyang Yu on 2023-05-17.
//
/*
 Description:
 1. prompts the user for the length (in metres) of each of: the first segment (AB) and the second segment (BC) of the robot arm.
 2. prompts the user for the angle that the first segment of the robot arm makes with the positive x-axis, measured counterclockwise in radians from the positive x-axis. (see θ1 on the diagram above)
 3. prompts the user for the angle that the second segment of the robot arm makes with the positive x-axis, measured counterclockwise in radians from the positive x-axis. (see θ2 on the diagram above)
 4. computes the coordinates of point C.
 5. prints the coordinates of point C on the screen.
*/

#include <stdio.h>
#include <math.h>

int main(void) {
    double length_AB, length_BC, angle_AB, angle_BC, x, y; /* don't forget the ; */
    printf("Enter the length (in metres) of the first segment (AB): ");
    scanf("%lf", &length_AB); /* don't forget the "" and the & */
    
    printf("Enter the length (in metres) of the second segment (BC): ");
    scanf("%lf", &length_BC);
    
    printf("Enter the angle that AB makes with the positive x-axis, measured counterclockwise in radians from the positive x-axis: ");
    scanf("%lf", &angle_AB);
    
    printf("Enter the angle that BC makes with the positive x-axis, measured counterclockwise in radians from the positive x-axis: ");
    scanf("%lf", &angle_BC);

    x=length_AB*cos(angle_AB)+length_BC*cos(angle_BC);
    y=length_AB*sin(angle_AB)+length_BC*sin(angle_BC);
    
    printf("\nThe coordinates of point C is: (%.3f, %.3f)\n\n", x, y);
    
    return 0;
}

