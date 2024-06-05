//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    private:
    void insertAtBottom(stack<int> &st , int x)
    {
        if(st.empty())
        {
            st.push(x);
            return;
        }
        
        int ele=st.top();
        st.pop();
        insertAtBottom(st,x);
        st.push(ele);
    }
public:
    void Reverse(stack<int> &St){
        if(St.empty())
        {
            return;
        }
        
        int ele=St.top();
        St.pop();
        Reverse(St);
        
        //backtracking
        insertAtBottom(St,ele);
    }
};

//{ Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        ob.Reverse(St);
        vector<int>res;
        while(St.size())
        {
            res.push_back(St.top());
            St.pop();
        }
        for(int i = res.size()-1;i>=0;i--)
        {
            cout<<res[i]<<" ";
        }
        
        cout<<endl;
    }
}
// } Driver Code Ends