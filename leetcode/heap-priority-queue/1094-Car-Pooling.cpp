class Solution {
public:
    bool carPooling(vector<vector<int>>& b, int n) {
       vector<int> v(1001,0);
       for(int i=0;i<b.size();i++){
        v[b[i][1]] += b[i][0];
        v[b[i][2]]-= b[i][0];
       }
       int ans=0;
       for(int i=0;i<1001;i++){
          ans+=v[i];
        if(ans>n)return false;
       }
     return true;
    }
};