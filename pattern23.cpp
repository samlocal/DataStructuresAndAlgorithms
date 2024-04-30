#include<iostream>
using namespace std;

int main()
{
    //pattern
    /*
       1
      22
     333
    4444
    */

   int n;
   cout<<"Enter n:";
   cin>>n;

   int row=1;
   while(row<=n)
   {

    //spaces
    int spaces=n-row;
    while(spaces--)
    {
        cout<<" ";
    }

    //numeric
    int numeric=row;
    while(numeric--)
    {
        cout<<row;
    }

    //for rows
    cout<<"\n";
    row=row+1;
   }
}