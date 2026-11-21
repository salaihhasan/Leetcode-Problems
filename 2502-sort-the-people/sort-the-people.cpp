class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,int>>pr;
        vector<string>ans;
        for(int i = 0; i < heights.size();i++){
            pr.push_back({heights[i],i});
        }
        sort(pr.begin(), pr.end());
        reverse(pr.begin(), pr.end());
        for(int i = 0; i < names.size();i++){
            ans.push_back(names[pr[i].second]);
        }
        return ans;
    }   
};