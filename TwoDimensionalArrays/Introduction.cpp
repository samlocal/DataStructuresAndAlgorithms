#include<iostream>
using namespace std;

int main()
{

    //creating 2D array

    int arr[3][4];

    //Taking input -> row wise
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>arr[i][j];
        }
    }

    //printing ->row wise
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j];
        }
        cout<<"\n";
    }

    /*
    //printing -> column wise
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<"\n";
    }

    //taking input ->column wise
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[j][i];
        }
    }
    */


   //initialising 2D arrays
   int arr1[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
   int arr2[3][4]={{1,1,1,1} , {2,2,2,2} ,{3,3,3,3}};

   

    
}