class Solution {
public:
    bool search(vector<int>& nums, int target) {
        //Brute FOrce
        for(int i = 0  ; i < nums.size() ; i++){
            if(nums[i]==target){
                return true ;
            }
        }
        return false ;
    }
};