#include <bits/stdc++.h> 
using namespace std;
/*
void topologicalSortUsingDFS(int node,vector<bool> &visited,unordered_map<int,list<int>> &adjList,stack<int> &st)
{
    visited[node]=true;

    for(auto neighbour:adjList[node])
    {
        if(!visited[neighbour])
        {
            topologicalSortUsingDFS(neighbour,visited,adjList,st);
        }
    }
    
    //returning from the recursive call
    st.push(node);
}
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    //adjacency list
    unordered_map<int,list<int>>adjList;
    for(int i=0;i<e;i++)
    {
        int u=edges[i][0];
        int v=edges[i][1];

        adjList[u].push_back(v);
    }

    //visited data structire
    vector<bool>visited(v);

    //stack data structure
    stack<int>st;

    //for all the componenets in agraph
    for(int i=0;i<v;i++)
    {
        if(!visited[i])
        {
            topologicalSortUsingDFS(i,visited,adjList,st);
        }
    }

    //returning answert
    vector<int>ans;

    while(!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
}

int main()
{

}
*/