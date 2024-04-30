 #include<iostream>
 using namespace std;
 int main()
 {
    //pattern 
    /*
       *
      **
     ***
    ****
    */

   int n;
   cout<<"Enter n :";
   cin>>n;

   int row=1;
   while(row<=n)
   {
    
    //for spaces
    int spaces=n-row;
    while(spaces)
    {
        cout<<" ";
        spaces=spaces-1;
    }

    //for stars
    int stars=row;
    while(stars)
    {
        cout<<"*";
        stars=stars-1;
    }

    //for rows
    cout<<"\n";
    row=row+1;
   }

 }