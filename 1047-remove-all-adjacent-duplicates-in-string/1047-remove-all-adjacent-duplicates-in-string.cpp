class Solution {
public:
    string removeDuplicates(string s) {
        stack <char>stack;
        string str;
        stack.push(s[0]);
        for(int i=1;i<s.size();i++)
        {
        
            
            if(!stack.empty() and s[i]==stack.top())
                stack.pop();
            else
            {
                stack.push(s[i]);
            
            }
        }
        while(!stack.empty())
        {
            str+=stack.top();
            stack.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
};