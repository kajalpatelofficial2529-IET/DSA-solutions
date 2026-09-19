class Solution {
public:
    int shipWithinDays(vector<int>& piles, int h) {
       int n=piles.size();
         int start=piles[0];
        int end=0;
        long long sum=0;
        for(int p:piles){
            start=max(start,p);
            end+=p;
        }
        int mid;
        int ans;
        while(start<=end){
            mid=start+(end-start)/2;
           int time= 1;
            int currentLoad= 0;
            
            for(int w : piles){
                if(currentLoad + w > mid){
                    time++;     
                    currentLoad = w;  
                } else {
                    currentLoad += w; 
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