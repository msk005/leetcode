class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
       int c=0;
        int m=grid.size();
        int n=grid[0].size();
       
        int h=m-1;
        int l=0;
        
        while(h>=0&&h<m &&l>=0&&l<n)
        {
            if(grid[h][l]<0)
            {
                c+=n-l;
                h=h-1;
                
            }
            else
                l=l+1;
                
        }
        return c;
    }
};