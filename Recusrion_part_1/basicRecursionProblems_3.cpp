//Parameterized recursion

#include<iostream>
using namespace std;

void sumFrom1toN(int i, int n, int &sum)
{
    if(i>n)
    {
        return;
    }

    sum=sum+i;

    sumFrom1toN(i+1,n,sum);

}

int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int i=1;

    int sum=0;

    sumFrom1toN(i , n , sum);

    cout<<"Sum from 1 to "<<n<<" is "<<sum<<"\n";
}