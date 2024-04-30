#include<iostream>
using namespace std;

int main()
{
    //pattern 6 for n=3
    /*
    A A A
    B B B
    C C C
    */

   int n;
   cout<<"Enter n:";
   cin>>n;

   int row=1;
   while(row<=n)
   {
    int column=1;
    while(column<=n)
    {
        char ch='A'+row-1;
        cout<<ch;
        column=column+1;
    }
    row=row+1;
    cout<<"\n";
   }

   
}