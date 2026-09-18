class Solution {
    public int majorityElement(int[] nums) {
        int candicate = 0;
        int count = 0 ;

         for(int it : nums){
            if(count==0){
                candicate = it;
            }
            if(candicate == it) {
                count++;
            }
            else{
                 count--;
            }
         }
         return candicate ;
    }
}