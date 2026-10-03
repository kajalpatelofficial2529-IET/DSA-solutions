class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
       vector<int>v(26,0);
       int ans=0;
        for(char c:tasks){
            v[c-'A']++;
        }

        for(int i=0;i<26;i++){
            ans=max(ans,v[i]);
        }
           int count=0;
        for(int i=0;i<26;i++){
           if(v[i]==ans)count++;
        }

      int a=tasks.size();
      int b=((ans-1)*(n+1));
      b+=count;

     return max(a,b);
    }
};