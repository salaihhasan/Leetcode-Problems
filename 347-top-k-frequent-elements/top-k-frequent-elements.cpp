class Solution {
public:
  typedef pair<int, int> pr;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>um;
        
        priority_queue<pr, vector<pr>, greater<pr>> pq;
        vector<int>ans;
        for(int i = 0; i < nums.size(); i++){
            um[nums[i]]++;
        }

        for(auto it : um){
            pq.push({it.second , it.first});

            if (pq.size() > k) {
                pq.pop(); // Remove the element with the lowest frequency
            }
        }

        while(pq.size() != 0){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};