#include<iostream>
using namespace std;

int arraySum(int arr[],int size)
{
    int sum=0;

    for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }

    return sum;
}

int main()
{
    int size;
    cout<<"Enter size : ";
    cin>>size;

    int arr[size];
    for(int i=0;i<size;i++) {
        cout<<"Enter "<<i<<"th element ";
        cin>>arr[i];
    }

    cout<<"Array sum is : "<<arraySum(arr,size);
}