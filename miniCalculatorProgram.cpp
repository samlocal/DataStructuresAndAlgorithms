#include<iostream>
using namespace std;
int main()
{

    int a,b;
    cout<<"Enetr a and b : \n";
    cin>>a>>b;
    char ch;
    cout<<"Enter + - * / % : ";
    cin>>ch;

    

    switch(ch)
    {
        case '+' : cout<<"Addition : "<<a+b<<"\n";
                   break;
        case '-' : cout<<"Subtraction : "<<a-b<<"\n";
                   break;
        case '*' : cout<<"Multiplication : "<<a*b<<"\n";
                   break;
        case '/' : cout<<"Division : "<<a/b<<"\n";
                   break;
        case '%' : cout<<"Modulo : "<<a%b<<"\n";
                   break;
    }
}