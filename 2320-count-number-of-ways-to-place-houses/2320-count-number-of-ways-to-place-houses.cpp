class Solution {
public:
    int countHousePlacements(int n) {
       
        
       long long a=1,b=1;
        long long c=2;
        int mod=pow(10,9)+7;
        for(int i=0;i<n;i++)
        {
            c=(a+b)%mod;
            a=b;
            b=c;
        }
        
        return (int)(1L*b*b%mod);
    }
};