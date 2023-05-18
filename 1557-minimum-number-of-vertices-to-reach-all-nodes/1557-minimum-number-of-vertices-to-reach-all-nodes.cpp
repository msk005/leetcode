class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        
        vector<bool>income(n, 0);
        
        for (vector<int>& edge : edges) 
           income[edge[1]] = 1;
        
        
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            
            if (!income[i]) {
                ans.push_back(i);
            }
        }
        
        return ans;
    }
};