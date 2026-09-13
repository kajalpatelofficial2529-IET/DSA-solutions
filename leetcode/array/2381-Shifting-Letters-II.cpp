class Solution {
public:
    string shiftingLetters(string v, vector<vector<int>>& b) {
        int n=v.size();
        vector<int> diff(n+1,0);
       for(int i=0;i<b.size();i++){
        int val=(b[i][2]==1)?1 : -1;
        diff[b[i][0]]+=val;
        diff[b[i][1]+1]-=val;
       }
       int s=0;
       for(int i=0;i<n;i++){
        s=(s+diff[i])%26;
          v[i]='a'+(v[i]-'a'+s+26)%26;
       }
     return v;
    }
};