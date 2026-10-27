class Solution {
public:
int rev(int n) {
        int r=0;
        while (n>0) {
            r= r*10+(n%10);
            n/= 10;
        }
        return r;
    }
    int countNicePairs(vector<int>& nums) {
        unordered_map<int, int>mp;
        long long ans=0;
        for(int i=0;i<nums.size();i++){
            int diff=nums[i]-rev(nums[i]);
            if(mp.find(diff)!=mp.end()) {
                ans=(ans+mp[diff])%(1000000007);
            }
            mp[diff]++;
        }
      return ans;
    }
};