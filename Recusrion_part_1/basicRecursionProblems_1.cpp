//printint name for n times

#include<iostream>
using namespace std;
 void printName(int i , int  n)
 {
    if(i>n) return;
    cout<<"Sameer\n";
    i++;
    printName(i,n);
 }
int main()
{
    int n;
    cout<<"Enter n :";
    cin>>n;
    int i=1;

    printName(i,n); //1 is because we starts form 1
}