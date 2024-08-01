#include<bits/stdc++.h>
using namespace std;
int fib(int n,int dpArray[])
{
        if(n==0) return dpArray[0];
        if(n==1) return dpArray[1];

        for(int i=2;i<=n;i++)
        {
                dpArray[i]=dpArray[i-1]+dpArray[i-2];
        }

        return dpArray[n];
}
int main()
{
        int n;
        cin>>n;

        int dpArray[n+1];
        dpArray[0]=0;
        dpArray[1]=1;

        cout<<fib(n,dpArray);
}