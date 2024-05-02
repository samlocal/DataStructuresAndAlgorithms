#include <iostream>
using namespace std;

void printingArray(int arr[], int size)
{
    cout << "Printing Array: \n";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << "\n";
}


void printingCharArray(char arr[] , int size)
{
    cout<<"\n printing character array \n";
    for(int i=0;i<size;i++) cout<<arr[i]<<" ";
    cout<<"\n";
}

int main()
{
    int size;
    cout << "Enter size :";
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    printingArray(arr, size);

    // size of array
    int arr1[5] = {2, 3, 4, 4, 2};
    int arr2[5] = {9, 8}; //actual size= 2 but output gives 5

    cout << "size of arr1 : " << sizeof(arr1) / sizeof(int) << "\n";

    cout << "size of arr2 : " << sizeof(arr2) / sizeof(int) << "\n";


    //character array
    char charArray[11]={'R','A','Y','A','L','A','S','E','E','M','A'};
    //printing
    printingCharArray(charArray,12);
}