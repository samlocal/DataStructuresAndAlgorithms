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

// void toLowerCase(char ch[])
// {
//     for(int i=0;i<getLength(ch);i++)
//     {
//         if(ch[i]>='A' && ch[i]<='Z')
//         {
//             char temp=ch[i]-'A'+'a';
//             ch[i]=temp;
//         }
//     }
// }

char toLowerCase(char ch)
{
    if(ch>='a' && ch<='z') return ch;
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}
int main()
{
    char name[30];
    cout<<"Enter string : ";
    cin>>name;

    for(int i=0;i<getLength(name);i++)
    {
        char ch=toLowerCase(name[i]);
        name[i]=ch;
    }

    cout<<"Only lower case : "<<name;

    

    
}