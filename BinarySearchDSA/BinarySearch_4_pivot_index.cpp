#include<iostream>
using namespace std;

int pivotIndex(int arr[] , int n)
{
    int start=0;
    int end=n-1;

    while(start<end)
    {
        int mid = start+(end-start)/2;

        if(arr[mid]>=arr[0]) start=mid+1;
        else end=mid;
    }
    return start;
}
int main()
{
    int size;
    cout<<"Enter size : ";
    cin>>size;

    int arr[size];

    for(int i=0;i<size;i++)
    {
        cout<<"Enter "<<i<<" th element ";
        cin>>arr[i];
    }
    
    cout<<"Pivot "<<pivotIndex(arr,size);

}