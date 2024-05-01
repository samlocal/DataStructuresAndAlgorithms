#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = n; i >= 1; i--)
    {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int nominator = factorial(n);
    int denominator = factorial(r) * factorial(n - r);
    int result = nominator / denominator;
    return result;
}

int main()
{
    int n,r;
    cout<<"Enter n : ";
    cin>>n;

    cout<<"Enter r : ";
    cin>>r;

    int ans=nCr(n,r);
    cout<<"nCr is : "<<ans;
}