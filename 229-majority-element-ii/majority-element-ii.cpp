class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        if(nums.size()<=1) return nums;
        int candicate1 = 0 ;
        int candicate2 = 0 ;
        int count1 = 0 ;
        int count2 = 0 ;

        for(auto it : nums){
            if(it == candicate1 ){
                count1++;
            }
            else if(it == candicate2 ){
               count2++;
            }
            else if(count1==0){
                candicate1 = it;
                count1 = 1;
            }
            else if(count2 == 0){
                candicate2 = it;
                count2 = 1;
            }
            else{
                count1--;
                count2--;
            }
        }

        int freq = 0 ;
        int freq2 = 0 ;
        for(auto it : nums){
            if(it == candicate1) freq++;
            if(it == candicate2) freq2++;
        }
        vector<int>ans;

        if (freq> nums.size() / 3)
            ans.push_back(candicate1);

        if (freq2 > nums.size() /3 && candicate1 != candicate2)
            ans.push_back(candicate2);

         return ans;       
    }
};