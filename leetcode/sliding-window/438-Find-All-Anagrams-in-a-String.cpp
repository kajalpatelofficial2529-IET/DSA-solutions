class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int t=p.size();
        int n=s.size();
        vector<int> mp(26, 0);
        vector<int> ms(26, 0);
        vector<int>ans;
        if(n<t) return ans;
        for(int i=0;i<t;i++){
            mp[p[i]-'a']++;
        }
        for(int i=0;i<t;i++){
          ms[s[i]-'a']++;
        }
        if(ms==mp){
            ans.push_back(0);
        }
        for(int i=t;i<n;i++){
          ms[s[i]-'a']++;
          ms[s[i-t]-'a']--;
          if(ms==mp){
            ans.push_back(i-t+1);
          }
        }
       return ans;
    }
};