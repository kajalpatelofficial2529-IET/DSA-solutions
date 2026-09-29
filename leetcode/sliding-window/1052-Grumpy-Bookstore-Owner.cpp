class Solution {
public:
    int maxSatisfied(vector<int>& c, vector<int>& g, int m) {
        int cnt=0;
        int n=c.size();
        for(int i=0;i<m;i++){
           if(g[i]==1) cnt+=c[i];
        }
        
        int ans=0;
        ans=max(ans,cnt);
        for(int i=m;i<n;i++){
             if(g[i]==1)cnt+=c[i];
             if(g[i-m]==1)cnt-=c[i-m];
             if(cnt>ans){
                ans=max(ans,cnt);
             }
        }
        for(int i=0;i<n;i++){
            if(g[i]==0){
                ans+=c[i];
            }
        }
        return ans;
    }
};