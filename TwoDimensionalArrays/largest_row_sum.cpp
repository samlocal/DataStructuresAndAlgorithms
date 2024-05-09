#include<iostream>
using namespace std;
int largestRowWiseSum(int arr[][4] , int row,int col)
{
    int maxi=0;
    for(int i=0;i<row;i++)
    {
        int sum=0;
        for(int j=0;j<col;j++)
        {
            sum=sum+arr[i][j];
        }
        if(sum>maxi)
        {
            maxi=sum;
        }
    }
    return maxi;
}
int main()
{
    
    int arr[3][4];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

    int ans=largestRowWiseSum(arr,3,4);
    cout<<"largest sum is "<<ans;
}