#include<iostream>
using namespace std;
int main()
{
    //printing from 1 to n
    for(int i=1;i<=10;i++) cout<<i<<" ";
    cout<<"\n";

    //using break keyword
    for(int i=1;i<=10;i++)
    {
        if(i==5) break;
        cout<<i<<" ";
    }
    cout<<"\n";

    //priniting from 1 to n in differenrt way
    int i=1;
    for(;;)
    {
        if(i>10) break;
        cout<<i<<" ";
        i++;
    }
}