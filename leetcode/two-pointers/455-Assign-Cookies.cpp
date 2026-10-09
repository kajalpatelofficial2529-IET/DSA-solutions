class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int ng=g.size();
        int ns=s.size();
        int count=0;
        int gl=0;
        int sl=0;

        while(gl<ng && sl<ns){
            if(g[gl]<=s[sl]){
                count++;
                gl++;
                sl++;
            }
            else if((g[gl]>s[sl])){
                sl++;
            }
        }
        return count;
    }
};