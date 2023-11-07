//
//  main.c
//  Prelab_2.2
//
//  Created by Jinyang Yu on 2023-05-23.
//

#include <stdio.h>

int main(void) {
    int price;
    double tax,rebate,GST;
    printf("Enter the purchase price of the home: \n");
    scanf("%d", &price);
    
    if (price<0)
    {printf("Error");}
    else {
        tax=price*0.05;
        if(price <=350000 && price>=0){
            rebate=0.36*tax;
            if (rebate>5000){
                rebate=5000.0;}
            else
            {rebate=rebate;}}
        else if(price >350000 && price<=450000){
            rebate=5000*(450000-price)/100000.00;}
        else{rebate=0;}
    GST=tax-rebate;
    printf("the GST payable is %.3f", GST);}
    return 0;
}
