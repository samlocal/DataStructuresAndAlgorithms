#include <bits/stdc++.h> 
using namespace std;
vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
    //create adjacency list
    unordered_map<int,list<pair<int,int>>>adjList;

    for (int i = 0; i < edges; i++) {
      int u = vec[i][0];
      int v = vec[i][1];
      int weight = vec[i][2];

      adjList[u].push_back(make_pair(v,weight));
      adjList[v].push_back(make_pair(u,weight));
    }

    vector<int>dist(vertices);
    for(int i=0;i<vertices;i++) dist[i]=INT_MAX;

    set<pair<int,int>>st; //this set works as a min heap

    dist[source]=0;
    st.insert(make_pair(dist[source],source));

    while(!st.empty())
    {
        //fetch top record
        auto top=*(st.begin());
        st.erase(st.begin());

        int nodeDistance=top.first;
        int topNode=top.second;

        for(auto neighbours : adjList[topNode])
        {
            if(nodeDistance+neighbours.second<dist[neighbours.first])
            {
                //if already present in the set remove it
                auto record=st.find(make_pair(dist[neighbours.first],neighbours.first));
                
                //if record found
                if(record!=st.end()) st.erase(record);

                //distance update
                dist[neighbours.first]=nodeDistance+neighbours.second;
                //pushing in set
                st.insert(make_pair(nodeDistance+neighbours.second,neighbours.first));
            }
        }




    }
  return dist;

    
}

int main()
{
    
}