#include<iostream>
using namespace std;


bool binarySearch(int arr[] , int start , int end , int target)
{
    //base case
    if(start > end) return false;

    int mid=start+(end-start)/2;

    //element found
    if(arr[mid]==target) return true;

    //recurssion
    if(arr[mid] > target) return binarySearch(arr , start , end-1 , target);
    
    if(arr[mid] < target) return binarySearch(arr , start+1 ,end ,target);
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

    int start=0;
    int end=n-1;

    if(binarySearch(arr , start , end ,target)) cout<<target<<" is present .";
    else cout<<target <<" is not present ";
}