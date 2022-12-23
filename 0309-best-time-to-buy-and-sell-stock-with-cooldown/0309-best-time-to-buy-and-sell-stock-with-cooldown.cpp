class Solution {
public:
    /*
    1. 3 options a day buy sell or leave
    2. If bought , then only sell or leave (until you sell)
    3. If sold , then only buy or leave (until you sell)
    4. If left , then buy or sell (if you have any)
    */
    
    int t[5001][3];
   int dfs(int i , int turn , vector<int>& prices ){
        if(i >= prices.size()) return 0;
        // 0 for buy
        // 1 for sell 
        // 2 for last day sold
        if(t[i][turn] != -1){
            return t[i][turn];
        }
        if(turn == 0){
            return t[i][turn] = max(-prices[i] + dfs(i + 1 , 1 , prices ) , dfs(i + 1 , 0 , prices ));
        }
        else if(turn == 1){
            return t[i][turn] = max(prices[i] + dfs(i + 1 , 2 , prices ) , dfs(i + 1 , 1 , prices ));
        }
        else{
            return t[i][turn] = dfs(i + 1 , 0 , prices );
        }
    }
    int maxProfit(vector<int>& prices) {
        memset(t,-1,sizeof t);
       
        return dfs(0 , 0 , prices );
    
    }
};