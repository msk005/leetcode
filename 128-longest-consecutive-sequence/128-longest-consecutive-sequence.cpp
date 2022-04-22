class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
     if(nums.size()==0)
         return 0;
        int c=1;
        int mxm=INT_MIN;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++)
        { if(nums[i]!=nums[i-1])
           if(nums[i]==1+nums[i-1])
               c++;
            else
            {
                mxm=max(c,mxm);
                 c=1;
            }
        }
        return max(mxm,c);
                
    }
};