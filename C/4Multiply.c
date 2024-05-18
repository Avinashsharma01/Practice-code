#include <stdio.h>
int main()
{
    double a, b, m;
    printf("Enter first number:- ");
    scanf("%lf", &a);
    printf("Enter second number:- ");
    scanf("%lf", &b);
    m = a * b;
    printf("This is the multiple of %lf and %lf :- %lf", a, b, m);
    return (0);
}