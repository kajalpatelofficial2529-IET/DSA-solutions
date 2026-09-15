class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
         int start=1;
        int end=piles[0];
        long long sum=0;
        for(int p:piles){
            end=max(end,p);
        }
        int mid;
        int ans;
        while(start<=end){
            mid=start+(end-start)/2;
            long long time=0;
            for(int p:piles){
              time+=p/mid;
              if(p%mid!=0){
                time++;
              }
            }
            if(time>h){
                start=mid+1;
            }
            else {
                ans=mid;
                end=mid-1;
            }
        }
        return ans;
    }
};