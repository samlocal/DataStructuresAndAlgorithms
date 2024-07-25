
// #include<bits/stdc++.h>
// int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
//   //adjacency list
//   unordered_map<int,list<int>>adjList;
//   for(int i=0;i<edges.size();i++)
//   {
//       int u=edges[i].first-1;
//       int v=edges[i].second-1; //because nodes starts from 1

//       adjList[u].push_back(v);
//   }

//   //find all indegree
//   vector<int>indegree(n);
//   for(auto i:adjList)
//   {
//       for(auto j:i.second)
//       {
//           indegree[j]++;
//       }
//   }
  
//   //0 indegree
//   queue<int>q;
//   for(int i=0;i<n;i++)
//   {
//       if(indegree[i]==0) q.push(i);
//   }

//   //do bfs
//   int count=0;
//   while(!q.empty())
//   {
//       int front=q.front();
//       q.pop();

//       count++;

//       for(auto neighbour : adjList[front])
//       {
//           indegree[neighbour]--;
//           if(indegree[neighbour]==0) q.push(neighbour);
//       }
//   }
  
//   if(count==n) return false;
//   return true;

// }