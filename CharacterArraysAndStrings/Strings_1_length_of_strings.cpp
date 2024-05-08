#include<iostream>
using namespace std;

int getLength(char ch[] )
{
    int length=0;
    int i=0;
    while(ch[i] != '\0')
    {
        length++;
        i++;
    }

    return length;
}
int main()
{
    char name[30];
    cout<<"Enter string : ";
    cin>>name;

    cout<<"Length of "<<name<<" is "<<getLength(name);
}