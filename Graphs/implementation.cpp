#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;

class graph
{
public:
    unordered_map<int, list<int>> adj;

    void addEdge(int u, int v, bool direction)
    {
        // direction=0 : undiredcted graph
        // direction=1 : directed graph

        // creating edge from u to v
        adj[u].push_back(v);

        if (direction == false)
            adj[v].push_back(u);
    }

    void printAdjList()
    {
        for (auto i : adj)
        {
            cout << i.first << "->";
            for (auto j : i.second)
                cout << j << ",";
             cout << "\n";
        }
       
    }
};

int main()
{
    graph g;
    int n;
    cout << "Enter the no of nodes:\n";
    cin >> n;
    int m;
    cout << "Enter the no of edges:\n";
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v, 0); // undiredcted
    }

    // printing graph
    g.printAdjList();

    return 0;
}