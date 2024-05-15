#include<iostream>
using namespace std;

bool isPalindrome(string str , int i)
{
    if(i>=str.length()/2) return true;

    if(str[i] != str[str.length()-i-1]) return false;

    isPalindrome(str , i+1);
}
int main()
{
    string str;
    cout<<"Enter string : ";
    cin>>str;

    if(isPalindrome(str , 0)) cout<<str<<" is palindrome.";
    else cout<<str<<" is not palindrome";
}