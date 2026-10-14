class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& v) {
        vector<int>ans;
        stack<int>st;
        int n=v.size();
        for (int i =n-1;i>=0;i--) {
            st.push(v[i]);
        }

        
        for(int i=n-1;i>=0;i--){
                   while(st.size()>0 && st.top()<=v[i]){
                    st.pop();
                   }
                  if(st.size()==0)ans.push_back(-1);
                 else ans.push_back(st.top());
            
               st.push(v[i]);
               }
               reverse(ans.begin(),ans.end());
               return ans;
            }
};