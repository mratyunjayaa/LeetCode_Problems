class Solution {
    public int minMoves(int[] nums) {
        Arrays.sort(nums);
        int count = 0 ;

        int last = nums.length-1;

        for(int it : nums){
            count+= nums[last]-it;
            // System.out.println(count);
        }
        return count;
    }
}