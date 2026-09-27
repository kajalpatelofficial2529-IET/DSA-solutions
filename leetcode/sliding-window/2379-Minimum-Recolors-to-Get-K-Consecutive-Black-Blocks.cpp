class Solution {
public:
    int minimumRecolors(string nums, int k) {
       int countw=0;
       int countb=0;
        int ans=INT_MAX;
       for(int i=0;i<k;i++){
         if(nums[i]=='W')countw++;
         else countb++;
       } 
      ans=min(ans,countw);
       for(int i=k;i<nums.size();i++){
        if(nums[i]=='W')countw++;
         else countb++;
          if(nums[i-k]=='W')countw--;
         else countb--;
          ans=min(ans,countw);
       }
       return ans;
    }
};