class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        
        int ans=0;
        
        unordered_map<string,int>um;
        
        for(auto x:words)
        {
            string s=x;
            reverse(s.begin(),s.end());
            if(um[s]>0)
            {
                
              um[s]--;
               ans+=4;
            }
            
            else
                um[x]++;
            
                
        }
        
        for(auto x:um)
        {
            if(x.first[0]==x.first[1] and x.second>0)
                return ans+2;  //here we are returing because if all are same same then it will be not a pallinf=drome
        }
        
        return ans;
        
    }
};