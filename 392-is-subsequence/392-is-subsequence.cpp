class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.length();
        int m=t.length();
        int c=0;
        for(int i=0,j=0;i<n and j<m ;)
        {
            if(s[i]==t[j])
            {c++;
                i++,j++;}
            else
                j++;
        }
        
        if(c==n)
            return true;
        
        
        return false;
    }
};