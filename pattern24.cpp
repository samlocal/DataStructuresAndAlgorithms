#include<iostream>
using namespace std;

int main()
{
    //pattern
    /*
    1 2 3 4
      2 3 4
        3 4
          4
    */

   int n;
   cout<<"Enter n";
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

    //numeric
    int numeric=n-row+1;
    int value=row;
    while(numeric--)
    {
        cout<<value;
        value=value+1;
    }

    //for row
    row=row+1;
    cout<<"\n";
   }
}