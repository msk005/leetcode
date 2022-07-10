class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
         int n = cost.size();
        int t = 0, t1 = 0, t2 = 0; 
        for (int i = 2; i <= n; i++) {
            int OneStep = t1 + cost[i - 1];  
            int TwoStep = t2 + cost[i - 2]; 
            t = min(OneStep, TwoStep);
            t2 = t1;
            t1 = t;
        }
        return t1; 
    }
};