class Solution
{
    public:

        int dp[1001][1001];
    int help(int i, vector<int> &M, vector<int> &nums, int s)
    {

        if (i == M.size())
            return 0;

        if (dp[i][s] != INT_MIN)
            return dp[i][s];

        int e = nums.size() - (i - s) - 1;

        int op1 = M[i] *nums[s] + help(i + 1, M, nums, s + 1);
        int op2 = M[i] *nums[e] + help(i + 1, M, nums, s);

        return dp[i][s] = max(op1, op2);
    }
    int maximumScore(vector<int> &nums, vector<int> &M)
    {

      for(int i=0;i<1001;i++)
      {
          for(int j=0;j<1001;j++)
              dp[i][j]=INT_MIN;
      }
        return help(0, M, nums, 0);
    }
};