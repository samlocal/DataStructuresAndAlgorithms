#include<iostream>
using namespace std;
int main()
{
    int x=7;

    cout<<"pre increment : "<<(++x)<<"\n";
    cout<<"pre decrement : "<<(--x)<<"\n";
    cout<<"post increment : "<<(x++)<<"\n";
    cout<<"post decrement : "<<(x--)<<"\n";

    cout<<x;
}