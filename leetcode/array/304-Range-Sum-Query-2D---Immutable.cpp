class NumMatrix {
public:
vector<vector<int>>matrix;
    NumMatrix(vector<vector<int>>& m) {
        for(int i=0;i<m.size();i++){
            for(int j=1;j<m[0].size();j++){
                m[i][j]+=m[i][j-1];
            }
        }

         for(int j=0;j<m[0].size();j++){
            for(int i=1;i<m.size();i++){
                m[i][j]+=m[i-1][j];
            }
         }
         matrix=m;
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
       int total=matrix[row2][col2];
        int top=0;
        if (row1>0) {
            top=matrix[row1- 1][col2];
        }
        int left=0;
        if(col1>0) {
            left=matrix[row2][col1-1];
        }
        int topLeft=0;
        if (row1>0 && col1>0){
            topLeft=matrix[row1-1][col1-1];
        }
        return total-top-left+topLeft;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */