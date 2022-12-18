class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        int n=t.size();
        
        stack<int>stk;
        vector<int>ans(n,0);
        // stk.push(t[0]);
        
        for(int i=n-1;i>=0;i--)
        {
        while(!stk.empty() and t[stk.top()]<=t[i])
            stk.pop();
            
        
            if(!stk.empty())
                ans[i]=stk.top()-i;
            
            stk.push(i);
            
        }
        
        return ans;
    }
};