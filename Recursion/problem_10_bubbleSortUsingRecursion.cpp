#include <iostream>
using namespace std;

void bubbleSort(int arr[] , int size)
{
    if(size==0 || size==1) return;

    //solving one case
    for(int i=0;i<size-1;i++)
    {
        if(arr[i]>arr[i+1]) swap(arr[i] , arr[i+1]);
    }

    bubbleSort(arr,size-1);
}

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    bubbleSort(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}