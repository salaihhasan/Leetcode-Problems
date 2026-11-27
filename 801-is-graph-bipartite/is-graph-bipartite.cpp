class Solution {
public:
    bool bfs(int src , vector<vector<int>> &adj,vector<int>&visited){
        queue<int>q;

          visited[src] = 1;
          q.push(src);

          while(q.size()>0){
              int front = q.front();
              q.pop();

              for(int node : adj[front]){
                if (visited[node] == visited[front]) return false;
                if(visited[node] == 0){
                    q.push(node);
                    visited[node] =  (visited[front] == 1) ? 2 : 1;
                }

              }
          }
          return true;
    }
    

    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
           vector<int> visited(n, 0);

           for (int i = 0; i < n; i++) {
               if (!visited[i]) {
                   if (!bfs(i, graph, visited)) return false;
               }
           }
           return true;
    }
};