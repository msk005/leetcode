class Solution {
public:
    string simplifyPath(string path) {
       stack <string> stk;
        for(int i = 0;i<path.length();i++)
        {
            if(path[i] == '/')
                continue;
            string str;
            while(i<path.size() && path[i] != '/')
            {
                str += path[i];
                i++;
            }
            if(str == ".")
                continue;
            else if(str == "..")
            {
                if(!stk.empty())
                    stk.pop();
            }
            else
                stk.push(str);
        }
        string res;
        while(!stk.empty())
        {
            res = "/" + stk.top() + res;
            stk.pop();
        }
        if(res.size() == 0)
            return "/";
        return res;
      
    }
};