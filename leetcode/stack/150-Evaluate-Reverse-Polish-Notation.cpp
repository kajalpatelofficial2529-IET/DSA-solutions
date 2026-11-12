class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        for(auto a:tokens){
            if(a=="+"){
              int k=s.top();
              s.pop();
              int p=s.top();
              s.pop();
              int sum=k+p;
              s.push(sum);
            }
           else if(a=="-"){
            int k=s.top();
              s.pop();
              int p=s.top();
              s.pop();
              int sum=p-k;
              s.push(sum);
            }

              else if(a=="*"){
            int k=s.top();
              s.pop();
              int p=s.top();
              s.pop();
              int sum=p*k;
              s.push(sum);
            }
              else if(a=="/"){
            int k=s.top();
              s.pop();
              int p=s.top();
              s.pop();
              int sum=p/k;
              s.push(sum);
            }

            else{
                int e=stoi(a);
                s.push(e);
            }
        }
        return s.top();
    }
};