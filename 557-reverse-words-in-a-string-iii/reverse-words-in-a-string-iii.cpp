class Solution {
public:
    string reverseWords(string s) {
           int  k = 0 ;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] ==' '){
                int j = i -1 ;
                while(k < j ){
                    swap(s[k] , s[j]);
                    k++ ; j--;
                }
                k = i+1;
            }
        }

        int j = s.size()-1 ;
        while( k < j ){
            swap(s[k] , s[j]);
            k++ , j--;
        }
        return s;
    }
};