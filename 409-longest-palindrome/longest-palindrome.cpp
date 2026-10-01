class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mp;
        int count = 0;
        for (auto it : s) {
            mp[it]++;
        }

        cout << mp.size();

        for (auto it : mp) {
            count += ((it.second / 2) * 2);
        }
        if (s.size() > count)
            count++;

        return count;
    }
};