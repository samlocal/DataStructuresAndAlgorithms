#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    //Printing from 1 to n
    int i=1;
    while(i<=n)
    {
        cout<<i<<" ";
        i=i+1;
    }
    cout<<"\n";


    //Sum from 1 to n
    int i1=1;
    int sum=0;
    while(i1<=n)
    {
        sum=sum+i1;
        i1=i1+1;
    }
    cout<<"sum form 1 " <<" to "<<n<<" is "<<sum<<"\n";


    //sum of even numbers from 1 to n
    int i2=1;
    int evenSum=0;
    while(i2<=n)
    {
        if(i2%2==0)
        {
            evenSum=evenSum+i2;
        }
        i2=i2+1;
    }
    cout<<"sum of even munbers form 1 to "<<n<<" is "<<evenSum<<"\n";


    //sum of all odd numbers form 1 to n
    int i3=1;
    int oddSum=0;
    while(i3<=n)
    {
        oddSum=oddSum+i3;
        i3=i3+2;
    }
    cout<<"sum of odd munbers form 1 to "<<n<<" is "<<oddSum<<"\n";


    //Finding prime for a number
    int i4=1;
    while(i4<=n)
    {
        if(n%i4==0) cout<<n<<" is divisible by "<<i4<<" so not prime\n";
        else cout<<n<<" is nott divisible by "<<i4<<" so  prime\n";
        i4=i4+1;
    }

    //Finding prime or not
    int i5=2;
    while(i5<n)
    {
        if(n%i5==0) cout<<"Not Prime\n";

        i5=i5+1;

        if(i5==n) cout<<"Prime";
        
    }


    //Finding oddSum form 1 to n
    int oddSum1=0;
    while(n>=1)
    {
        if(n%2!=0) oddSum1=oddSum1+n;
        n=n-1;
    }
    cout<<"Odd Sum "<<oddSum1;
} 