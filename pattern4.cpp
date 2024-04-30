#include<iostream>
using namespace std;
int main()
{
    //pattern 4 for n=3
    /*
    3 2 1
    3 2 1
    3 2 1
    */


   //Approach 1
   
   int n;
   cout<<"Enter n:";
   cin>>n;

   int i=1;
   while(i<=n)
   {
    int j=1;
    while(j<=n)
    {
        cout<<n-j+1;
        j=j+1;
    }
    i=i+1;
    cout<<"\n";
   }
}