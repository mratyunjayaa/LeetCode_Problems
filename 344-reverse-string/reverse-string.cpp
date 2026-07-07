class Solution {
void reverse (vector<char>&s , int start , int end ){
    if(start>=end) return ;
    swap(s[start],s[end]) ;
    reverse(s, start+1 , end-1);
}
public:
// recursion 
    void reverseString(vector<char>& s) {
        int size = s.size()-1 ;

        reverse(s,0,size);
    }
};