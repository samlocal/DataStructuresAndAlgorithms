#include<iostream>
using namespace std;

int main()
{

    //Pattern for n=4
    /*
    * * * *
    * * * *
    * * * * 
    * * * * 
    * 
    */
   
    int n;
    cout<<"Enter n : "<<"\n";
    cin>>n;


    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<"*";
            j++;
        }
        i++;
        cout<<"\n";
    }
}