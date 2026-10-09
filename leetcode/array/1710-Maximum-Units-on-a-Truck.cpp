class Solution {
public:
    int maximumUnits(vector<vector<int>>& b, int t) {
        sort(b.begin(), b.end(), [](vector<int>& a, vector<int>& b) {
                return a[1] > b[1];
            });

            int ans=0;
            for(auto x:b){
                int noofbox=x[0];
                int unitperbox=x[1];
                int take=min(noofbox,t);
                ans+=take* unitperbox;
                t-=take;
                if(t==0){
                    break;
                }
            }
            return ans;
    }
};