class Solution {
    public int pivotIndex(int[] nums) {
        int totalSum = 0 ;
        for(int it : nums) totalSum+=it;

        int leftSum=0;

        for(int i = 0 ; i < nums.length; i++){
            int rightSum = totalSum - leftSum - nums[i];
            if(leftSum ==rightSum) return i;
            leftSum+=nums[i];
        }
        return -1;
    }
}