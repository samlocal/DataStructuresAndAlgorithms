#include<bits/stdc++.h>
using namespace std;
bool isCycle(int src,int parent,unordered_map<int,bool>visited,unordered_map<int,list<int>> adjList)
{
    visited[src]=true ;

    for(auto neighbour : adjList[src])
    {
        if(!visited[neighbour])
        {
            bool ans=isCycle(neighbour, src, visited, adjList);
            if(ans==1) return true;
        }
        else if(neighbour!=parent)
        {
            return true;
        }
    }
    return false;
}
string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    //Making Adjacency List
    unordered_map<int,list<int>> adjList;
    for(int i=0;i<edges.size();i++)
    {
        int u=edges[i][0];
        int v=edges[i][1];

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    //Making visited data structure
    unordered_map<int,bool>visited;

    //for traversing all the components of a graph
    for(int i=0;i<n;i++)
    {
        if(!visited[i])
        {
             if(isCycle(i,-1,visited,adjList)) return "Yes"; //-1 is parent of 1
        }
    }
    return "No";
}

int main()
{}