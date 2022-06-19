class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int suml,sumr;
        suml=sumr=0;
        for(auto x:nums)
        {
         sumr+=x;   //total sum of elements
        }
        
        for(int i=0;i<nums.size();i++)
        {
            sumr-=nums[i];   //subtract one by one elements of array
            if(suml==sumr)
                return i;
            
            suml+=nums[i];  //add elemenets to find sum form left end
        }
        
        return -1;
    }
};