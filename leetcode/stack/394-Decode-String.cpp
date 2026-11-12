class Solution {
public:
    string decodeString(string s) {
        stack<string>st;
        int n=s.size();
        int i=0;
          while(i<n){
             string temp="";
            if(s[i]>='a'&& s[i]<='z'){
             while( i<n && s[i]>='a'&& s[i]<='z'){
              temp+=s[i];
              i++;
             }
             st.push(temp);
            }


            else if(s[i]>='0' && s[i]<='9'){
               while( i<n && s[i]>='0' && s[i]<='9') {
                temp+=s[i];
                i++;
               }
               st.push(temp);
        
            }


            else if(s[i]=='['){
                 i++;
            }

            else if(s[i]==']'  && !st.empty() ){
                i++;
                string strr="";
                string k=st.top();
             while(!st.empty() && !( k[0]>='0' && k[0]<='9' ) ){
                strr=st.top()+strr;
                st.pop();
                 if(!st.empty()) {
                 k = st.top();
               }
             }

             int x=stoi(st.top());
             st.pop();

             string t3="";
             while(x--){
                t3+=strr;
             }
               
               st.push(t3);
              }
            
        }
    string ans="";
    while(!st.empty()){
        ans=st.top()+ans;
        st.pop();
    }
    return ans;
    }
};