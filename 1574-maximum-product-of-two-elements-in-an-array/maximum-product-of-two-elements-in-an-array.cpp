class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if (nums.size() < 2)
            return -1;
        int big = INT_MIN ;
        int secondBig = INT_MIN ; 
        for(auto x : nums ){
            if(x > big){
                secondBig = big ;
                big = x;
            }
            else if(secondBig < x ){
                secondBig = x ;
            }
        }
        return (secondBig -1) * (big - 1 ); 
    }
};