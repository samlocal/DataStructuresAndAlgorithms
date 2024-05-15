#include<iostream>
using namespace std;


bool isSortedArray(int arr[] , int i , int n)
{
    //base case
    if(i==n-1) return true;

    if(arr[i] > arr[i+1]) return false;

    //recurssion

    return isSortedArray(arr , i+1 , n);

}

bool isSorted(int arr[] ,  int n)
{
    if(n==0 || n==1) return true;
    if(arr[n-1] < arr[n-2]) return false;

    return isSorted(arr , n-1); 
}
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++) cin>>arr[i];
     

     int startingIndex=0;
    if(isSortedArray(arr , startingIndex , n)) cout<<"Sorted ";
    else cout<<"Not sorted";
}