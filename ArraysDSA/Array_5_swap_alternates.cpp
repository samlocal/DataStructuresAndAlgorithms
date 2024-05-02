#include <iostream>
using namespace std;

void swapAlternates(int arr[], int size)
{
    for (int i = 0; i < size; i = i + 2)
    {
        if (i + 1 < size)
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
}

// alternate method
/*
void swapAlternates(int arr[], int size)
{
    for (int i = 0; i < size; i=i+2)
    {
        if (i == size - 1)   //we can use this also  if(i+1>size-1) break;
            break;

        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}
*/

int main()
{
    int size;
    cout << "Enter size : ";
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enetr " << i << " th element : ";
        cin >> arr[i];
    }

    cout << "Before alternate swapping : \n";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << "\n";

    swapAlternates(arr, size);

    cout << "After alternate swapping : \n";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << "\n";
}