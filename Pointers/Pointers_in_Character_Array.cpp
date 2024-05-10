#include<iostream>
using namespace std;

int main()
{
    int arr[3]={1,2,3};
    char ch[7]="sameer";

    cout<<"Printing integer array name -> "<<arr<<"\n"; //prints array[0] address

    cout<<"Printing character array name -> "<<ch<<"\n";  //prints entide char array



    char *ptr_char=&ch[0];

    cout<<"printing pointer -> "<<ptr_char<<"\n";


    char temp='i';
    char *ptr = &temp;

    cout<<ptr;




}