class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n=nums.size();
       vector<long long>pr;
       pr.push_back(nums[0]);
       for(int i=1;i<n;i++){
        pr.push_back(pr[i-1]+nums[i]);
       } 
       int ans = 0;
       long long totlsum=pr[n-1];
       for(int i=0;i<n-1;i++) {
            long long l = pr[i];
            long long r= totlsum-pr[i];
            if(l>=r) {
                ans++;
            }
        }
      return ans;
    }
};