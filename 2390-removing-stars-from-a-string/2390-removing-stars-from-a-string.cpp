class Solution {
public:
    string removeStars(string s) {
        stack<char>stk;
        
        for(int i=0;i<s.length();i++)
        {
           if(stk.size()==0)
           {
               stk.push(s[i]);
           }
            
            else if(stk.size()>0 and s[i]!='*')
            {
                stk.push(s[i]);
            }
            
            else if(stk.size()>0 and s[i]=='*')
            {
                stk.pop();
            }
        }
        
        string str="";
        while(!stk.empty())
        {
            str+=stk.top();
            stk.pop();
        }
        
       reverse(str.begin(),str.end());
        
        return str;
    }
};