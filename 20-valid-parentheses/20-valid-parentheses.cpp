class Solution {
public:
    bool isValid(string s) {
        stack <char>stack;
        int f=0;
        for(int i=0;i<s.size();i++)
        {
            if((s[i]=='(')||(s[i]=='{')||(s[i]=='['))
            {
            stack.push(s[i]);
            continue;
            }
            
            else if(!stack.empty())
            {
                char x= stack.top();
                  stack.pop();
                if((s[i]==')' && x=='(')||(s[i]=='}' && x=='{')||(s[i]==']' && x=='['))
                {
                   continue;
                  
                }
                
                else
                    return false;
            }
            else
                return false;
        }
        
        if(!stack.empty())
            return false;
        
        return true;
    }
};