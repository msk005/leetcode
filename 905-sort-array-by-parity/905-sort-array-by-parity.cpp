class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return nums;
        
        for(int i=0,j=n-1;i<j;)
        {
            if(nums[i]%2==0)
                i++;
            else if(nums[j]%2!=0)
                j--;
            else if(nums[i]%2!=0 and nums[j]%2==0)
            {
                swap(nums[i],nums[j]);
                 i++;
                j--;
            }
        }
        return nums;
    }
};