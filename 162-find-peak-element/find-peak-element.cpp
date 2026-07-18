class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size(),low = 0, high = n;
        if (n == 0)
            return -1;
        if (n == 1)
            return 0;
        if (nums[0] > nums[1])
            return 0;
        if (nums[n - 1] > nums[n - 2])
            return n - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]){
                return mid ;
            }
            else if(nums[mid] < nums[mid+1]){
                low = mid+1;
            }
            else{
                high = mid ;
            }
        }
        return -1 ;
    }
};