#include<iostream>
using namespace std;

int main()
{
    int amount;
    cout<<"Enter Amount : ";
    cin>>amount;

    int hundred=amount/100;
    cout<<"100 - >"<<hundred<<"\n";
    amount=amount-(100*hundred);

    int fifty=amount/50;
    cout<<"50 - >"<<fifty<<"\n";
    amount=amount-(50*fifty);

    int twenty=amount/20;
    cout<<"20 - >"<<twenty<<"\n";
    amount=amount-(20*twenty);

    cout<<"1 - >"<<amount<<"\n";

    //do using switch stateemtnt homework

}