class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
       int mindis=INT_MAX;
       int ans;
        for(int i=0;i<nums.size();i++)
         {
             if(abs(nums[i])<=mindis)
             {mindis=abs(nums[i]);
                  ans=nums[i];
             }
        }
        return ans;
    }
};