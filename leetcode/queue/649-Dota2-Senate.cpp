class Solution {
public:
    string predictPartyVictory(string s) {
      int cr=0; // abhi string me kitne d aur r present hai 
      int cd=0;
      queue<char>q;
      for(int i=0;i<s.size();i++){
        if(s[i]=='D') cd++;
        if(s[i]=='R') cr++;
       q.push(s[i]);
      }
       int R=0;
        int D=0;

        while (!q.empty() && cr>0 && cd>0) {
            char ch = q.front();
            q.pop();
            if(ch == 'R') {
                if (R>0) {
                    R--;
                    cr--;
                }
                else {
                    D++;
                    q.push('R');
                }
            }
            else {
                if( D> 0) {
                    D--;
                    cd--;
                }
                else {
                    R++;
                    q.push('D');
                }
            }
        }

        if (cr == 0) return "Dire";
        return "Radiant";


    }
};