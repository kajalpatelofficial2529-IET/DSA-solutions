class Solution {
public:
    int sum(int x){
        int m=0;
        while(x>0){
            int digit=x%10;
            m+=digit;
            x/=10;
        }
        return m;
    }
    int smallestIndex(vector<int>& nums) {
        int ans=-1;
        for(int i=0;i<nums.size();i++){
            int k=sum(nums[i]);
            if(k==i){
                ans=i;
                break;
            }
        }
        
        return ans;;
    }
};