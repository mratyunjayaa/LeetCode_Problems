class Solution {
private:
    int lower(vector<int> nums, int target) {
        int low = 0, high = nums.size();
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] >= target) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
    int upper(vector<int> nums, int target) {
        int low = 0, high = nums.size();
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] > target) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }

public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int lb = lower(nums, target);
        int ub = upper(nums, target);
        if (lb == nums.size() || nums[lb] != target)
            return {-1, -1};

        return {lb , ub-1} ;
    }
};