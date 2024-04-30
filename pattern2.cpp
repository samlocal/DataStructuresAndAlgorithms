#include<iostream>
using namespace std;

int main()
{
    //pattern for n=3
    /*
    1 1 1
    2 2 2 
     3 3 3
    */

   int n;
   cout<<"Enter n: ";
   cin>>n;

   int i=1;
   while(i<=n)
   {
    int j=1;
    while(j<=n)
    {
        cout<<i;
        j=j+1;
    }
    i=i+1;
    cout<<"\n";
   }

}