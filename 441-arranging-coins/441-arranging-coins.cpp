class Solution {
public:
    int arrangeCoins(int n) {
        int l=0,h=n;
        long int ans,k;
        while(l<=h)
        {
            k=l+(h-l)/2;
            ans=k*(k+1)/2;
            if(ans==n)
                return k;
            
            else if(ans<n)
                l=k+1;
            else
                h=k-1;
                
        }
        return h;
    }
};