class Solution {
    public int[] leftRightDifference(int[] nums) {
        int ts = 0;
        for(Integer it : nums) ts+=it;
        int ls = 0 ;
        int[] ans = new int[nums.length] ; 
        for(int i = 0 ; i < nums.length ; i++){
            int rs = ts-ls-nums[i];
             ans[i] = Math.abs(ls-rs);
             ls+=nums[i];
        }
        return ans;
    }
}