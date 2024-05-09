#include<iostream>
using namespace std;
void rowWiseSum(int arr[][4] , int row,int col)
{
    for(int i=0;i<row;i++)
    {
        int sum=0;
        for(int j=0;j<col;j++)
        {
            sum=sum+arr[i][j];
        }
        cout<<"sum of "<<i+1<<" th row is "<<sum<<"\n";
    }
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

    cout<<"printing the array :\n";

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

    rowWiseSum(arr,3,4);
}