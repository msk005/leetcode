class Solution {
public:
    int arraySign(vector<int>& nums) {
        int n=nums.size();
        int p=1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
                return 0;
            
            else if(nums[i]<0)
                p*=-1;
        
        }
        
        if(p>0)
            return 1;
        return -1;
    }
};