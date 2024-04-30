#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;

    int row=1;
    while(row<=n)
    {

        //pattern 1
        int value1=1;
        while(value1<=(n-row+1))
        {
            cout<<value1;
            value1=value1+1;
        }

        //pattern 2
        int stars1=row-1;
        while(stars1--)
        {
            cout<<"*";
        }

        //pattern 3
        int stars2=row-1;
        while(stars2--)
        {
            cout<<"*";
        }


        /*
        instead of pattern 2 and pattern 3 u can use thus

        int stars=2*(row-1);
        while(stars)
        {
            cout<<"*";
            stars--;
        }*/

        //pattern 4
        int value2=n-row+1;
        while(value2)
        {
            cout<<value2;
            value2=value2-1;
        }

        //for rows
        row =row+1;
        cout<<"\n";
    }
}