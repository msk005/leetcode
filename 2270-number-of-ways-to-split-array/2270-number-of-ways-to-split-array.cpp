#define ll long
class Solution {
public:
    
    int waysToSplitArray(vector<int>& nums) {
        int c=0;
        ll totalSum=0;
        for(int i=0;i<nums.size();i++)
        {
            totalSum+=nums[i];
        }
        ll newSum=0;
        for(int i=0;i<nums.size()-1;i++)
        {
           newSum+=nums[i];
            totalSum-=nums[i];
            
            if(newSum>=totalSum)
                c++;
        }
        return c;
    }
};