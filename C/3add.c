#include<stdio.h>
int main(){
    int n1 ,n2 , s;
    printf("Enter first number:- ");
    scanf("%d",&n1);
    printf("Enter second number:- ");
    scanf("%d",&n2);
    s=n1+n2;
    printf("This is the total of  %d and %d :- %d", n1, n2, s);
    return(0);
}