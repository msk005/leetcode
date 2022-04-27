class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size();
        int n=mat[0].size();
          if(m*n>r*c||m*n<r*c)
              return mat;
        
        vector<int>matrix;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                matrix.push_back(mat[i][j]);
            }
        }
        int k=0;
        vector<vector<int>>ans(r,vector<int>(c,0));
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
              ans[i][j]=matrix[k]; 
                k++;
            }
            
         }
        
        return ans;
    }
};