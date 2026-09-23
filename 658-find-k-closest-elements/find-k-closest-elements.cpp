class Solution {
public:
    typedef pair<int,int> pii;
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pii>pq;
        vector<int>ans;

        for(int i = 0; i < arr.size(); i++){
           int diff = abs(x - arr[i]);
            pq.push({diff, arr[i]});

            if(pq.size()>k)pq.pop();
        }

        while(pq.size()>0){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;

    }
};