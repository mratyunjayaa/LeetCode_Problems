class Solution {
public:
    int mySqrt(int x) {
        // Optiamal Binary Search 
        if(x==0) return 0 ;
        long long ans = 1 ; 
        int low = 0 , high = x ;
        while(low<=high){
            long long mid = low + (high - low ) / 2 ;
            long long val = mid * mid ;
            if(val <= x){
                low = mid + 1 ;
            }
            else{
                high = mid -1 ;
            }
        }
        return high  ;
    }
};