class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int ans=0;
        string s=to_string(num);
        string sum="";
        for(int i=0;i<k;i++){
         sum+=s[i];
       } 
       int x=stoi(sum);
      if(  x!=0 && num%x==0)ans++;
       for(int i=k;i<s.size();i++){
           x-= (s[i-k]-'0')*pow(10,k-1);
           sum=to_string(x);
           sum+=s[i];
           x=stoi(sum);
            if(  x!=0 && num%x==0)ans++;
       }
       return ans;
    }
};