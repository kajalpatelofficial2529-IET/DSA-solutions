 class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
        int ma=0;
        int mb=0;
        int mc=0;
        int l=0;
        int result=0;
        for(int i=0;i<n;i++){
              if(s[i]=='a')ma++;
              else if(s[i]=='b')mb++;
              else mc++;

        while(ma>0 && mb>0 && mc>0){
                result+=(n-i);
                if(s[l]=='a')ma--;
                else if(s[l]=='b')mb--;
                else mc--;
                l++;
            }

        }
        return result;
    }
};
    