class Solution {
public:
    int longestMountain(vector<int>& v) {
        int n = v.size();
        int max = 0;
        for (int i =1;i<n-1;) {
            if (v[i-1]<v[i]&&v[i]>v[i+1]) {
                int l=i;
                int r=i;
                while (l>0 && v[l-1]<v[l]) {
                    l--;
                }
                while (r<n-1 && v[r+1]<v[r]) {
                    r++;
                }
                max =std::max(max,r-l+1);
                i=r;
            } else {
                i++;
            }
        }
        return max;
    }
};