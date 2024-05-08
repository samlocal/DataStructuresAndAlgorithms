#include<iostream>
using namespace std;

int main()
{
    char name[20];

    cout<<"Enter your name : ";
    cin>>name;

    cout<<"Your name : ";
    cout<<name;


    //addding null character in the array
    char ch[6]={'s','a','m','e','e','r'};
    ch[3]='\0'; //null character

    cout<<"printing : "<<ch<<"\n";
}