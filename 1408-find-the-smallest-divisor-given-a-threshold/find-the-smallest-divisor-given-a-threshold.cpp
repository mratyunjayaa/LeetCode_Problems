class Solution {
private:
    int devide(vector<int>& nums, int ans) {
        int dev = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            dev += ceil(double(nums[i]) / double(ans));
        }
        return dev;
    }

public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int high = *max_element(nums.begin(), nums.end());
        int low = 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (devide(nums, mid) <= threshold) {
                high = mid - 1;

            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};