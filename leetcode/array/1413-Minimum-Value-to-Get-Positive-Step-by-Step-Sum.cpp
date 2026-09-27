class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int n=nums.size();
       long long ans=INT_MAX;
      long long pr[n];
      pr[0]=nums[0];
     long long x=pr[0];
       ans=min(ans,x);
       for(int i=1;i<n;i++){
        pr[i]=pr[i-1]+nums[i];
         x=pr[i];
        ans=min(ans,x);
       } 
       if (ans<0) {
            return 1-ans; 
        } else {
            return 1;
        }
    }
};