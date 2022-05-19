class Solution {
public:
     int t[201][201];
      int N,M;
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int n=matrix.size();
          if(n==0)
              return 0;
        int m=matrix[0].size();
          
        N=n;
        M=m;
        memset(t,-1,sizeof(t));
        int res=0;
          for(int i=0;i<n;i++)
          {
              for(int j=0;j<m;j++)
              {
                  
                  res=max(res,dfs(i,j,matrix));
                  
              }
          }
        
        
        return res;
            
    }
    
    int dfs(int x,int y,vector<vector<int>>& matrix )
    {
        if(t[x][y]!=-1)
            return t[x][y];
        
        vector<vector<int>>dir={{-1,0},{1,0},{0,-1},{0,1}};
        int ans=1;
        
        for(int k=0;k<4;k++)
        {
            int X=x+dir[k][0];
            int Y=y+dir[k][1];
            
            if(X<0 || X>=N || Y<0 ||Y>=M  ||  matrix[X][Y]<=matrix[x][y])
                continue;
            
            ans=max(ans,1+dfs(X,Y,matrix));
                
        }
        return t[x][y]=ans;
    }
    
};