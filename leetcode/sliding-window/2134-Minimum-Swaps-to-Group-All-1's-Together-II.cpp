class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
       int count1=0;
       for(int i=0;i<n;i++){
        if(nums[i]==1){
            count1++;
        }
       }

       
       int l=0;
       int ncnt=0;
       for(int i=0;i<count1;i++){
       if(nums[i]==1)
        ncnt++;

       }



       if(count1<=1){
        return 0;
       }
       int ans=INT_MAX;
       ans=min(ans,count1-ncnt);
       for(int i=count1;i<n+count1;i++){
            ncnt+=nums[i%n]-nums[l%n];
            l++;
         ans=min(ans,count1-ncnt);
       }
     return ans;
    }
};