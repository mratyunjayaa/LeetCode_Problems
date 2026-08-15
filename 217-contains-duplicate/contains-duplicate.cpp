class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>hashset;
        for(int i = 0 ; i < nums.size();i++){
            if(hashset.count(nums[i])) return true;
            hashset.insert(nums[i]);
        }
        return false ;
    }
};