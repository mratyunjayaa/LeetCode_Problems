class Solution {
public:
// sliding window 
    double findMaxAverage(vector<int>& nums, int k) {
         double ans = -1e18;
         int left = 0  ; 
         long long sum = 0 ;
         for(int right = 0  ; right < nums.size() ; right++){
            sum+=nums[right] ; 
            if (right+1 - left == k ){
                ans = max(ans , (double)sum/k);
                sum-=nums[left];
                left++;
            }
         }
         return ans ; 
    }
};