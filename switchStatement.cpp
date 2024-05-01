#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter between 1 to 5 only : ";
    cin>>num;

    switch(num)
    {
        case 1 : cout<<"One\n";
                 break;
        case 2 : cout<<"Two\n";
                 break;
        case 3 : cout<<"Three\n";
                 break;
        case 4 : cout<<"Four\n";
                 break;
        case 5 : cout<<"Five\n";
                 break;
        default : cout<<"Enterf from 1 to 5\n";
    }


    //switch woitout break keyword

    /*

    switch(num)
    {
        case 1 : cout<<"One\n";
                 
        case 2 : cout<<"Two\n";
                 
        case 3 : cout<<"Three\n";
                 
        case 4 : cout<<"Four\n";
                 
        case 5 : cout<<"Five\n";
                 
        default : cout<<"Enterf from 1 to 5\n";
    }
    */


    
}