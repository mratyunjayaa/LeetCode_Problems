class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(auto str : words){
            int i = 0  , j = str.size()-1;
            while(i<j){
                if(str[i] == str[j]){
                    i++ , j--;
                } else break ;
            }
            if(i>=j) return str;
        }
        return "";
    }
};