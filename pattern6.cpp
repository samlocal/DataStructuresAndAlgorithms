#include<iostream>
using namespace std;

int main()
{
    //pattern 6 for n=3
    /*
    *
    **
    ***
    ****
    */

   int n;
   cout<<"Enter n:";
   cin>>n;

   int i=1;
   while(i<=n)
   {
    int j=1;
    while(j<=i)
    {
        cout<<"*";
        j=j+1;
    }
    i=i+1;
    cout<<"\n";
   }
}