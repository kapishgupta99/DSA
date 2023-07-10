class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        unordered_set<int>rowZero;
        unordered_set<int>colZero;
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                rowZero.insert(i);
                colZero.insert(j);
                }
            }
        }
        for(int i=0;i<row;i++){
            if(rowZero.count(i)>0){
                for(int j=0;j<col;j++){
                    matrix[i][j]=0;
                }
            }
        }
        for(int j=0;j<col;j++){
            if(colZero.count(j)>0){
                for(int i=0;i<row;i++){
                    matrix[i][j]=0;
                }
            }
        }
        
            
        
        
    }
};