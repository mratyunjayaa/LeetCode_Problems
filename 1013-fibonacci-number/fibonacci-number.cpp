class Solution {
public:
    int fib(int n) {
        int t1 = 0 , t2 = 1 ;
        if(n<= 1) return n ;
        int res = 0 ;
        for(int j = 2 ; j <= n ; j++){
             res = t1+t2;
             t1 = t2;
             t2 = res;
        }
        return res;
    }
};