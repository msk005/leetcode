class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int n=nums.size();
        int l=0;
        int h=n-1;
       
        while(l<=h)
        {
             int mid=l+(h-l)/2;
            if(nums[mid]==target)
                return mid;
            
            
            //roation hai aur target left array m hai
            if(nums[mid]>nums[h])
            {if(target<nums[mid]&&target>=nums[l])
                    h=mid-1;
            
            else
                l=mid+1;
            }
            
            
            //roataion hai aur target right m hai
            
            else if(nums[mid]<nums[h])
            {
                if(target>nums[mid]&&target<=nums[h])
                   l=mid+1;
                
                else
                    h=mid-1;
            }
            
            else
            {
                if(target<nums[mid])
        
            h=mid-1;
            
             else
        
            l=mid+1;
            
        
            }
        
        }
      return -1;  
    }
};