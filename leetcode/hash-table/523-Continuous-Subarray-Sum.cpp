class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        if(n<=1)return false;
        unordered_map<int, int> mp;
        mp[0]=-1; 
        int sum=0;
        bool check=false;
        for(int i=0; i<n;i++){
            sum +=nums[i];
            int rem=sum % k;
            if(mp.find(rem) != mp.end()){
                   if(i-mp[rem]>=2){ check = true;
                    break;
                }
            }
             else {
             mp[rem]=i;
            }
        }
        if(check) return true;
        else return false;
    }
};