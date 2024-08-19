//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
    static bool cmp(pair<int,int> a,pair<int,int> b)
    { 
        return a.second < b.second;
    }
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(int n, int start[], int end[]) {
        
        vector<pair<int,int>>time;
        
        for(int i=0;i<n;i++)
        {
            time.push_back({start[i],end[i]});
        }
        
        sort(time.begin(),time.end(),cmp);
        
        int count=1;
        int ansEnd=time[0].second;
        for(int i=1;i<n;i++)
        {
            if(time[i].first > ansEnd) {count++; ansEnd=time[i].second;}
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++)
            cin >> start[i];

        for (int i = 0; i < n; i++)
            cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(n, start, end);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends