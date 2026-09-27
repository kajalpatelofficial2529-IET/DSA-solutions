class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
           if(nums[i]==0) nums[i]=-1;     
              }
        unordered_map<int, int> mp;
        mp[0]=-1; 
        int sum=0;
        int ans=0;
        for(int r=0;r<nums.size();r++){
            sum +=nums[r];

            if(mp.find(sum)!=mp.end()){
                ans=max(ans,r-mp[sum]);
            } else {
                mp[sum]=r;
            }
        }

        return ans;
    }

};