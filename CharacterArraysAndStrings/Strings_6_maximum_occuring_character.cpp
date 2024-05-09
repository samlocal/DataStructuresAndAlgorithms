/*//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        int frequency[26]={0};
        
        for(int i=0;i<str.length();i++)
        {
            int index=str[i]-'a';
            frequency[index]++;
        }
        
        int maxi=frequency[0];
        int ans=0;
        for(int i=1;i<26;i++)
        {
            if(frequency[i]>maxi)
            {
                maxi=frequency[i];
                ans=i;
            }
        }
        
        char temp='a'+ans;
        
        return temp;
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends*/