class Solution {
public:
    
    int t[1001][1001];
    int countSubstrings(string s) {
         int n= s.length();
        
        memset(t,-1,sizeof(t));
        
      
        
        int c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
               c+=solve(s,i,j); 
            }
        }
        return c;
    }
    
    
    int solve(string s,int i,int j)
    {
        int n=s.length();
        if(i>=j)
            return 1;
        if(t[i][j]!=-1)
            return t[i][j];
        
        if(s[i]==s[j])
            return t[i][j]=solve(s,i+1,j-1);
        else
            return t[i][j]=0;
            
    }
};