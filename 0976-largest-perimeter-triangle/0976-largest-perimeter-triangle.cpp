class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
       sort(nums.begin(),nums.end(),greater<int>());
        for(auto x:nums)
            cout<<x<<endl;
        int n=nums.size();
       for(int i=0,j=1,k=2;i<j and j<k and k<n ;i++,j++,k++)
        {
           if(nums[i]+nums[j]>nums[k] and nums[k]+nums[j]>nums[i] and nums[i]+nums[k]>nums[j])
            return nums[i]+nums[j]+nums[k];
           
        }
         return 0;
    }
};