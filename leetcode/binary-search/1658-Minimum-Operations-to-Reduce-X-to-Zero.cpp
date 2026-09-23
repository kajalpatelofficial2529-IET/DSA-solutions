class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        long long sum=0;
        for(long long s:nums){
            sum+=s;
        }
         int n=nums.size();
       long long target=sum-x;
       if(target==0)return n;

       int l=0;
       int ans=-1;
       long long s=0;
     for( int r=0;r<n;r++){
       s+=nums[r];
      while(s>target && l<=r){
        s-=nums[l];
        l++;
      }
      if(s==target){
        ans=max(ans,r-l+1);
      }
     }
   if(ans==-1)return -1;
    
   else return n-ans;
    }
};