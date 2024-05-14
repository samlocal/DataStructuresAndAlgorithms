//Parameterized recursion

#include<iostream>
using namespace std;

void sumFrom1toN(int i, int sum)
{
    if(i<1)
    {
        cout<<"Sum is "<<sum;
        return;
    }


    sumFrom1toN(i-1,sum+i);

}

int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;


    sumFrom1toN(n , 0);

    
}