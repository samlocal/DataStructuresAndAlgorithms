// #include<bits/stdc++.h>
// vector<int> shortestPath( vector<pair<int,int>> edges , int n , int m, int s , int t){
	
// 	//create adjacency list
// 	unordered_map<int,list<int>> adjList;
// 	for(int i=0;i<edges.size();i++)
// 	{
// 		int u=edges[i].first;
// 		int v=edges[i].second;

// 		adjList[u].push_back(v);
// 		adjList[v].push_back(u);
// 	}

// 	//do bfs

// 	//visited
// 	unordered_map<int,bool>visited;

// 	//parent
// 	unordered_map<int,int> parent;

// 	queue<int>q;
// 	q.push(s);
// 	visited[s]=true;
// 	parent[s]=-1;

// 	while(!q.empty())
// 	{
// 		int front=q.front();
// 		q.pop();

// 		for(auto neighbour : adjList[front])
// 		{
// 			if(!visited[neighbour])
// 			{
// 				q.push(neighbour);
// 				visited[neighbour]=true;
// 				parent[neighbour]=front;
// 			}
// 		}
// 	}

	
//     // Finding path using parent data structure
//     vector<int> ans;
//     if (!visited[t]) return ans;  // No path from s to t

//     int currNode = t;
//     while (currNode != -1) {
//         ans.push_back(currNode);
//         currNode = parent[currNode];
//     }

//     // Reverse the answer to get the path from s to t
//     reverse(ans.begin(), ans.end());

//     return ans;

	
// }
