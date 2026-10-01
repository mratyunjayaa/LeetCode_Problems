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
           if(it.second%2==0){
            count+=it.second;
           }
           else if(it.second > 1 ){
            count+=it.second-1;
           }
        }
        if (s.size() > count)
            count++;

        return count;
    }
};