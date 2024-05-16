/*
#include<bits/stdc++.h>
void solve(vector<string>&ans,string output,int index,string str)
{
    if(index>=str.length())
    {
        if(output.length()>0)
        ans.push_back(output);
        return;
    }
    solve(ans,output,index+1,str);

    char c=str[index];
    output.push_back(c);
     solve(ans,output,index+1,str);
}

vector<string> subsequences(string str)
{
    vector<string> ans;
    string output="";
    int index=0;

   
    solve(ans,output,index,str);
    return ans;

}*/