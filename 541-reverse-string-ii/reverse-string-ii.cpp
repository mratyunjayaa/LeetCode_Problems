class Solution {
public:
    string reverseStr(string s, int k) {
        for (int i = 0; i < s.size(); i += 2 * k) {
            int low = i, high = min(i + k - 1, (int)s.size() - 1);
            while (low < high) {
                swap(s[low], s[high]);
                low++, high--;
            }
        }
        return s;
    }
};