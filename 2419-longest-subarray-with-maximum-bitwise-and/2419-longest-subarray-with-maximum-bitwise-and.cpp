class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        
        int mx=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            mx=max(mx,nums[i]);
        }
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            int c=0;
            if(nums[i]==mx)
                
            {
                while(i<nums.size() and nums[i]==mx)
                {
                    i++;
                    c++;
                  ans=max(ans,c);
                }
            }
            
            
        }
        
        return ans;
    }
};