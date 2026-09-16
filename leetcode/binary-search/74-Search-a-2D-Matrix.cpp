class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int target) {
           if (nums.size()==0|| nums[0].size()==0) return false;
        bool found=false;
             int n=nums.size();
             int m=nums[0].size(); //column
              int left=0;
              int end=(m*n)-1;
               int mid;
           while(left<=end){
            mid=left+(end-left)/2;
            int row=mid/m;
            int col=mid%m;
            if(nums[row][col]==target){
            found=true;
            break;
             }
            else if(nums[row][col]<target){
             left=mid+1;
            }
            else {
            end=mid-1;
          
               }
            }
        
        return found;
    
    }
};