class Solution {
public:
  
//     int help(int ind,int buy,int k,vector<int>&prices,int n,vector<vector<vector<int>>>&t)
//     {
//         if(ind==n or k==0)
//             return 0;
//         if(t[ind][buy][k]!=-1)
//             return t[ind][buy][k];
//         if(buy)
//         {
//             return t[ind][buy][k]= max(-prices[ind]+help(ind+1,0,k,prices,n,t),
//                        0+help(ind+1,1,k,prices,n,t));
//         }
//         else
//              return t[ind][buy][k]= max(prices[ind]+help(ind+1,1,k-1,prices,n,t),
//                        0+help(ind+1,0,k,prices,n,t));
        
        
//     }
    
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
          int t[n+1][2][k+1];
        memset(t,0,sizeof(t));
        for(int ind=n-1;ind>=0;ind--)
        {
            for(int buy=0;buy<=1;buy++)
            {
                for(int cap=1;cap<=k;cap++)
                {
                     if(buy)
                    
                          t[ind][buy][cap]= max(-prices[ind]+t[ind+1][0][cap],
                                             0+t[ind+1][1][cap]);
        
                     else
                          t[ind][buy][cap]= max(prices[ind]+t[ind+1][1][cap-1],
                                             0+t[ind+1][0][cap]);
        
                }
            }
        }
        
        return t[0][1][k];
       // return help(0,1,k,prices,n,t);
    }
};