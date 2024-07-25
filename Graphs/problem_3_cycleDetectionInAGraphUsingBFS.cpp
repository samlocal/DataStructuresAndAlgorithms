#include<bits/stdc++.h>
using namespace std;
//using bfs


bool isCycle(int node,unordered_map<int,list<int>> adjList,unordered_map<int,bool>visited)
{
    visited[node]=true;
    
    //queue
    queue<int>q;
    q.push(node);

    //parent data structure
    unordered_map<int,int>parent; //first int = node , second int= parent
    parent[node]=-1;

    while(!q.empty())
    {
        int firstNode=q.front();
        q.pop();

        for(auto neighbours : adjList[firstNode])
        {
            if(visited[neighbours]==true && neighbours!=parent[firstNode] ) return true;
            else if(!visited[neighbours])
            {
                q.push(neighbours);
                visited[neighbours]=true;
                parent[neighbours]=firstNode;
            }


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
             if(isCycle(i,adjList,visited)) return "Yes";
        }
    }
    return "No";
}

int main()
{

}