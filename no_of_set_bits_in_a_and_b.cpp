#include<iostream>
using namespace std;

int setBits(int n)
{
    int count=0;
    while(n!=0)
    {
        if(n&1) count++;
        n=n>>1;
    }
    return count;
}

int main()
{
    int a,b;
    cout<<"Enter a and b : ";
    cin>>a>>b;

    cout<<"Number of set bits in "<<a<<" and "<<b<<" is "<<setBits(a)+setBits(b);
}