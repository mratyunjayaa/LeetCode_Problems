class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size())
            return false;

        unordered_map<char, int> freq;

        for (char c : s1)
            freq[c]++;

        int k = s1.size();

        for (int i = 0; i < s2.size(); i++) {
            if (freq.find(s2[i]) != freq.end())
                freq[s2[i]]--;

            if (i >= k) {
                if (freq.find(s2[i - k]) != freq.end())
                    freq[s2[i - k]]++;
            }

            bool found = true;

            for (auto it : freq) {
                if (it.second != 0) {
                    found = false;
                    break;
                }
            }

            if (found)
                return true;
        }

        return false;
    }
};