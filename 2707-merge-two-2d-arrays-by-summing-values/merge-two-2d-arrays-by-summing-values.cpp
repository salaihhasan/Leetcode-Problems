class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        unordered_map<int,int>um;
        vector<vector<int>> ans;
        for(int i = 0; i < nums1.size(); i++){
                um[nums1[i][0]] = nums1[i][1];
        }

        for(int i = 0; i < nums2.size(); i++){
                if(um.find(nums2[i][0]) != um.end()){
                    um[nums2[i][0]] += nums2[i][1];
                }
                else {
                    um[nums2[i][0]] = nums2[i][1];
                }
        }

        for (const auto& [key, value] : um) {
            vector<int>data = {key,value};
            ans.push_back(data);
            
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};