//Reversinga an array using recursion

#include<iostream>
using namespace std;
void reverseArray(int start , int end , int arr[])
{
    if(start>=end) return;
    
    swap(arr[start] , arr[end]);
    reverseArray(start+1 , end-1 , arr);
}
int main()
{
    int n;
    cout<<"Enetr n :";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++) cin>>arr[i];

    int start=0;
    int end=n-1;

    reverseArray(start , end , arr);

    for(int i=0;i<n;i++) cout<<arr[i]<<" ";


}