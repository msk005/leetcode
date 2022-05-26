class Solution {
public:
    int hammingWeight(uint32_t n) {
        int c=0;
        
        while(n)
        {
            n=n&(n-1);
            c++;
        }
        
        return c;
    }
};

// n=101, n-1=100   n&(n-1)=100
//n=100  n-1=011    n&n-1  =000