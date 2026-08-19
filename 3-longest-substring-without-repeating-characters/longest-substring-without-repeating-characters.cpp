class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.empty()) return -0 ;

        unordered_map<char,int> freq;

        int i = 0 , ans = 0 ;

        for(int j = 0 ; j < s.size() ; j++){

            freq[s[j]]++;

            while(freq.size() != j - i + 1){
                freq[s[i]]--;

                if(freq[s[i]]==0) freq.erase(s[i]);

                i++;
            }
            ans = max(ans , j - i + 1);
        }
        return ans;
    }
};