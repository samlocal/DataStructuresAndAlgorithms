#include<iostream>
using namespace std;
bool linearSearch2D(int arr[][4], int row,int col, int target)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]==target) return true;
        }
    }
    return false;
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

    cout<<"Enter tagret";
    int target;
    cin>>target;

    if(linearSearch2D(arr,3,4,target)) cout<<"present";
    else cout<<"absent";



}