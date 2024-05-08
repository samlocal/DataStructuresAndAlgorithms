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

void reverseString(char ch[])
{
    int start=0;
    int end=getLength(ch)-1;

    while(start<=end)
    {
        swap(ch[start] , ch[end]);
        start++;
        end--;
    }
}

int main()
{
    char name[30];
    cout<<"Enter string : ";
    cin>>name;

    reverseString(name);
    cout<<"Reverse is "<<name;
}