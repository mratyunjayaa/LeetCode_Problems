class Solution {
    private:
    bool isVowel(char c){
        return (c == 'a' || c =='e' || c=='i' || c == 'o' || c == 'u') ;
    }
public:
    int maxVowels(string s, int k) {
        
        int maxVowel = 0;
        int i = 0, j = 0;
        int vowelCount = 0;

        while (j < s.size()) {

            if (isVowel(s[j])) {
                vowelCount++;
            }

            if (j - i + 1 == k) {

                maxVowel = max(maxVowel, vowelCount);

        
                if (isVowel(s[i])) {
                    vowelCount--;
                }

                i++;
            }

            j++;
        }

        return maxVowel;
    }
};