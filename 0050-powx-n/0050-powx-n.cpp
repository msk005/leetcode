class Solution {
public:
    double binExp(double x, long long n) {
        if(n==0)
            return 1;
        
        if(n<0)
        {
            n= -1*n;
           x = 1.0/x;
        }
        
        
        double res =1;
        
        while(n>0)
        {
            
            if(n%2==1)
            {    res*=x;
                n--;
            }
        
        x=x*x;
        n/=2;
    }
        return res;
            
    }
    double myPow(double x, int n)
    {
        return binExp(x, (long long) n);
    }
};