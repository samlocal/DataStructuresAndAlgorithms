#include <iostream>
using namespace std;

int partation(int arr[], int start, int end)
{
    int pivot = arr[start];

    int count = 0;

    // counting the elemnts less than pivot
    for (int i = start+1; i <= end; i++)
    {
        if (arr[i] <= pivot)
            count++;
    }

    // pivot index
    int pivotIndex = start + count;

    // swaping the pivot at right position
    swap(arr[start], arr[pivotIndex]);

    // maintaining the condition <a  a  >a
    int i = start;
    int j = end;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
            i++;
        while (arr[j] > pivot)
            j--;

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    return pivotIndex;
}
void quickSort(int arr[], int start, int end)
{
    if (start >= end)
        return;

    // partitioning
    int p = partation(arr, start, end);

    // Recursion call

    // left part
    quickSort(arr, start, p - 1);

    // right part
    quickSort(arr, p + 1, end);
}
int main()
{
    int n;
    cout << "Enter n :";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}