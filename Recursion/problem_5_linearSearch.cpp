#include<iostream>
using namespace std;

bool linearSearch(int arr[] , int size , int target)
{
    //base case
    if(size==0) return false;

    //checking
    if(arr[0]==target) return true;

    //recursion
    return linearSearch(arr+1 , size-1 , target);
}


int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++) cin>>arr[i];

    int target;
    cout<<"Enter Target : ";
    cin>>target;

    if(linearSearch(arr , n ,target)) cout<<target<<" is present .";
    else cout<<target <<" is not present ";
}