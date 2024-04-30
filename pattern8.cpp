#include<iostream>
using namespace std;

int main()
{
    //pattern 6 for n=3
    /*
    1
    2 3
     4 5 6
    7 8 9 10
    */

   int n;
   cout<<"Enter n:";
   cin>>n;

   int row=1;
   int count=1;
   while(row<=n)
   {
    int column=1;
    while(column<=row)
    {
        cout<<count;
        count=count+1;
        column=column+1;
    }
    row=row+1;
    cout<<"\n";
   }

   
}