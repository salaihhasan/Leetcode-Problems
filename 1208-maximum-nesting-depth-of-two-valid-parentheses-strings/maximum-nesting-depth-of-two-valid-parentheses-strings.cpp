class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int counter = 0;
        vector<int>ans;
        for(char ch : seq){
            if(ch == '('){
                counter += 1;
                if(counter % 2 != 0) ans.push_back(0);
                else ans.push_back(1);
            }
            else {
                if(counter % 2 != 0) ans.push_back(0);
                else ans.push_back(1);
                counter -= 1;
            }
        }
        return ans;
    }
};