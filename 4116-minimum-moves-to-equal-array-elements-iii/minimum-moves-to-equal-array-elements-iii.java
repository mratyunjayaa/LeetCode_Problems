class Solution {
    public int minMoves(int[] nums) {
        int max = 0 ;
        for(int it : nums){
            max = Math.max(max, it);
        }
        int count = 0 ;

        // int last = nums.length-1;

        for(int it : nums){
            count+= max-it;
            // System.out.println(count);
        }
        return count;
    }
}