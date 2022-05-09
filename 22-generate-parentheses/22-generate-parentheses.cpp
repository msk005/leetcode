class Solution {
public:
    vector<string>v;
    vector<string> generateParenthesis(int n) {
        int open,close;
        open=close=n;
        string op="";
        solve(open,close,op);
        return v;
    }
    
    void solve(int open, int close, string op)
    {
        if(open==0 and close==0)
        {
            v.push_back(op);
            return ;
        }
        
        if(open!=0)
        {
            string op1=op;
            op1.push_back('(');
            solve(open-1,close,op1);
        }
        if(close>open)
        {
            string op2=op;
            op2.push_back(')');
            solve(open,close-1,op2);
        }
        return ;
    }
};