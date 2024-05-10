#include <iostream>
using namespace std;

int main()
{

    int arr[10] = {100, 208, 39, 4, 5, 6, 7, 8, 9, 10};

    // Array name stores the memory address of arrays first element

    int *ptr_arr = arr;
    cout << "Address of first memory location is " << ptr_arr << "\n";
    cout << "Value of first memory location is " << *ptr_arr << "\n";
    cout << "*arr -> " << *arr << "\n";
    cout << "*ptr_arr -> " << *ptr_arr << "\n";
    cout << "*arr+1 -> " << *arr + 1 << "\n";
    cout << "*(arr+1) -> " << *(arr + 1) << "\n"; // prints the 2nd element
    cout<<"(*arr)+1 -> "<<(*arr)+1<<"\n";
    cout<<"arr[index] -> "<<arr[8]<<"\n";
    cout<<"index[arr] -> "<<8[arr]<<"\n";  //tricky one

 



    int *ptr_arr_1 = &arr[0];
    cout << "Address of first memory location is " << ptr_arr_1 << "\n";
    cout << "Value of first memory location is " << *ptr_arr_1 << "\n";

    // changing first element
    *ptr_arr_1 = *ptr_arr_1 + 11;
    cout << "arr[0] is -> " << arr[0] << "\n";

    // printing 3rd element using pointer
    int *new_ptr = ptr_arr_1;
    new_ptr = new_ptr + 2;
    cout << "arr[2] -> " << *new_ptr << "\n";
    cout << "Address of arr[2] -> " << new_ptr << "\n";



    //Accessing array elements using pointers
    int array[10]={1,11,111,22,2,33,4,56,9,90};

    int *ptr_array=&array[0];

    for(int i=0;i<10;i++)
    {
        cout<<*(ptr_array+i)<<" ";
    }
}