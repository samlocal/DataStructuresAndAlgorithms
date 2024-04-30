#include<iostream>
using namespace std;

int main()
{
    //pattern for n=3
    /*
    1 2 3
    4 5 6
    7 8 9
    */

   int n;
   cout<<"Enter n:";
   cin>>n;

   int i=1;
   int count=1;
   while(i<=n)
   {
    int j=1;
    while(j<=n){
        cout<<count;
        count++;
        j=j+1;
    }
    i=i+1;
    cout<<"\n";
   }
}