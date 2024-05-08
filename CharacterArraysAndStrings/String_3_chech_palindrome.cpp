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
bool isPalindrome(char ch[])
{
    int start=0;
    int end=getLength(ch)-1;

    while(start<=end)
    {
        if(ch[start] != ch[end])
        {
            return 0;
        }
        start++;
        end--;
    }

    return 1;
}

int main()
{
    char name[30];
    cout<<"Enter string : ";
    cin>>name;

    if(isPalindrome(name)) cout<<name<<" is paindrome.";
    else cout<<name<<" is not palindrome.";

    
}