class Solution {
public:
   
    
    
    
    
    int uniquePaths(int m, int n) {
        int N=m+n-2;   //no of right and bottom moves we need
        int R=m-1;     ///n-1 is also right, number of bottom moves
        double ans=1;
        
        for(int i=1;i<=R;i++)
        {
            ans=ans*(N-R+i)/i;
        }
        return (int)ans;
    }
};