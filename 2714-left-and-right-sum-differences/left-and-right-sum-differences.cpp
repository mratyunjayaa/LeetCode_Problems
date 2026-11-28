class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int ts = 0;
        for (auto it : nums)
            ts += it;
        vector<int> ls;
        int lsu = 0;
        for (auto it : nums) {
            ls.push_back(lsu);
            lsu += it;
        }
        vector<int> rs;
        for (int i = 0; i < nums.size(); i++) {
            cout << ts - ls[i] - nums[i] << " ";
            rs.push_back(ts - ls[i] - nums[i]);
        }

        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            ans.push_back(abs(ls[i] - rs[i]));
        }
        return ans;
    }
};