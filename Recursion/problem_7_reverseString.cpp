#include<iostream>
using namespace std;

void reverseString(string &str , int i)
{
    if(i>=str.length()/2) return;

    //swaping or processing
    swap(str[i] , str[str.length()-i-1]);

    //recurssion
    reverseString(str , i+1);
    
}

void reverseString(string &str , int start , int end )
{
    if(start > end) return;

    //swap
    swap(str[start] , str[end]);

    reverseString(str , start+1 , end-1);
}
int main()
{
    string str;
    cout<<"Enter string : ";
    cin>>str;

    reverseString(str , 0,str.length()-1);

    cout<<"After reversing : "<<str;
}