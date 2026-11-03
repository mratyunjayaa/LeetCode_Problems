class Solution {
    public int minMoves(int[] nums) {
        Arrays.sort(nums);
        int count = 0 ;

        int last = nums.length-1;

        for(int i = 0 ; i < last ; i++){
            count+= nums[last]-nums[i];
            System.out.println(count);
        }
        return count;
    }
}