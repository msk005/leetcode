 int dp[101][27][101][101];
class Solution {
public:
   

    string s;
    
    int helper(int idx, int last, int len, int k ){
        if(k<0)
            return INT_MAX/2;
        if(idx>=s.size())
            return 0;
        int &ans=dp[idx][last][len][k];
        if(ans!=-1)
            return ans;
        if(s[idx]-'a'==last)
        {
            int carry=(len==1||len==9||len==99);
            ans= carry+helper(idx+1, last, len+1, k);
        }
        else 
        {
            ans=min(1+helper(idx+1, s[idx]-'a', 1, k), helper(idx+1, last, len,k-1));
        }
        return ans;
    }
    int getLengthOfOptimalCompression(string str, int k) {
        s=str;
        memset(dp, -1, sizeof(dp));
        return helper(0, 26, 0, k);
    }
};