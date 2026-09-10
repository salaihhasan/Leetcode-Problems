class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int l = n;
        int sum = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i == j)sum += mat[i][j];
            }
        }

    int m = n-1;
    int k = 0;
        while(l--){
            sum+= mat[k][m];
            k++;m--;
        }

        if(n % 2 != 0){
            return sum - mat[n/2][n/2];
        }
        return sum;
    }
};