class Solution {
public:
    int t[46];
    int climbSt(int n )
    {
        if(n<=1) return 1;
        if(t[n]!=-1)
            return t[n];
        
        else {
            t[n]=climbSt(n-1)+climbSt(n-2);
            return t[n];
    }
    }
    
    
    int climbStairs(int n) {
        if(n==1)
            return 1;
        memset(t,-1,sizeof t);
       return climbSt(n);
    }
    
};