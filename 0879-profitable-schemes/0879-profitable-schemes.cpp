
class Solution {
public:
    int MOD = 1e9 + 7;
    int solve(vector<int>& group, vector<int>& profit, int i, int n, int minProfit, vector<vector<vector<int>>> &dp){
        
        //No Crime/Criminal Left Check MinProfit Left
        if(i==group.size() or n<=0) 
            return !minProfit;
        if(dp[i][n][minProfit] != -1) 
            return dp[i][n][minProfit];
        
        int pick = 0, skip = 0;
        if(group[i] <= n) 
            pick = solve(group, profit, i+1, n-group[i], max(0, minProfit-profit[i]), dp);
        skip = solve(group, profit, i+1, n, minProfit, dp);
        
        return dp[i][n][minProfit] = (pick + skip) % MOD;        
    }
    
    int profitableSchemes(int n, int minProfit, vector<int>& group, vector<int>& profit) {
        int size = group.size();
        vector<vector<vector<int>>> dp(size + 1, vector<vector<int>>(n+1, vector<int>(minProfit + 1, -1)));
        return solve(group, profit, 0, n, minProfit, dp);
    }
};