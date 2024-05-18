#include <iostream>
using namespace std;
int main()
{
    int a, b, temp;
    cout << "Enter first number:- ";
    cin >> a;
    cout << "Enter second number:- ";
    cin >> b;
    cout << "Before swapping the number:- " <<"A= "<<a <<"  B="<< b<<"\n";
    temp = a;
    a = b;
    b = temp;
    cout << "After swapping the number:- " <<"A="<<a<<"  B="<< b;
    return (0);
}