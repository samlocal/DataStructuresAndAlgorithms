#include<iostream>
using namespace std;

int main()
{
    //pattern 6 for n=3
    /*
    1
    2 2
    3 3 3 
    4 4 4 4   
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
        cout<<row;
        column=column+1;
    }
    row=row+1;
    cout<<"\n";
   }
}