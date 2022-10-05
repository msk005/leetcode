class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int n=nums.size();
        sort(nums.begin(),nums.end());
            for(int i=0,j=n-1; i<j;i++)
            {
                if(nums[i]==val)
                {
                    swap(nums[i],nums[j]);
                    j--;
                }
            }
        int c=0;
        for(auto x:nums)
        {
            if(x!=val)
                c++;
        }
        return c;
    }
};