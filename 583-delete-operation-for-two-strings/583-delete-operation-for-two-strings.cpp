class Solution {
public:
    int t[501][501];
    int minDistance(string word1, string word2) {
        memset(t,-1,sizeof(t));
        int n=word1.length();
        int m=word2.length();
        int ans=lcs(word1,word2,n,m);
        return n+m-2*ans;
    }
    
    int lcs(string a,string b, int n, int m)
    {
        if(m==0 or n==0)
            return 0;
        
        if(t[n][m]!=-1)
            return t[n][m];
        
        else
        {
            if(a[n-1]==b[m-1])
              return  t[n][m]=1+lcs(a,b,n-1,m-1);
            
            else
               return t[n][m]=max(lcs(a,b,n,m-1),lcs(a,b,n-1,m));
        }
    }
};