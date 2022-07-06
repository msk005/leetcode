class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mnm=prices[0];
        int mxmprofit=0;
        int profit=0;
        for(int i=0;i<prices.size();i++)
        {
            if(mnm>prices[i])
                mnm=prices[i];
            
            profit=prices[i]-mnm;
            mxmprofit=max(profit,mxmprofit);
        }
        return mxmprofit;
    }
};