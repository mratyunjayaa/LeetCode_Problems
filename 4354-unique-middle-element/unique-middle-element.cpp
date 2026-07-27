class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        if(nums.size() < 2) return true ;
        int count = 0 ,  mid = nums.size() / 2 ;
        for(auto x : nums) {
            if(nums[mid]==x){
                count++;
            }
        }
        return count == 1 ? true : false ;
    }
};