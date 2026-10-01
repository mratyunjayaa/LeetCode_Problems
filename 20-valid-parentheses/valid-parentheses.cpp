class Solution {
public:
    bool isValid(string s) {
        stack<char> St;
        for (int i =0 ; i<s.size();i++)
        {
            if(s[i]=='('|| s[i]=='{'||s[i]=='[' )
            {
             St.push(s[i]);
            }
            else
            {
                if (St.empty()) return 0;

                else if (s[i]==')')
                {
                    if(St.top()!='(')
                    return 0;

                    else
                    St.pop();
                }
                else if (s[i]=='}')
                {
                    if(St.top()!='{')
                    return 0;

                    else
                    St.pop();
                }
                else 
                {
                    if(St.top()!='[')
                    return 0;

                    else
                    St.pop();
                }
 
            }
        }  
    return St.empty();
    }
};