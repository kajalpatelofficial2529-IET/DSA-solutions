class Solution {
public:
     int fn(int n){
        if( n==1){
            return 0;
        }
        if(n%2!=0 || n<=0){
            return 1;
        }
        
        return fn(n/2);
     }
    bool isPowerOfTwo(int n) {
     int x=fn(n);
     if(x==0)return true;
     else return false;
    }
};