class Solution {
public:
    int M=1e9+7;
    int t[51][51][51];
    
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
      
        memset(t,-1,sizeof(t));
        
        return dfs(m,n,startRow,startColumn,maxMove);
    }
    
    int dfs(int m, int n, int i, int j, int moves){
        if(i<0 || i>=m || j<0 || j>=n)
            return 1;
        
        else if(moves==0) 
            return 0;
        
        if(t[i][j][moves]!=-1) 
            return t[i][j][moves];
        
        int top=dfs(m,n,i-1,j,moves-1);
        int right=dfs(m,n,i,j+1,moves-1);
        int bottom=dfs(m,n,i+1,j,moves-1);
        int left=dfs(m,n,i,j-1,moves-1);
        
        return t[i][j][moves]=((top+right)%M + (bottom+left)%M)%M;
    }
};