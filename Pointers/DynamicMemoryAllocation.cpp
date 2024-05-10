#include <iostream>
using namespace std;
int getSum(int *arr , int n)
{
    int sum=0;

    for(int i=0;i<n;i++)
    {
        sum=sum+*(arr+i);
    }
    return sum;
}
int main()
{
    // dynamically creating integer
    int *num = new int; // returns an address from heap memory to stack memory
    *num = 99;          // assigning value to num
    cout << "Integer -> " << *num << "\n";

    // dynamically creating character
    char *ch = new char;
    *ch = 'z';
    cout << "character -> " << *ch << "\n";

    // Dynamically creating Arays
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    int *arr = new int[n];

    // Taking input in dynamic array
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        *(arr + i) = ele;
    }

    // outputing elements  in dynamic array
    for (int i = 0; i < n; i++)
    {

        cout << *(arr + i) << " ";
    }

    //sum of all elements in a dynamic array
    cout<<"Sum is -> "<<getSum(arr,n);
}