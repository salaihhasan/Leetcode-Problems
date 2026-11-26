class Solution {
public:
    void bfs(int st , vector<vector<int>> &adj,vector<bool>&visited){
      queue<int>q;
        
        q.push(st);
        visited[st] = true;
        
        while(q.size()>0){
            int top = q.front();
            q.pop();
            
            for(int node : adj[top]){
                if(!visited[node]){
                    q.push(node);
                    visited[node] = true;
                }
            }
        }
    } 
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool>visited(n,false);
        bfs(0,rooms,visited);
        for(int i = 0; i < visited.size(); i++){
            if(visited[i] == false) return false;
        } 
        return true;
    }
};