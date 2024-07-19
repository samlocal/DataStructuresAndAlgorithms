//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        priority_queue<long long,vector<long long>,greater<long long>> min_heap;
        
        for(long long i=0;i<n;i++)
        {
            min_heap.push(arr[i]);
        }
        
        long long ans=0;
        while(min_heap.size()>1)
        {
            long long a=min_heap.top();
            min_heap.pop();
            long long b=min_heap.top();
            min_heap.pop();
             
            long long cost=a+b;
            min_heap.push(cost);
            ans=ans+cost;
            
        }
        
        return ans;
        
        
    }
};


//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends