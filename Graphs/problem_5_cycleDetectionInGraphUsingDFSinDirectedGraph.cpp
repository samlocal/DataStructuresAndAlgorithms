// #include<bits/stdc++.h>
// bool isCycleUsingDFS(int node,unordered_map<int,bool> &visited,unordered_map<int,bool> &dfsVisited,unordered_map<int,list<int>> &adjList)
// {
//     visited[node]=true;
//     dfsVisited[node]=true;

//     for(auto neighbour : adjList[node])
//     {
//         if(!visited[neighbour])
//         {
//             bool cycleDetected=isCycleUsingDFS(neighbour, visited, dfsVisited, adjList);
//             if(cycleDetected) return true;
//         }
//         else if(dfsVisited[neighbour]==true) {//visited[i]==true
//         return true;
        

//         }
//     }
//     dfsVisited[node]=0;//important
//     return false;
// }

// int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  
//   //adjacency list
//   unordered_map<int,list<int>> adjList;
//   for(int i=0;i<edges.size();i++)
//   {
//       int u=edges[i].first;
//       int v=edges[i].second;

//       adjList[u].push_back(v); //directed
//   }

//   //visited
//   unordered_map<int,bool>visited;

//   //dfs visited
//   unordered_map<int,bool> dfsVisited;

//   //call dfs for all components
//   for(int i=1;i<=n;i++)
//   {
//       if(!visited[i])
//       {
//           bool cycleFound=isCycleUsingDFS(i,visited,dfsVisited,adjList);
//           if(cycleFound) return true;
//       }
//   }
//   return false;
  
// }

// int main()
// {

// }