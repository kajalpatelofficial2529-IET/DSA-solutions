class Solution {
public:
    bool checkInclusion(string p, string s) {
       int t=p.size();
        int n=s.size();
        if(n<t)return false;
        vector<int> mp(26, 0);
        vector<int> ms(26, 0);
        for(int i=0;i<t;i++){
            mp[p[i]-'a']++;
        }
        for(int i=0;i<t;i++){
          ms[s[i]-'a']++;
        }
        if(ms==mp){
           return true;
        }
        for(int i=t;i<n;i++){
          ms[s[i]-'a']++;
          ms[s[i-t]-'a']--;
          if(ms==mp){
            return true;
          }
        }
       return false;
    }
};