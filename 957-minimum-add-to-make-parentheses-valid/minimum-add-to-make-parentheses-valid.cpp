class Solution {
public:
    int minAddToMakeValid(string s) {
       int count =0;
       stack<char>St;
       for (int i=0;i<s.size();i++)
       {
        if(s[i]=='(')
         St.push(s[i]);

        else 
        {
            if (St.empty())
            count++;

            else 
            St.pop();
        }
       } 
       return St.size() + count ;
    }
};