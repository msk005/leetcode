class Solution {
public:
    int fib(int n) {
       if(n<=1)
            return n;
        
        int a=0,b=1;
        int c;
        
        for(int i=2;i<=n;i++)
        {
            c=a+b;              //same as dp[i]=dp[i-2]+dp[i-1];
            a=b;
            b=c;
        }
        
        return b;
    }
};