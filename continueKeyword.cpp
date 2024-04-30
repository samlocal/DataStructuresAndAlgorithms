#include<iostream>
using namespace std;

int main(){
    for(int i=0;i<=10;i++)
    {
        cout<<"i ->"<<i<<" hi bhai...\n";
        if(i==5) continue;
        cout<<"i am the rest of the code.\n";
    }
}