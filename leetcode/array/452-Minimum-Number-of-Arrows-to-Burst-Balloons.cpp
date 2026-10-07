class Solution {
public:
     static bool comp(vector<int>&a,vector<int>&b){
        return a[1]<b[1];
     }
    int findMinArrowShots(vector<vector<int>>& i) {
          sort(i.begin(), i.end(), comp);
        int n=i.size();
        int te=i[0][1];
        int count=1;
        for(int j=1;j<n;j++){
            if(i[j][0]>te){
                count++;
                te=max(te,i[j][1]);
            }
        }
        return count;
    }
};