class Solution {
public:
   
    int t[100][100][21];
    
    const int MAX = 1000001;
    
    int solve(vector<int>& houses, vector<vector<int>>& cost, int m, int n, int target, int i, int cnt, int prev) {
        if (i == m) 
        {
            // If all houses are traversed, check if the neighbor count is as expected or not
            if(cnt == target)
            return  0 ;
            
            else return MAX;
        }
        
        if (cnt > target) 
        {
           
            return MAX;
        }
        
        
        if (t[i][cnt][prev] != -1) 
        {
            return t[i][cnt][prev];
        }
        
        int ans = MAX;
      
        if (houses[i]) 
        {
            int newcount;
            if(houses[i]==prev)
                 newcount=cnt;
            else
                newcount=cnt+1;
            
            ans = min(ans, solve(houses, cost, m, n, target, i+1, newcount, houses[i]));
        } 
        else
        {
            
            // If the house is not painted, try every possible color and store the minimum cost
            
            for (int c = 1; c <= n; c++) {
                 int newcount;
                if(c==prev)
                    newcount=cnt;
                else
                    newcount=cnt+1;
                
                ans = min(ans, cost[i][c-1]+ solve(houses, cost, m, n, target, i+1, newcount, c));
            }
        }
        
        // Return the minimum cost and also storing it for future reference (memoization)
        return t[i][cnt][prev] = ans;
    }
    
    int minCost(vector<int>& houses, vector<vector<int>>& cost, int m, int n, int target) {
      
        memset(t, -1, sizeof(t));
        int ans = solve(houses, cost, m, n, target, 0, 0, 0);
      if(ans == MAX)
        return -1;
        
           else return ans;
    }
};