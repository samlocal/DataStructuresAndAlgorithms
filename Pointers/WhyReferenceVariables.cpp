#include<iostream>
using namespace std;
 void update(int &n)
 {
    n++;
 }
int main()
{
    int n=99;
    cout<<n<<"\n";
    update(n);
    cout<<n<<"\n";
}