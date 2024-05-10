#include<iostream>
using namespace std;

int main()
{
    int i=5;    //normal variable
    int &j=i;   //refeerence variable

    cout<<" i value -> "<<i<<"\n";
    cout<<" j value -> "<<j<<"\n";

    //updating
    i++;
    j++;

    cout<<" i value -> "<<i<<"\n";
    cout<<" j value -> "<<j<<"\n";



}