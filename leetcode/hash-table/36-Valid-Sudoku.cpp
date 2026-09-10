class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& b) {
        for(int i=0;i<9;i++){
         unordered_map<int,int>r;
        unordered_map<int,int>c;
        unordered_map<int,int>bx;
            for(int j=0;j<9;j++){
                if(b[i][j] != '.'){
                if(r[b[i][j]]>0){
                    return false;
                }
                r[b[i][j]]++;
                }
            
                if(b[j][i] != '.') {
                if(c[b[j][i]]>0){
                    return false;
                }
               c[b[j][i]]++;
                }

                int row =3*(i/3)+(j/3);
                int col=3*(i%3)+(j%3);
                if(b[row][col] != '.'){
                 if(bx[b[row][col]] > 0) return false;
                 bx[b[row][col]]++;
                }
            }

        }
        return true;
    }
};