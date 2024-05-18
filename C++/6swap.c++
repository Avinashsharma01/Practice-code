#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<< "Enter first number:- ";
    cin>>a;
    cout<< "Enter second number:- ";
    cin>>b;
    cout<< "Before swapping:- "<<"A = "<<a<<"  B = "<<b<<"\n";
    a=a^b;
    b=a^b;
    a=a^b;
    cout<< "After swapping:- "<<"A = "<<a<<"  B = "<<b<<"\n";
    return (0);
}