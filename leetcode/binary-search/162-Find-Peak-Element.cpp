class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        long long start=0;
          long long n=nums.size();
          long long end=n-1;
          long long mid;
        long long pi=n-1;
        while(start<end){
          mid=start+(end-start)/2;
          if( (mid == 0||nums[mid]>nums[mid-1] )&& nums[mid]>nums[mid+1]){
            pi=mid;
            break;
          }
          else if(nums[mid]<nums[mid+1]){
            start=mid+1;
          }
          else {
            end=mid-1;
          }
        } 
        if (start == end) {
            pi = start;
        }
        return pi;
    }
};