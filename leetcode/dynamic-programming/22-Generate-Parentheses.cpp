class Solution {
public:
 void seq(vector<string>&ans,int n,int l,int r,string &temp){
    if(l==n && r==n){
        ans.push_back(temp);
        return;
    }
    
        if(l<n){
          temp.push_back('(');
         seq( ans,n,l+1,r,temp); 
          temp.pop_back();
        }
        if(r<l){
        temp.push_back(')');
         seq( ans,n,l,r+1,temp); 
          temp.pop_back();
        }

   }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
       string temp="";
       int l=0;
       int r=0;
       seq( ans,n,l,r,temp); 
       return ans;
    }
};



