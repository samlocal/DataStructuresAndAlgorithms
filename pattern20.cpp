#include<iostream>
using namespace std;
int main()
{
    //pattern 
    /*
    ****
    ***
    **
    *
    */

   int n;
   cout<<"Enter n:";
   cin>>n;

   int row=1;
   while(row<=n)
   {
    int stars=n-row+1;
    while(stars--)
    {
        cout<<"*";
    }
    row=row+1;
    cout<<"\n";
   }
}