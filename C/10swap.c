#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the value of A and B :-\n ");
    scanf("%d%d",&a,&b);
    printf("Before swapping :- %d %d \n",a,b);
    c=a;
    a=b;
    b=c;
    printf("After swapping:- %d %d",a,b);
    return 0;
}