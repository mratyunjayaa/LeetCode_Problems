class Solution {
public:
    bool count(unordered_map<char, int>& freq) {
        for(auto it : freq) {
            if(it.second > 0) return false;
        }
        return true;
    }

    string minWindow(string s, string t) {
        if(s.size() < t.size()) return "";

        unordered_map<char, int> freq;

        for(char ch : t)
            freq[ch]++;

        int i = 0, j = 0;
        int mini = INT_MAX, start = 0;

        while(j < s.size()) {
            if(freq.count(s[j]))
                freq[s[j]]--;

            while(count(freq)) {
                if(j - i + 1 < mini) {
                    mini = j - i + 1;
                    start = i;
                }

                if(freq.count(s[i]))
                    freq[s[i]]++;

                i++;
            }

            j++;
        }

        return mini == INT_MAX ? "" : s.substr(start, mini);
    }
};