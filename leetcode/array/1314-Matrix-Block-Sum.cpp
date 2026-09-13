class Solution {
    vector<vector<int>> m;
    int sumRegion(int row1, int col1, int row2, int col2) {
       int total=m[row2][col2];
        int top=0;
        if (row1>0) {
            top=m[row1- 1][col2];
        }
        int left=0;
        if(col1>0) {
            left=m[row2][col1-1];
        }
        int topLeft=0;
        if (row1>0 && col1>0){
            topLeft=m[row1-1][col1-1];
        }
        return  total-top-left+topLeft;
        }
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        m=mat;
        int rows=m.size();
        int cols=m[0].size();
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
        vector<vector<int>> answer(rows, vector<int>(cols, 0));
        for (int i=0; i<rows;i++) {
            for (int j=0;j<cols;j++) {
                int r1=max(0,i-k);
                int c1=max(0,j-k);
                int r2=min(rows-1,i+k);
                int c2=min(cols-1,j+k);
                answer[i][j]=sumRegion(r1, c1, r2, c2);
            }
        }

        return answer;

    }
};

