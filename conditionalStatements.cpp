#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n : "<<"\n";
    cin>>n;

    //if ststement
    if(n>0){
        cout<<n<<" is positive\n";
    }

    //if else statement
    if(n>0){
        cout<<n<<" is positive\n";
    }
    else{
        cout<<n<<" is negative\n";
    }

    //else if statament
    if(n>0){
        cout<<n<<" is postive\n";
    }
    else if(n<0){
        cout<<n<<" is negative\n";
    }
    else{
        cout<<n<<" is zero\n";
    }



    //Conditional Statement Practise Qestion
    //Input is a Character
    //Output is UpperCase or LowerCase or Numeric

    char ch;
    cout<<"Enter a characyter: ";
    cin>>ch;

    if(ch>='a' && ch<='z') cout<<ch<<" is LowerCase\n";
    else if(ch>='A' && ch<='Z') cout<<ch<<"is UpperCase\n";
    else cout<<ch<<" is Numeric\n";



}