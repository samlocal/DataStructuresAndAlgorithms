#include<bits/stdc++.h>
using namespace std;
int fib(int n,vector<int>&dpArray)
{
        if(n==0 || n==1) return n;

        if(dpArray[n]!=-1) return dpArray[n]; //checking in dp array

        dpArray[n]=fib(n-1,dpArray)+fib(n-2,dpArray); //storing the smaller solution

        return dpArray[n]; //returning the ans

        
}
int main()
{
        int n;
        cin>>n;

        vector<int>dpArray(n+1); //creating dp array
        for(int i=0;i<dpArray.size();i++) dpArray[i]=-1;

        int ans=fib(n,dpArray);

        cout<<ans;
}