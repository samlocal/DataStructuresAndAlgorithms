#include <iostream>
using namespace std;
void merge(int arr[], int start, int end)
{
    int mid = start + (end - start) / 2;

    int len1 = mid - start + 1;
    int len2 = end - mid;

    // creating the arrays
    int *first = new int[len1];
    int *second = new int[len2];

    int mainArrayIndex = start;
    // cpoying the arr values
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex];
        mainArrayIndex++;
    }

    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex];
        mainArrayIndex++;
    }

    // merging
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = start;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrayIndex] = first[index1];
            mainArrayIndex++;
            index1++;
        }
        else
        {
            arr[mainArrayIndex] = second[index2];
            mainArrayIndex++;
            index2++;
        }
    }

    while (index1 < len1)
    {
        arr[mainArrayIndex] = first[index1];
        mainArrayIndex++;
        index1++;
    }

    while (index2 < len2)
    {
        arr[mainArrayIndex] = second[index2];
        mainArrayIndex++;
        index2++;
    }

    delete[] first;
    delete[] second;
}

void mergeSort(int arr[], int start, int end)
{
    if (start >= end)
        return;

    int mid = start + (end - start) / 2;

    // sorting the left part
    mergeSort(arr, start, mid);

    // sorting the right part
    mergeSort(arr, mid + 1, end);

    // merging the left and right part
    merge(arr, start, end);
}
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}