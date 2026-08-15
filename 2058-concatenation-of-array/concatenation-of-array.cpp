class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> v;
        int i = 0;
        while (i != 2) {
            for (auto it : nums) {
                v.push_back(it);
            }
            i++;
        }
        return v;
    }
};