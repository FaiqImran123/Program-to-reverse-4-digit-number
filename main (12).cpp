/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
int n,r,a,b,c,d,e;
cout<<"Enter 4-Digit number: ";
cin>>n;
r =n/1000;
a =n%1000;
b=a/100;
c=a%100;
d=c/10;
e=c%10;
cout<<"Reverse number is: "<<e<<d<<b<<r;
}
