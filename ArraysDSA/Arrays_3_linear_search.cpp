#include<iostream>
using namespace std;


bool linearSearch(int arr[] , int size , int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key) return true;
    }
    return false;
}
int main()
{
    int size;
    cout<<"Enter size : ";
    cin>>size;

    int arr[size];
    for(int i=0;i<size;i++)
    {
        cout<<"Enetr "<<i<<" th element : ";
        cin>>arr[i];
    }

    int key;
    cout<<"Enter key : ";
    cin>>key;

    if(linearSearch(arr,size,key)) cout<<key<<" is present ";
    else cout<<key<<"is not present.";
}