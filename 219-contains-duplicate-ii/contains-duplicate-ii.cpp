class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mp;

        int i = 0, j = 0;

        while(j < nums.size()) {

            mp[nums[j]]++;

            while(j - i + 1 > k + 1) {
                mp[nums[i]]--;

                if(mp[nums[i]] == 0)
                    mp.erase(nums[i]);

                i++;
            }

            if(mp[nums[j]] > 1)
                return true;

            j++;
        }

        return false;
    }
};