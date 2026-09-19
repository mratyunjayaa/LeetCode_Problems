class Solution {
public:
    string toLowerCase(string s) {
        string str = "";
        for(auto x : s) str+=tolower(x);
        return str;
    }
};