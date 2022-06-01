class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>ans(n);
        int sum=0;
       for(auto x:nums)
           sum+=x;
        
        for(int i=n-1;i>=0;i--)
        {
            ans[i]=sum;
            sum-=nums[i];
        }
        
        return ans;
    }
};