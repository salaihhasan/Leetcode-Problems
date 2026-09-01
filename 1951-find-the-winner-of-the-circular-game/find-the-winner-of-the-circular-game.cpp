class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int>q;
        for(int i = 0; i <= n; i++){
            q.push(i);
        }
        int i = 0;
        while( q.size() != 1){
                if(i % k == 0) q.pop();
                else{
                    q.push(q.front());
                    q.pop();
                }
                i++;
            
        }
        return q.front();
    }
};