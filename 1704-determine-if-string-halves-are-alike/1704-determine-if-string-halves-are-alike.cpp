class Solution {
public:
    bool halvesAreAlike(string s) {
    
        int v1=0,v2=0;
        int n=s.size()/2;
        for(int i=0;i<n;i++)
        {
            char c=tolower(s[i]);
            if(c=='a' || c=='e' || c=='o' || c=='i' || c=='u')
            {
                v1++;
            }
           
        }
        
        for(int i=2*n-1;i>=n;i--)
        {
            char c=tolower(s[i]);
            if(c=='a' || c=='e' || c=='o' || c=='i' || c=='u')
               v2++;
            
            
        }
        
        
        if(v1==v2)
        return true;
        
        else
            return false;
    }
};