class Solution {
public:
    int reverse(int x) {
        long long y=1;
        if(x<0){
            y=-1;
        }
         string s = to_string(x);

        if(x < 0) {
            s.erase(0, 1);
        }

       for(int i = 0, j = s.size() - 1; i < j; i++, j--) {
       swap(s[i], s[j]);
       }
       long long n = stoll(s);
        n=n*y;
          if (n < INT_MIN || n > INT_MAX)
            return 0;
            else return n;
    }
};