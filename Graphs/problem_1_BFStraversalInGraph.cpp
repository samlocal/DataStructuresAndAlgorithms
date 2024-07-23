// #include <unordered_map>
// #include <list>
// #include <vector>
// #include <queue>

// using namespace std;

// void prepareAdjList(unordered_map<int, set<int>>& adjList, const vector<vector<int>>& adj) {
//     for (int i = 0; i < adj.size(); i++) {
//         int u = adj[i][0];
//         int v = adj[i][1];

//         adjList[u].insert(v);
//         adjList[v].insert(u);
//     }
// }

// void bfs(int node, unordered_map<int, set<int>>& adjList, unordered_map<int, bool>& visited, vector<int>& ans) {
//     queue<int> q;
//     q.push(node);
//     visited[node] = true;

//     while (!q.empty()) {
//         int frontNode = q.front();
//         q.pop();

//         // Store frontNode into ans
//         ans.push_back(frontNode);

//         // Traverse all neighbours of frontNode
//         for (auto i : adjList[frontNode]) {
//             if (!visited[i]) {
//                 q.push(i);
//                 visited[i] = true; // Mark as visited when pushed to queue
//             }
//         }
//     }
// }

// vector<int> bfsTraversal(int n, vector<vector<int>>& adj) {
//     // Adjacency List
//     unordered_map<int, set<int>> adjList;
//     prepareAdjList(adjList, adj);

//     // Visited data structure
//     unordered_map<int, bool> visited;

//     // Answer vector
//     vector<int> ans;

//     // Traverse all components of a graph
//     for (int i = 0; i < n; i++) {
//         if (!visited[i]) {
//             bfs(i, adjList, visited, ans);
//         }
//     }

//     return ans;
// }
