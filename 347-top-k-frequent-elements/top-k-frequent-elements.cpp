class Solution {
public:
    typedef pair<int,int> pr;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>um;
        vector<int>ans;
        priority_queue<pr,vector<pr>,greater<pr>>minHeap;
        for(int i = 0; i < nums.size();i++){
            um[nums[i]]++;
        }
        for(auto it : um){
            minHeap.push({it.second,it.first});
            if(minHeap.size()>k)minHeap.pop();
        }
        while(minHeap.size() != 0){
            ans.push_back(minHeap.top().second);
            minHeap.pop();
        }
        return ans;
    }
};