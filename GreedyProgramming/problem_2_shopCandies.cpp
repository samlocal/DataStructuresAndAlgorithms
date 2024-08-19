#include <bits/stdc++.h> 
using namespace std; 

class Solution
{
public:
    vector<int> candyStore(int candies[], int n, int k)
    {
        // Sort the candies array
        sort(candies, candies + n);
        
        // Calculate the minimum cost
        int mini = 0;
        int buy = 0;       // Start from the beginning of the sorted array
        int free = n - 1;  // Start from the end of the sorted array
        
        while (buy <= free)
        {
            mini += candies[buy];
            buy++;
            free -= k; // Move the free index to account for k free candies
        }
        
        // Calculate the maximum cost
        int maxi = 0;
        buy = n - 1;       // Start from the end of the sorted array
        free = 0;          // Start from the beginning of the sorted array
        
        while (free <= buy)
        {
            maxi += candies[buy];
            buy--;
            free += k; // Move the free index to account for k free candies
        }
        
        // Prepare the result
        vector<int> ans;
        ans.push_back(mini);
        ans.push_back(maxi);
        return ans;
    }
};

// Driver Code
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}
