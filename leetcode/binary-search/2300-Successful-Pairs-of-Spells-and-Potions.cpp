class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int>ans;
        sort(potions.begin(),potions.end());
        for(int i=0;i<spells.size();i++){
            long long k=spells[i];
            long long start=0;
            long long end=potions.size()-1;
            int mid;
            long long found=0;
            while(start<=end){
                mid=start+(end-start)/2;
                long long s=potions[mid]*k;
                if(s>=success){
                   found=potions.size()-mid;
                   end=mid-1;
                }
                else if(s<success){
                    start=mid+1;
                }
            }
            ans.push_back(found);
        }
        return ans;
    }
};