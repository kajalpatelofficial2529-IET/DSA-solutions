class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
       int n=nums.size();
       vector<int>pref(n);
        pref[0]=nums[0];
       for(int i=1;i<n;i++){
          pref[i]=pref[i-1]+nums[i];
       }
       int ans=-1;
        int t=pref[n-1]-x;
        if(t<0)return -1;
        int l=0;
        int sum=0;
       for(int i=0;i<n;i++){
        sum+=nums[i];
       while (sum>t && l<=i){
            sum-=nums[l];
            l++;
        }
        if (sum==t) {
                ans=max(ans, i - l + 1);
            }
       }
       if (ans == -1) {
        return -1;
       } else {
       return n - ans;
       }
    }
};