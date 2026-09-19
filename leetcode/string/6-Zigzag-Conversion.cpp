class Solution {
public:
    string convert(string s, int k) {
        if (k<=1 || k>=s.length()) {
            return s;
        }
        vector<string>r(k);
        int dir=1; //up 
        int cr=0;
        for(int i=0;i<s.length();i++){
             r[cr]+=s[i];
            if(cr==0 || cr==k-1){
                dir=1-dir;
                }
               
            if(dir==1){
                    cr-=1;
                }
            else if(dir==0){
                cr+=1;
                }
            }

            for(int i=1;i<k;i++){
                r[0]+=r[i];
            }
        return r[0];
    }
};