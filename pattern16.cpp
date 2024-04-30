#include<iostream>
using namespace std;

int main()
{
    //pattern for n=4
    /*
    A
    B C
    D E F
    G H I J
    */

   int n;
   cout<<"Enter n:";
   cin>>n;

   int row=1;
   char value='A';
   while(row<=n)
   {
    int column=1;
    while(column<=row)
    {
        cout<<value;
        value=value+1;
        column=column+1;
    }
    row=row+1;
    cout<<"\n";
   }


}