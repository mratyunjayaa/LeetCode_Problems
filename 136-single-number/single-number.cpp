class Solution {
public:
    int singleNumber(vector<int>& nums) {
      
       int x_or = 0 ;
       for (int num : nums)
       {
        x_or ^= num ; 
       }
       return x_or ;    
    }
};