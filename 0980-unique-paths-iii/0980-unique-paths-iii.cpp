class Solution {
public:
    int dfs(int i,int j,int n, int m, int &c, int cnt,vector<vector<int>> &grid)
    {
        if(i<0 or j<0 or i>=n or j>=m or grid[i][j]==-1 or grid[i][j]==3)
            return 0;
        
        
        
        if(grid[i][j]==2)
        {
            if(cnt-1==c)
                return 1;
            
            return 0;
        }
       grid[i][j]=3;
        
        
        int u = dfs(i-1,j,n,m,c,cnt+1,grid);
        int d = dfs(i+1,j,n,m,c,cnt+1,grid);
        int l = dfs(i,j-1,n,m,c,cnt+1,grid);
        int r = dfs(i,j+1,n,m,c,cnt+1,grid);
        
        grid[i][j]=0;
        
        return u+l+r+d;
        
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        
        
        int strt, end;
        int c=0;
        
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    strt=i;
                    end=j;
                }
            
        
        
               if(grid[i][j]==0)
               {
                   c++;
               }
         }
      }
        
        return dfs(strt,end,n,m,c,0,grid);
        
    }
};