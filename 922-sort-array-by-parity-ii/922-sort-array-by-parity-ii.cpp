class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int i=0;
        int j=1;
        int n=nums.size();
        for(;i<n and j<n;)
        {
            if(nums[i]%2==0)
                i+=2;
            else if(nums[j]%2!=0)
                j+=2;
            else
            {
                swap(nums[i],nums[j]);
                
            }
                 
        }
    return nums;
    }
    
};