class Solution {
public:
    int search(vector<int>& nums, int target) {
        
         long long left=0;
          long long n=nums.size();
          long long end=n-1;
          long long mid;
        
        while(left<=end){
          mid=left+(end-left)/2;
          //left chain
          if(target==nums[mid]){
            return mid;
           }
         if(nums[mid]>=nums[left]){
            if(nums[left] <= target && target < nums[mid]){
               end=mid-1;
            }
            else {
                left=mid+1;

            }
         }
         else{
            if(nums[mid] < target && target <= nums[end]){
              left=mid+1;
            }else{
                end=mid-1;
            }
         }
         
        }
       return -1;

    }
};
