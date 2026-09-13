class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& b, int n) {

       vector<int> v(n+2,0);
       for(int i=0;i<b.size();i++){
        v[b[i][0]] += b[i][2];
        v[b[i][1]+1]-= b[i][2];
       }
       vector<int>ans(n);
       ans[0]=v[1];
       for(int i=1;i<n;i++){
        ans[i]=ans[i-1]+v[i+1];
       }
     return ans;
    }
};