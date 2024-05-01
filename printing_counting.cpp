#include<iostream>
using namespace std;

void printing(int n)
{
    for(int i=1;i<=n;i++) cout<<i<<" ";
}

int main()
{
    int n;
    cout<<"Enetr n : ";
     cin>>n;
     printing(n);
}