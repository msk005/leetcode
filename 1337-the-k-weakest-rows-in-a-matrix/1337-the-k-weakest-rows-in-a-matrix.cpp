class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n=mat[0].size();
        for(int i=0; i<mat.size(); i++){
            mat[i].push_back(i);
        }
        sort(mat.begin(), mat.end());
        vector<int> ans(k);
        for(int i=0; i<k; i++){
            ans[i]=mat[i][n];            
        }
        return ans;
    }
};

/*here we are pusihng the index number in each of the matrix[i]
like 
 [1,1,0,0,0,  0],
 [1,1,1,1,0,  1],
 [1,0,0,0,0,  2],
 [1,1,0,0,0,  3],
 [1,1,1,1,1,  4]
 
 now it will sort based on the index wise
 */