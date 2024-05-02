#include<iostream>
using namespace std;

void update(int arr[] , int size)
{
    arr[0]=1000;
    cout<<"Inside function : \n";
    for(int i=0;i<size;i++) cout<<arr[i]<<" ";
}

int main()
{
    int arr[10]={2,3,4,5,6,5,4,3,9,10};
    
    //calling function
    update(arr,10);   //address of the array is passing as the agrument


     cout<<"Inside main function : \n";
    for(int i=0;i<10;i++) cout<<arr[i]<<" ";


}