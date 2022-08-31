class Solution
{
    public:
        

    void helper(vector<vector < int>> &heights, vector< vector< int>> &oceans, int i, int j, int m, int n)
    {
        if (i < 0 or i > m - 1 or j < 0 or j > n - 1)
            return;

        if (oceans[i][j] == 0)
        {
            oceans[i][j] = 1;

            if (i + 1 < m and heights[i + 1][j] >= heights[i][j])

                helper(heights, oceans, i + 1, j, m, n);
            if (i - 1 >= 0 and heights[i - 1][j] >= heights[i][j])

                helper(heights, oceans, i - 1, j, m, n);
            if (j + 1 < n and heights[i][j + 1] >= heights[i][j])

                helper(heights, oceans, i, j + 1, m, n);
            if (j - 1 >= 0 and heights[i][j - 1] >= heights[i][j])

                helper(heights, oceans, i, j - 1, m, n);
        }
    }
    vector<vector < int>> pacificAtlantic(vector<vector < int>> &heights)
    {
        int m = heights.size();
        int n = heights[0].size();
        
        vector<vector < int>> ans;
        vector<vector < int>> p(m, vector<int> (n, 0));
        vector<vector < int>> a(m, vector<int> (n, 0));

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {

                if (i == 0 or j == 0)
                {
                    if (p[i][j] == 0)
                        helper(heights, p, i, j, m, n);
                }
            }
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == m - 1 or j == n - 1)
                {
                    if (a[i][j] == 0)
                        helper(heights, a, i, j, m, n);
                }
            }
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {

                if (a[i][j] and p[i][j])
                    ans.push_back({ i, j });
            }
        }

        return ans;
    }
};