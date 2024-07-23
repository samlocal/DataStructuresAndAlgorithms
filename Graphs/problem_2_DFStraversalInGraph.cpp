#include<bits/stdc++.h>
using namespace std;
void prepareAdjList(unordered_map<int,list<int>> &adjList,vector<vector<int>> edges)
{
    for(int i=0;i<edges.size();i++)
    {
        int u=edges[i][0];
        int v=edges[i][1];

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
}
void dfs(int node,unordered_map<int,bool> &visited,unordered_map<int,list<int>> adjList,vector<int> &component)
{
    component.push_back(node);
    visited[node]=true;

    for(auto i : adjList[node])
    {
        if(!visited[i])
        {
            
            dfs(i,visited,adjList,component);
           
        }
    }
}
vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    //adjacency list
    unordered_map<int,list<int>> adjList;
    prepareAdjList(adjList,edges);

    //visited data structure
    unordered_map<int,bool>visited;

    //answer 
    vector<vector<int>> ans;

    for(int i=0;i<V;i++)
    {
        if(!visited[i])
        {
            vector<int>component; //we are doing this array because the graph is disconnected
            dfs(i,visited,adjList,component);
            ans.push_back(component);           
           
        }
    }
return ans;

}

int main(){}