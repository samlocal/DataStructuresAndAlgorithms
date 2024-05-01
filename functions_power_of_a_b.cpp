#include<iostream>
using namespace std;

int power(int n1 , int n2)
{
    int res=1;
    for(int i=1;i<=n2;i++)
    {
        res=res*n1;
    }
    return res;
}
int main()
{
    int a;
    cout<<"Enter a :\n";
    cin>>a;

    int b;
    cout<<"Enter b :\n";
    cin>>b;

    int ans=power(a,b);
    cout<<"power of "<<a <<" and "<<b<<" is "<<ans;
}