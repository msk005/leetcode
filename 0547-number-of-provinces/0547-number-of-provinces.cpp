class Solution {
public:
     int findCircleNum(vector<vector<int>>& M) {
        if (M.empty()) return 0;
        int n = M.size();
        vector<bool> visited(n, false);
        int groups = 0;
        for (int i = 0; i < visited.size(); i++)
        {
            if (!visited[i]) 
            {
               dfs(i, M, visited);
               groups += 1;
             } 
            

            

        }
        return groups;
    }


    void dfs(int i, vector<vector<int>>& M, vector<bool>& visited) {
        visited[i] = true;
        for (int j = 0; j < visited.size(); j++)
        {
            if (i != j && M[i][j] && !visited[j]) 
                dfs(j, M, visited);
            
        }
    }
};
