#include<iostream>
using namespace std;

int power(int a, int b)
{
    if(b==1) return a;  // or if(b==0) return 1;

    return a*power(a,b-1);
}
int main()
{
    int a,b;
    cout<<"Enter a and b : ";
    cin>>a>>b;

    cout<<"power of "<<a<<" and "<<b<<" is "<<power(a,b);
}