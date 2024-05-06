#include<iostream>
using namespace std;

int binarySearchSquareRoot(int n)
{
    int start=0;
    int end=n;
    int ans=0;

    while(start<=end)
    {
        int mid=start+(end-start)/2;

        if(mid*mid == n) return mid;
        else if(mid*mid > n) end = mid-1;
        else if(mid*mid < n) {
            ans=mid;
            start=mid+1;
        } 
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    cout<<"square root is "<<binarySearchSquareRoot(n);
}