class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        if(nums.empty()) return {};
        unordered_map<int , int> mp;
        for(auto it : nums){
            mp[it]++;
        }
        int size = nums.size();
        int maj = size / 3;
       vector<int>Ans;
        for(auto it : mp){
            if(it.second >  maj){
                Ans.push_back(it.first);
            }
        }
        return Ans;
    }
};