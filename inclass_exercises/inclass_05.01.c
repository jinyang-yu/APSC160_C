# include <stdio.h>
# include <stdlib.h>

int main(void){
   int number, number1;
   double k, average;
   printf("please enter a positive integer number:");
   scanf("%d", &number);
   if (number < 0){
    printf("error: the number you input is not positive or you input -1 without inputting other positive integers.");
   }
   while (number != -1){
       k=2.0;
       printf("please enter a positive integer number:");
       scanf("%d", &number1);
       number += number1;
       average=number/k;
       k++;
   }
   printf("The average of all the numbers you input is %.2f", average);
   return 0;
}