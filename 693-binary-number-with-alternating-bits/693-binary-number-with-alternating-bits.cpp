class Solution {
public:
    bool hasAlternatingBits(int n) {
       int r=n%2;
        n=n/2;
    int prev=r;
        
        while(n)
        {
            r=n%2;
            if(r==prev)
                return false;
            
            prev=r;
            r=n%2;
            n/=2;
        }
        return true;
    }
};