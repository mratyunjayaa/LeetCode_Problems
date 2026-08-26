class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin() , nums.end()) ;
        unordered_set<double>set;

        int i = 0 , j = nums.size()-1; 
         double avg = 0 ; 

        while(i < j ){
            avg = (nums[i] + nums[j]) / 2.0 ;
            set.insert(avg);
            i++ , j--;
        }
        return set.size();
    }
};