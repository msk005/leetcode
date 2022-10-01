class Solution {
public:
    int t[101];
    int helper(int i,string &s)
    {
        if(i>=s.size())
            return 1;
        if(t[i]!=-1)
            return t[i];
        
        int ans=0;
        int op1=s[i]-'0';
         if(op1>0)
        {
            ans+=helper(i+1,s);
        }
        
        int op2=0;
        if(i<s.size()-1)  //iska mtlb 2 character hai string m atleast
        {
            // if()
            // string str=s.substr(i,2);
             op2=op1*10+s[i+1]-'0';
            
        }
       
        if(op1!=0 and op2>0 and op2<=26)
        {
            ans+=helper(i+2,s);
        }
        return t[i]=ans;
        
    }
    int numDecodings(string s) {
     memset(t,-1,sizeof(t));
        return helper(0,s);
    }
};