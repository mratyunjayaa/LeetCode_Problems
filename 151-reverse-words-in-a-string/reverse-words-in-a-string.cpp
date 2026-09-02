class Solution {
public:
    string reverseWords(string s) {
        if(s.size() ==0 ) return " ";
        int j = s.size()-1;

        string result = "";

        while(j>=0){

            while(j>=0 && s[j]==' ') j--;

           if(j<0) break;

            int end = j ;

            while(j>=0 && s[j]!= ' ') j--;

            int start = j+1;
            if(!result.empty()) result+=' ';

            result+= s.substr(start , end - start + 1 );
        }
        return result;
    }
};