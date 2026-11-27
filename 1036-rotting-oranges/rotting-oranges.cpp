class Solution {
public:
    class Triplet{
    public:
        int row;
        int col;
        int time;
    };

    int orangesRotting(vector<vector<int>>& arr) {
        int m = arr.size(), n = arr[0].size();
        queue<Triplet> q;
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (arr[i][j] == 2) q.push({i,j,0});
            }
        }
        int maxTime = 0;
        while(q.size()>0){
            Triplet front = q.front();
            q.pop();
            int r = front.row, c = front.col, time = front.time;
            if(time > maxTime) maxTime = time;

            //up
            if (r - 1 >= 0 && arr[r - 1][c] == 1) {
                q.push({r - 1, c,time+1});
                arr[r - 1][c] = 2;
            }
            // down
            if (r + 1 < m && arr[r + 1][c] == 1) {
                q.push({r + 1, c,time+1});
                arr[r + 1][c] = 2;
            }
            // left
            if (c - 1 >= 0 && arr[r][c - 1] == 1) {
                q.push({r, c - 1,time+1});
                arr[r][c - 1] = 2;
            }
            // right
            if (c + 1 < n && arr[r][c + 1] == 1) {
                q.push({r, c + 1,time+1});
                arr[r][c + 1] = 2;
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (arr[i][j] == 1) return -1;
            }
        }
        return maxTime;
    }
};