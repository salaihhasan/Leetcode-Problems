class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size();
        int ans = 0;
        vector<int>newVector(n,0);

        for(int i = 0; i < n; i++){
            newVector[i] = heights[i];
        }

        sort(newVector.begin(), newVector.end());

        for(int i = 0; i < n ; i++){
            if(newVector[i] != heights[i]) ans += 1;
        }

        return ans;
    }
};