class Solution {
public:
    int longestContinuousSubstring(string s) {
        int n=s.length();
        if(n==1)
            return 1;
        int c=1;
        int mx=0;
        for(int i=1;i<n;i++)
        {
            if(s[i]-'0'==(s[i-1]-'0'+1))
                c++;
            else
            {   
                
                 c=1;
            }
            mx=max(mx,c);
        }
        
        return mx;
    }
};