#include<iostream>
using namespace std;

bool isEven()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;

    if(n&1) return false;

    return true;

}

int main()
{
    if(isEven()) cout<<"Even\n";
    else cout<<"Odd\n";
}