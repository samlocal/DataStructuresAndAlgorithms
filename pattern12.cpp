#include<iostream>
using namespace std;

int main()
{
    //pattern 6 for n=3
    /*
    A B C
    A B C
    A B C
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
        char ch='A'+column-1;
        cout<<ch;
        column=column+1;
    }
    row=row+1;
    cout<<"\n";
   }

   

   
}