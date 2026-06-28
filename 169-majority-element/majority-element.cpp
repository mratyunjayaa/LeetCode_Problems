class Solution {
public:
    // moore voting algorithm
    int majorityElement(vector<int>& nums) {

        int n = nums.size();
        int elem, count = 0;
        for (int i = 0; i < n; i++) {
            if (count == 0) {
                count = 1;
                elem = nums[i];
            } else if (nums[i] == elem) {
                count++;
            } else
                count--;
        }

        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (elem == nums[i])
                cnt++;
        }
        if (cnt > n/2)
            return elem;

        return -1;
    }
};