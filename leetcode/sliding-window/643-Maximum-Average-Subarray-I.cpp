class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       double ans=INT_MIN;
       double sum=0;
       for(int i=0;i<k;i++){
         sum+=nums[i];
       } 
       ans=max(sum/k,ans);
       for(int i=k;i<nums.size();i++){
        sum+=nums[i];
        sum-=nums[i-k];
        ans=max(sum/k,ans);
       }
       return ans;
    }
};