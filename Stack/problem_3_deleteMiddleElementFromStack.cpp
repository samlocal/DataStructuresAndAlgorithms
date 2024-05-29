//approach 1
//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        stack<int>tempStack;
        
        int mid=sizeOfStack/2;
        
        while(mid>0)
        {
            int top=s.top();
            tempStack.push(top);
            mid--;
            s.pop();
        }
        
        //deleting top of the stack
        s.pop();
        
        //adding the above elements from the middle in the stack
        
        while(!tempStack.empty())
        {
            int ele=tempStack.top();
            s.push(ele);
            tempStack.pop();
        }
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}

// } Driver Code Ends

//*************************************************************************************


//Approach 2 - using recursion
//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
   private:
    void solve(stack<int>&s, int count, int size)
    {
        //base case
        if(count==size/2)
        {
            s.pop();
            return;
        }
        
        //storing the top elenent
        int top=s.top();
        s.pop();
        solve(s,count+1,size);
        
        //Adding top to stack - backtracking
        s.push(top);
    }
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        int count=0;
        solve(s,count,sizeOfStack);
      
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}

// } Driver Code Ends
