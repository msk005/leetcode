class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int l=4;
        int n=mat.size();
        
        
        
        while(l--)
        {
          if(mat==target)
              return true;
            
        for(int i=0;i<n;i++)
         {
            for(int j=i+1;j<n;j++)
            {
               swap(mat[i][j],mat[j][i]);
            }
         }
            
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n/2;j++)
                {
                    swap(mat[i][j],mat[i][n-j-1]);
                }
            }
            
        }
        
        return false;
    }
};