#include <bits/stdc++.h>
using namespace std;

class graph
{
public:
    unordered_map<int, list<pair<int, int>>> adjList;

    void addEdge(int u, int v, int weight)
    {
        pair<int, int> p = make_pair(v, weight);
        adjList[u].push_back(p);
    }

    void printAdjList()
    {
        for (auto i : adjList)
        {
            cout << i.first << "->";
            for (auto j : i.second)
            {
                cout << "(" << j.first << "," << j.second << "),";
            }
            cout << "\n";
        }
    }

    void dfs(int node, unordered_map<int, bool> &visited, stack<int> &st)
    {
        visited[node] = true;
        for (auto neighbour : adjList[node])
        {
            if (!visited[neighbour.first])
            {
                dfs(neighbour.first, visited, st);
            }
        }

        st.push(node);
    }
};
int main()
{
    graph g;
    g.addEdge(0, 1, 5);
    g.addEdge(0, 2, 3);
    g.addEdge(1, 2, 2);
    g.addEdge(1, 3, 6);
    g.addEdge(2, 3, 7);
    g.addEdge(2, 4, 4);
    g.addEdge(2, 5, 2);
    g.addEdge(3, 4, -1);
    g.addEdge(4, 5, -2);

    g.printAdjList();

    // topological sort
    int n = 6;
    unordered_map<int, bool> visited;
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            g.dfs(i, visited, st);
        }
    }

    int src = 1;
    vector<int> dist(n);

    for (int i = 0; i < n; i++)
        dist[i] = INT_MAX;

    // make src distance =0
    dist[src] = 0;

    while (!st.empty())
    {
        int top = st.top();
        st.pop();

        if (dist[top] != INT_MAX)
        {
            for (auto neighbour : g.adjList[top])
            {
                if (dist[top]+neighbour.second < dist[neighbour.first])
                {
                    dist[neighbour.first]=dist[top]+neighbour.second;
                }
            }
        }
    }

    //printing dist vector
    cout<<"Distance vector : \n";
    for(int i=0;i<n;i++) cout<<dist[i]<<" ";
}