class Solution {
public:
    typedef pair<int,vector<int>>pii;
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>>ans;
        priority_queue<pii>pq;
        for(int i = 0; i < points.size();i++){
            int dist = points[i][0] * points[i][0] + points[i][1] * points[i][1];
            pq.push({dist,points[i]});
            if(pq.size()>k)pq.pop();
        }

        while(pq.size() != 0){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};