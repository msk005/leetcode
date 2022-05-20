class Solution {
public:
   int t[101][101];
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        memset(t,-1,sizeof(t));
        
        int i,j;
        i=j=0;
        return solve(obstacleGrid,i,j);
            
            
    }
    
    
   int solve(vector<vector<int>>& arr, int i, int j)
    {
        int n=arr.size();
        int m=arr[0].size();
        
        if(i>=n or j>=m  or arr[i][j]==1)
            return 0;
        
        if(i==n-1 and j==m-1)
            return 1;
        
        int right,bottom;
        right=bottom=0;
        
        if(t[i][j]!=-1)
            return t[i][j];
        
        if(t[i][j+1]!=-1)
            right=t[i][j+1];
        
        else
        {
            right=solve(arr,i,j+1);
             t[i][j+1]=right;
        }
       
       if(t[i+1][j]!=-1)
           bottom=t[i+1][j];
       else
       {
           bottom=solve(arr,i+1,j);
           t[i+1][j]=bottom;
       }
        
       int temp= t[i][j+1]+t[i+1][j];
        
//         int temp=solve(arr,i+1,j)+solve(arr,i,j+1);
       return t[i][j]=temp;
      
        
    }
};