#include<iostream>
using namespace std;

int main()
{
    //pattern 6 for n=3
    /*
    1
    2 1
    3 2 1
    4 3 2 1   
    */

   int n;
   cout<<"Enter n:";
   cin>>n;

   int row=1;
   while(row<=n)
   {
    int column=1;
    while(column<=row)
    {
        cout<<row-column+1;
        column=column+1;
    }
    row=row+1;
    cout<<"\n";
   }

   
}