class Solution {
    public int minMoves2(int[] nums) {
        Arrays.sort(nums);

        int mid = nums[nums.length/2];

        int count = 0 ; 
         for(int it : nums){
            count+= Math.abs(mid - it);
         }
        return count;
    }
}