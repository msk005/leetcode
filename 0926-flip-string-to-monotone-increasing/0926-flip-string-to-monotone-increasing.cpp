class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int ones=0,zeros=0;
        
        
        for(auto x:s)
        {
            if(x=='0')
                zeros++;
        }
        
        int ans=zeros;
        for(auto x:s)
        {
            if(x=='0')
                zeros--;
            
            else 
                ones++;
            
            ans=min(ans,zeros+ones);
        }
        
        return ans;
    }
    
};