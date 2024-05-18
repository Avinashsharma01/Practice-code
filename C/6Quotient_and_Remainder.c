#include<stdio.h>
int main(){
    float dividend, divisor, quotient, remainder;
    printf("Enter Divident :- ");
    scanf("%f", &dividend);
    printf("Enter Divissor :- ");
    scanf("%f", &divisor);
    quotient = dividend / divisor;
    remainder = dividend % divisor;
    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d", remainder);
    return 0;
}