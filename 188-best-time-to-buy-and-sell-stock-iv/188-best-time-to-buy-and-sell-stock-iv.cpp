class Solution {
public:
  
    int help(int ind,int buy,int k,vector<int>&prices,int n,vector<vector<vector<int>>>&t)
    {
        if(ind==n or k==0)
            return 0;
        if(t[ind][buy][k]!=-1)
            return t[ind][buy][k];
        if(buy)
        {
            return t[ind][buy][k]= max(-prices[ind]+help(ind+1,0,k,prices,n,t),
                       0+help(ind+1,1,k,prices,n,t));
        }
        else
             return t[ind][buy][k]= max(prices[ind]+help(ind+1,1,k-1,prices,n,t),
                       0+help(ind+1,0,k,prices,n,t));
        
        
    }
    
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
          vector<vector<vector<int>>>t(n+1,vector<vector<int>>(2,vector<int>(k+1,-1)));
       return help(0,1,k,prices,n,t);
    }
};