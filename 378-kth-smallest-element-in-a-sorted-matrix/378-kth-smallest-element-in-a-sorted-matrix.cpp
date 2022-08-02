class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n=matrix.size();
        int m=matrix[0].size();
        
        if(n==1)
            return matrix[0][0];
        
        vector<int>v;
        
        for(int i=0;i<n;i++)
        {
              for(int j=0;j<m;j++)
              {
                  v.push_back(matrix[i][j]);
              }
         
        }
        for(auto x:v)
            cout<<x;
        sort(v.begin(),v.end());
        return v[k-1];
    }
};