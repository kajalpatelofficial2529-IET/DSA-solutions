class Solution {
public:
    bool canJump(vector<int>& v){
        int n=v.size();
          int power=v[0];
        for(int i=0;i<n-1;i++){
           power=max(power,v[i]);
         
           if(power==0){
            return false;
           }
           
             power--;
        }
        
        return true;
    }
};