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

    //spaces
    int spaces=row-1;
    while(spaces--)
    {
        cout<<" ";
    }

    //stars
    int stars=n-row+1;
    while(stars--)
    {
        cout<<"*";
    }

    //for rows
    row=row+1;
    cout<<"\n";
   }
}