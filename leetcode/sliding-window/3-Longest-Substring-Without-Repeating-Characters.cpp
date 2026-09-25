class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       vector<long long> v(256,-1);
       long long l=0;
       long long n=s.size();
       long long r=0;
       long long ans=0;
       for( long long i=0;i<n;i++){
         if(v[s[i]]!=-1){
            l=max(l,v[s[i]]+1);
         }
          v[s[i]]=i;
          ans=max(ans,i-l+1);
       }
      return ans;
    }
};