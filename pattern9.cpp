#include<iostream>
using namespace std;

int main()
{
    //pattern 6 for n=3
    /*
    1 
    2 3
    3 4 5
    4 5 6 7
    */

   int n;
   cout<<"Enter n:";
   cin>>n;

   //Approach 1

   int row=1;
   while(row<=n)
   {
    int column=1;
    while(column<=row)
    {
        cout<<row+column-1;
        column=column+1;
    }
    row=row+1;
    cout<<"\n";
   }



//Approach 2

/*
int row=1;
while(row<=n)
{
    int column=1;
    int print=row;
    while(column<=row)
    {
        cout<<print;
        print=print+1;
        column=column+1;
    }
    row=row+1;
    cout<<"\n";
}
*/

}