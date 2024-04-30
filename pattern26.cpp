 #include<iostream>
 using namespace std;
 int main()
 {
    //pattern
    /*
       1
      121
     12321
    1234321
    */

   int n;
   cout<<"Enetr n: ";
   cin>>n;

   int row=1;
   while(row<=n)
   {

    //spaces  sub pattern 1
    int spaecs=n-row;
    while(spaecs--)
    {
        cout<<" ";
    }

    //sub pattern 2
    
    int val1=1;
    while(val1<=row)
    {
        cout<<val1;
        val1=val1+1;
    }

    //sub pattern 3
    
    int val2=row-1;
    while(val2)
    {
        cout<<val2;
        val2=val2-1;
    }

    //for rows
    cout<<"\n";
    row=row+1;
   }
 }