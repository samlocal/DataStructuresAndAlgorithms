#include <iostream>
#include <limits.h>
using namespace std;

int minimum(int arr[], int size)
{
    int mini = INT_MAX;
    for (int i = 0; i < size; i++) //simply mini=min(mini,arr[i]);
    {
        if (arr[i] < mini)
            mini = arr[i];
    }
    return mini;
}

int maximun(int arr[], int size)
{
    int maxi = INT_MIN;
    for (int i = 0; i < size; i++)   //simply, maxi=max(maxi,arr[i]);
    {
        if (arr[i] > maxi)
            maxi = arr[i];
    }
    return maxi;
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

    cout<<"Maximum in array "<<maximun(arr,size)<<"\n";
    cout<<"Minimum in array "<<minimum(arr,size);
}