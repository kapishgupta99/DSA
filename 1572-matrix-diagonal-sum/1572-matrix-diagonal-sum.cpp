class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
         int sum=0, n=mat.size();
        /* doing something */
        for(int i=0; i<n; i++){
            sum += mat[i][i];
        }
        for(int i=0; i<n; i++) {
            if(i != n-1-i) 
            sum += mat[i][n-1-i];
        }
        return sum;
    }
};