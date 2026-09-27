class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string>ans;
        if(s.size()<10){
            return ans;
        }
        unordered_map<string,int>mp;
         for(int i=0;i<s.size()-9;i++){
            string p=s.substr(i,10);
            mp[p]++;
         }
         for(auto const& [x,y]:mp){
            if(mp[x]>1){
                ans.push_back(x);
            }
         }
      return ans;
    }
};