#include <iostream>
using namespace std;

int main()
{
    int num = 23;

    cout << "Printing the value of num " << num << "\n";

    // Address of operator - &

    cout << "Printing the Address of num " << &num << "\n";

    // pointer

    int *ptr = &num;

    cout << "Printing Value using *p " << *ptr << "\n";

    cout << "Printing using without * in a pointer " << ptr << "\n";

    // pointers with another datatype (double data type)

    double x = 23.28;
    double *ptr_double = &x;

    cout << "Value -> " << x << "\n";
    cout << "Address -> " << &x << "\n";
    cout << "Pointer Value -> " << ptr_double << "\n";
    cout << "Value using pointer -> " << *ptr_double << "\n";

    // Pointers size

    cout << "Int pointer size : " << sizeof(ptr) << " \n";
    cout << "Double pointer size : " << sizeof(ptr_double) << "\n";

    // pointer pointing to garbage address

    int *ptr_garbage;

    cout << "Value at Garbage : " << *ptr_garbage << "\n";
    cout << "Address at Garbage : " << ptr_garbage << "\n";

    // pointers pointing to 0
    int a = 99;
    int *ptr_a = 0;
    ptr_a = &a; // important
    cout << "Value " << a << "\n";
    cout << "Address " << ptr_a << "\n";
    cout << "Value " << *ptr_a << "\n";

    // Incrementing the value using  pointers

    int val = 123;
    int *ptr_val = &val;

    val = val + 1; // using name 123=123+1

    *ptr_val = *ptr_val + 1; // using pointer 125

    cout << "Value " << val << "\n";

    *ptr_val = *ptr_val + 100;

    cout << "Value " << val << "\n";

    // Copying a pointer

    int z = 28;

    int *ptr_old = &z;
    int *ptr_new = ptr_old;

    cout << "Copying a pointer " << "\n";
    cout << *ptr_old << " - " << *ptr_new << "\n";
    cout << ptr_old << " - " << ptr_new << "\n";

    // Pointer Arithamitic

    int c = 11;

    int *ptr_c = &c;

    ptr_c = ptr_c + 1;

    cout << "ptr = ptr+1 value -> " << *ptr_c << "\n";

    // with arrays

    int arr[2] = {9, 99};
    int *ptr_arr = &arr[0];

    ptr_arr = ptr_arr + 1;

    cout << "ptr = ptr+1 value -> " << *ptr_arr << "\n"; // points to the element at index 1
}