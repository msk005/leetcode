class Solution {
public:
    int mySqrt(int x) {
        if(x==0||x==1)
            return x;
        
        long long int ans,mid;
        long long int h=x,l=0;
       
        
        while(l<=h)
        {
             mid=(l+h)/2;
             if(mid*mid==x)
                 return mid;
            else if(mid*mid<x)
            {
                l=mid+1;
            ans=mid;
            }
            else
                h=mid-1;
                
        }
        return ans;
    }
    
};