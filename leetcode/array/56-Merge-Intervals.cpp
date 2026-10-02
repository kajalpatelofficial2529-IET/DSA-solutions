class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& i) {
        vector<vector<int>>ans;
        sort(i.begin(),i.end());
        int ts=i[0][0];
        int te=i[0][1];
        int m=i.size();
        for(int j=1;j<m;j++){
            // te purane ki ending
           // i[j][0] curent ka start
          if(i[j][0]<=te){
            te=max(te,i[j][1]);
          }
           else{
            ans.push_back({ts, te});
            ts=i[j][0];
            te=i[j][1];
         }
        }
          ans.push_back({ts, te});
        return ans;
        
    }
};