//
//  main.c
//  06
//
//  Created by Jinyang Yu on 2023-06-23.
//

#include <stdio.h>

#define TRUE 1
#define FALSE 0

/* Given functions (you can use them, but don’t have to write them) */
/* print to screen (without newline) the name of currency with code c */
void printName(int c);

/* prompt the user for Y or N, returns FALSE if user entered N, TRUE if Y */
int doAgain(void);

/* Get the US$ value of 1 unit of specified currency with code c */
double getUSValue(int c);

/* print to screen the help message with the currency codes. In the example above this was:
1=USD, 2=CAD,3=EUR,4=ITL,5=DEM,6=NLG,7=FRF,8=CHF */
void printHelpMessage(void);

/* Functions you will have to write */
/* convert amount from currency fromCode to currency toCode and return converted amount */
double convertCurrency(double amount,int fromCode,int toCode);
/* print to screen the result of the conversion in precisely the format given in the example run above. For example “12.12 US$ equals 13.68 CA$” */
void printResult(double convertedAmount,double fromAmount,int fromCode,int toCode);

int main(void) {
    int fromCode,toCode;
    double fromAmount,convertedAmount;
    printf("Welcome to CConvert 1.0.\n");
    do {
        printHelpMessage();
        printf("Enter currency to convert: ");
        scanf("%d", &fromCode);
        printf("Enter the amount to convert: ");
        scanf("%lf", &fromAmount);
        printf("Enter currency to convert to: ");
        scanf("%d", &toCode);
        convertedAmount = convertCurrency(fromAmount,fromCode,toCode);
        printResult(convertedAmount,fromAmount,fromCode,toCode);
    } while (doAgain());
    printf("Bye!\n");
    return 0;
}

void printHelpMessage(void) {
    printf("1=USD, 2=CAD,3=EUR,4=ITL,5=DEM,6=NLG,7=FRF,8=CHF\n");
}

double convertCurrency(double amount,int fromCode,int toCode){
    double toUS, fromUS;
    toUS=amount*getUSValue(fromCode);
    fromUS=toUS/getUSValue(toCode);
    return fromUS;
}

void printResult(double convertedAmount,double fromAmount,int fromCode,int toCode){
    printf("%5.2f", fromAmount);
    printName(fromCode);
    printf(" equals ");
    printf("%5.2f", convertedAmount);
    printName(toCode);
    printf("\n");
}
