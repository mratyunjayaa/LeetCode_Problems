class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        if(nums.size() < 2) return true ;
        int low = 0 , high = nums.size()-1 , count = 0 ;
        int mid = (low + high) / 2 ;
        for(auto x : nums) {
            if(nums[mid]==x){
                count++;
            }
        }
        return count == 1 ? true : false ;
    }
};