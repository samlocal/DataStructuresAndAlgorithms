#include<iostream>
using namespace std;

int main()
{
    //pattern 
    /*
    1 1 1 1
      2 2 2
        3 3
          4
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

    //numeric
    int numeric=n-row+1;
    while(numeric--)
    {
        cout<<row;
    }

    //for rows
    row=row+1;
    cout<<"\n";
   }
}