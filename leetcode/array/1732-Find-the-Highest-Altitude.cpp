class Solution {
public:
    int largestAltitude(vector<int>& nums) {
    int n=nums.size();
     long long ans=INT_MIN;
    long long pr[n+1];
      pr[0]=0;
     long long x=pr[0];
       ans=max(ans,x);
       for(int i=0;i<n;i++){
        pr[i+1]=pr[i]+nums[i];
         x=pr[i+1];
        ans=max(ans,x);
       } 
       return ans;
    }
};