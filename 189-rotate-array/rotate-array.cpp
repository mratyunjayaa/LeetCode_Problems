class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;

        vector<int> temp;

        // Store Last Elemts 
        for (int i = n - k; i < n; i++) {
            temp.push_back(nums[i]);
        }

        // Shift Left
        for (int i = n - k - 1; i >= 0; i--) {
            nums[i + k] = nums[i];
        }

        // Put temp in Starting 
        int j = 0;
        for (int i = 0; i < k; i++) {
            nums[i] = temp[j++];
        }
    }
};