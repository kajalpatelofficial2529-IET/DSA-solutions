class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        long long n=candies.size();
        long long start=1;
        int end=candies[0];
        long long sum=0;
        for(int p:candies){
            end=max(end,p);
            sum+=p;
        }
        if(sum<k)return 0;
        int mid;
        int ans=0;

         while(start<=end){
            mid=start+(end-start)/2;
            long long count=0;
            for(int p:candies){
              count+=p/mid;
              }
            if(count<k){
               end=mid-1;
            }
            else {
                ans=mid;
                start=mid+1;
            }
        }
        return ans;
    }
};