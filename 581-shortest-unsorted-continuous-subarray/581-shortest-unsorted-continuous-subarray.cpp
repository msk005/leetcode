class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
       /* iss question m hum aage se ek pointer chla rhe hai aur piche se ek pointer chla rhe h.....
       uske saath hum ek start aur end bhi le rhe h
       hm age se check kr rhe h ki age se agar koi bhi min se bda ya brabar h to usko min bna de rhe h;
       aur piche se agr koi max se chhhota ya barabar hai to usko max bna de rhe h
       agr aisa nhi h to end ko min se aur start ko max index ke barabar kr de rhe h
       */
        
        
        int i=0,j=nums.size()-1;
        int start=0,end=-1;
        
        int curr_max=INT_MAX;
        int curr_min=INT_MIN;
        
        while(j>=0)
        {
              // Check if the "num[start]" is greater than the minimum element so far
            
            if(nums[i]>=curr_min)
                curr_min=nums[i];
            else 
                end=i;
            
            
            // Check if the "num[end]" is less than the maximum element so far
            if(nums[j]<=curr_max)
                curr_max=nums[j];
            else
                start=j;
            i++,j--;
            
        }
       
       return end-start+1;
    }
};