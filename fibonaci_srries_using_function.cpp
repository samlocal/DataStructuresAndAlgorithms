#include<iostream>
using namespace std;

int fibonacciTerm(int n)
{
    int a=0, b=1;
    if(n==1) return a;
    if(n==2) return b;

   int sum=0;
    for(int i=3;i<=n;i++)
    {
         sum=a+b;
        a=b;
        b=sum;
    }
    return sum;
}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    cout<<n<<"th fibonci term is "<<fibonacciTerm(n);
}