// #include <bits/stdc++.h> 
// using namespace std;

// vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &g)
// {
//     // Create adjacency list
//     unordered_map<int, list<pair<int, int>>> adjList;
//     for(int i = 0; i < g.size(); i++)
//     {
//         int u = g[i].first.first;
//         int v = g[i].first.second;
//         int weight = g[i].second;

//         adjList[u].push_back(make_pair(v, weight));
//         adjList[v].push_back(make_pair(u, weight));
//     }
    
//     // Making the three data structures
//     vector<int> key(n + 1); // n+1 because nodes are starting from 1 to n
//     vector<bool> mst(n + 1);
//     vector<int> parent(n + 1);

//     // Initializing the ds
//     for(int i = 0; i <= n; i++)
//     {
//         key[i] = INT_MAX;
//         mst[i] = false;
//         parent[i] = -1;
//     }

//     // Starting of algo

//     // Making key of src = 0
//     key[1] = 0;
//     parent[1] = -1;
    
//     for(int i = 1; i < n; i++)
//     {
//         int mini = INT_MAX;
//         int u;

//         // Finding minimum node
//         for(int v = 1; v <= n; v++)
//         {
//             if(mst[v] == false && key[v] < mini)
//             {
//                 u = v;
//                 mini = key[v];
//             }
//         }

//         // Mark min node as true
//         mst[u] = true;

//         // Check its adjacent nodes
//         for(auto it : adjList[u])
//         {
//             int v = it.first;
//             int w = it.second;
//             if(mst[v] == false && w < key[v])
//             {
//                 parent[v] = u;
//                 key[v] = w;
//             }
//         }
//     }
    
//     vector<pair<pair<int, int>, int>> result;
//     for(int i = 2; i <= n; i++)
//     {
//         result.push_back({{parent[i], i}, key[i}});
//     }

//     return result;
// }
