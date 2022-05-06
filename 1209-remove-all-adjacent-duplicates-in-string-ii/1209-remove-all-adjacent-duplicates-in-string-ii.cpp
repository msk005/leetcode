class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>stk;
        for(int i=0;i<s.length();i++)
        {
            if(stk.empty() or s[i]!=stk.top().first )
                stk.push({s[i],1});
            
            else
            {
                auto prevtop=stk.top();
                stk.pop();
                stk.push({s[i],prevtop.second+1});
            }
            if(stk.top().second==k)
                stk.pop();
        }
        
        string ans = "";
        while(!stk.empty()){
            auto cur = stk.top();
            stk.pop();
            while(cur.second--){
                ans.push_back(cur.first);
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};