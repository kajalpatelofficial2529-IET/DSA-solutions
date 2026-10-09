class Solution {
public:
    int numRescueBoats(vector<int>& p, int limit) {
      sort(p.begin(),p.end());  
      int n=p.size();
      int l=0;
      int r=n-1;
      int count=0;
      while(l<=r){
        if(p[l]+p[r]<=limit){
            count++;
            l++;
            r--;
        }
        else {
            count++;
            r--;
        }
      }
    return count;
    }
};