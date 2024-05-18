#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,s,c;
    cout<< "Enter any number:- ";
    cin>>n;
    s=sqrt(n);
    c=cbrt(n);
    cout<< "Squre root of "<<n<<" is "<<s<<"\n";
    cout<< "cube root of "<<n<<" is "<<c;
    return(0);
}