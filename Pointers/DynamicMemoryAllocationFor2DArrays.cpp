#include<iostream>
using namespace std;

int main()
{
    int rows,col;
    cout<<"Enter rows and columns : ";
    cin>>rows>>col;


    //creating 2D Array
    int **arr = new int*[rows]; //for storing all the addresses of rows

    for(int i=0;i<rows;i++)
    {
        arr[i] = new int[col];
    }

    //Taking Input
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }

    //printing output
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    

    //Deleting rows or freeing memory
    for(int i=0;i<rows;i++)
    {
        delete []arr[i];
    }

    //deleting the row that stores the addresses of each row
    delete []arr;



}