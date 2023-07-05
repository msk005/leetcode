class Solution {
public:
    int longestSubarray(vector<int>& nums) {
       int one=0,prevone=0;
        
        int lsub=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
                one++;
            
             else
             {
                 prevone=one;
                 one=0;
                
             }
             lsub=max(one+prevone,lsub);
        }
           if(lsub==nums.size())
            return lsub-1;
        else
            return lsub;  
    }
};

 
        