class Solution {
public:
   void seq(vector<int>& nums,int idx,int n, vector<vector<int>>&ans,vector<int>temp){
    if(idx==n){
        ans.push_back(temp);
        return;
    }
    
         seq(nums,idx+1,n,ans,temp);
         temp.push_back(nums[idx]);
         seq(nums,idx+1,n,ans,temp); 

   }
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<vector<int>>ans;
       int n=nums.size();
       vector<int>temp;
       seq(nums,0,n,ans,temp); 
       return ans;
    }
};