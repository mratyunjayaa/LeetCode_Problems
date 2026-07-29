class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i = 1 ; i < nums.size() ; i++){
            if(nums[i]==nums[i-1]){
                return nums[i];
            }
        }
        return -1;
    }
};
        // int low = 0, n = nums.size(), high = n - 1;
        // if (n < 2)
        //     return -1;
        // if (nums[0] == nums[1])
        //     return nums[0];
        // if (nums[n - 1] == nums[n - 2])
        //     return nums[n - 1];
        // while (low <= high) {
        //     int mid = low + (high - low) / 2;
        //     if ((mid > 0 && nums[mid] == nums[mid - 1]) ||
        //         (mid < n - 1 && nums[mid] == nums[mid + 1]))
        //         return nums[mid];
        // }