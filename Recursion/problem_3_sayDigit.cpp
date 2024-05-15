#include<iostream>
using namespace std;
void sayDigit(int n)
{
    
    if(n==0) return;

    sayDigit(n/10);

    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};

    int rem=n%10;
    cout<<arr[rem];
}
int main()
{
    int n;
    cin>>n;

    sayDigit(n);
}