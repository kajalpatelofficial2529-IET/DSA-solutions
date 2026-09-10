class Solution {
public:
    int longestConsecutive(vector<int>& d) {
       if(!d.size())
            return 0;
        int l = 1;
        int r = 0;
        sort(d.begin(), d.end());
        for(int i = 1; i < d.size(); ++i){
            if(d[i - 1] + 1 == d[i]){
                l++;
            }else if(d[i - 1] != d[i]){
                r = max(r, l);
                l = 1;
            }
        }

        return max(l, r);

    }
};