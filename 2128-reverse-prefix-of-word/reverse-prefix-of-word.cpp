class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i = 0 , j = 0 ; 
        while(j < word.size() ){
            if(ch != word[j]) j++;
            if( ch == word[j]) break;
        }
        if(j == word.size()) return word ;
        while(i < j ){
            swap(word[i] , word[j]);
            i++ , j-- ;
        }
        return word;
    }
};