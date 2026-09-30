class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if (s.size() < p.size()) return {};

        unordered_map<char, int> freq;
        unordered_map<char, int> freq2;

        for (int i = 0; i < p.size(); i++) {
            freq2[p[i]]++;
        }

        vector<int> v;
        int i = 0, j = 0;

        while (j < s.size()) {
            freq[s[j]]++;

            if (j - i + 1 == p.size()) {
                if (freq == freq2) {
                    v.push_back(i);
                }

                freq[s[i]]--;

                if (freq[s[i]] == 0) {
                    freq.erase(s[i]);
                }

                i++;
            }

            j++;
        }

        return v;
    }
};