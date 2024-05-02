#include<iostream>
using namespace std;

void reverseArray(int arr[] , int size)
{
    int start=0;
    int end=size-1;

    while(start<=end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;

        start++;
        end--;
    }
}
int main()
{
     int size;
    cout<<"Enter size : ";
    cin>>size;

    int arr[size];
    for(int i=0;i<size;i++)
    {
        cout<<"Enetr "<<i<<" th element : ";
        cin>>arr[i];
    }

    cout<<"Before reverse : \n";
    for(int i=0;i<size;i++) cout<<arr[i]<<" ";
    cout<<"\n";

    reverseArray(arr,size);

    cout<<"After reverse : \n";
    for(int i=0;i<size;i++) cout<<arr[i]<<" ";
    cout<<"\n";

}