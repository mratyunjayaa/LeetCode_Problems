class Solution {
    bool reverse(string& s, int start, int end) {
        while (start < end && !isalnum(s[start]))
            start++;

        while (start < end && !isalnum(s[end]))
            end--;
        if (start >= end)
            return true;
        if (tolower(s[start]) != tolower(s[end]))
            return false;
        return reverse(s, start + 1, end - 1);
    }

public:
    bool isPalindrome(string s) {
        if (reverse(s, 0, s.size() - 1))
            return true;
        return false;
    }
};