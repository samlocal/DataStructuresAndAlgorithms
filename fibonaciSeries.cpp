#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int a=0,b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=3;i<=n;i++)
    {
        int sum=a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;
    }

}