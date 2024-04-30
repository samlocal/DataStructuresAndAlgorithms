#include<iostream>
using namespace std;

int main()
{
    //pattern
    /*
       1
      23
     456
    78910
    */

   int n;
   cout<<"Enter n:";
   cin>>n;

   int row=1;
   int value=1;
   while(row<=n)
   {
    //for spaces
    int spaces=n-row;
    while(spaces--)
    {
        cout<<" ";
    }

    //for numeric
    int numeric=row;
    while(numeric--)
    {
        cout<<value;
        value=value+1;
    }

    //for rows
    cout<<"\n";
    row=row+1;
   }
}