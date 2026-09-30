class Solution {
public:
    int days(vector<int>& bloomDay ,int mid,int k){
        int count=0;
        int bouque=0;
        for(int i:bloomDay){
            if(i<=mid){
                count++;
                if(count==k){
                  bouque++;
                  count=0;
                }
            }
            else 
            count=0;
        }
        return  bouque;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if ((long long)m * k > n) {
            return -1;
        }
        int low = 1;
        int high = 0;
        for (int day : bloomDay) {
            high = max(high, day);
        }
        int ans = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
          int totalBouquets= days(bloomDay , mid,k);
          if (totalBouquets >= m) {
               ans = mid;   
                high= mid-1;
          }
            else {
                low=mid+1;  
            }
        }
        return ans;
        }
};