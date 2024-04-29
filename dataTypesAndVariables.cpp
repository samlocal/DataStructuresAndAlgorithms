#include<iostream>
using namespace std;

int main()
{
    //integer
    int a = 23;
    cout<<"Integer "<<a<<"\n";
    int sizeInt = sizeof(a);
    cout<<"Size of Int "<<sizeInt<<"\n";

    //float
    float b =23.282328;
    cout<<"float "<<b<<"\n";
    int sizeFloat = sizeof(b);
    cout<<"Size of Float "<<sizeFloat<<"\n";

    //double
    double c= 23.232823282328;
    cout<<"Double "<<c<<"\n";
    int sizeDouble = sizeof(c);
    cout<<"Size of Double "<<sizeDouble<<"\n";

    //character
    char d ='s';
    cout<<"Character "<<d<<"\n";
    int sizeCharacter = sizeof(d);
    cout<<"Size of Character "<<sizeCharacter<<"\n";

    //boolean
    bool e = true;
    cout<<"Boolean "<<e<<"\n";
    int sizeBoolean = sizeof(e);
    cout<<"Size of Boolean "<<sizeBoolean<<"\n";
}