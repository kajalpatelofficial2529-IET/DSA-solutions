class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int count=0;
         for(int i=0;i<nums.size();i++){
          int x=(nums[i]%2);
          count+=x;
          nums[i]=count;
        }
         int ans=0;
       vector<int> mp(nums.size()+1,0);
        mp[0]=1;
        for(int i = 0; i < nums.size(); i++){
            int x = nums[i]-k;
            if(x >= 0 && mp[x]){
                ans += mp[x];
            }
            mp[nums[i]]++;
        }
        return ans;
    }
};