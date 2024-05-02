#include <iostream>
using namespace std;
int main()
{
    // Declaring the arrays
    int arr1[10]; // contains garbage value

    // Declaring and initializing array
    int arr2[5] = {3, 4, 22, 23, 1};

    // Accessing
    cout << "1st element " << arr2[0] << "\n";
    cout << "3rd element " << arr2[2] << "\n";

    int arr3[15] = {12, 23}; // remaining contains zero
    // accessing using loop
    int i = 0;
    while (i < 15)
    {
        cout << i << "th element is " << arr3[i] << "\n";
        i++;
    }


    //initialing array with the specified element
    int arr4[20];
    for(int i=0;i<20;i++) arr4[i]=28;

    //prinitng
    for(int i=0;i<20;i++) cout<<arr4[i]<<" ";
    cout<<"\n";


    //Different type of arrays

    //character array
    char char_array[6]={'s','a','m','e','e','r'};
    for(int i=0;i<6;i++) cout<<char_array[i]<<" ";
    cout<<"\n";

    //double or float array
    double double_array[5]={2.2,3.3,4.4,9.9,0.9};
    for(int i=0;i<5;i++) cout<<double_array[i]<<" ";




}