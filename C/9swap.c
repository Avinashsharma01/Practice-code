#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    printf("\nBefore swapping : A = %d & B = %d\n",a,b);
    // XOR operation to swap the values of a and b.
    a=a^b;
    b=a^b;
    a=a^b;
    printf("After swapping :A=  %d & B= %d \n", a,b);
    return(0);
}