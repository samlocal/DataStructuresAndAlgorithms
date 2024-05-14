//print linraely from 1 ton n
#include<iostream>
using namespace std;


void printLinearly(int i,int n)
{
    if(i>n) return;
    cout<<i<<" ";
    printLinearly(i+1,n);
}
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int i=1;
    printLinearly(i,n);
}