class Solution {
public:
 void helper(vector<vector<char>>& grid,int i,int j,int m,int n)
    {
        if(i<0 || i>=m || j<0 || j>=n || grid[i][j]!='1')
            return ;
     
     
         grid[i][j]='10';
        
        helper(grid,i+1,j,m,n);
       helper(grid,i-1,j,m,n);
     helper(grid,i,j+1,m,n);
     helper(grid,i,j-1,m,n);
            
        
    }
    
    
    
    
    int numIslands(vector<vector<char>>& grid) {
        
        int m=grid.size();  
        int n=grid[0].size();
       
        if(m==0 )                    
            return 0;
        
        
        
        int island=0;
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]=='1')
                {   
                  island++;
                   helper(grid,i,j,m,n); 
                     
                    
                }
            }
        }
        return island;
        
        
    }
    
    
    
   
};