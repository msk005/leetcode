class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n= nums.size();
//         int lb = lower_bound(nums.begin(),nums.end(),target)-nums.begin();
//         if(lb==n or nums[lb]!=target)
//             return {-1,-1};
        
//         int ub =upper_bound(nums.begin(),nums.end(),target)-nums.begin();
         
//         return {lb, ub-1};
        
        int h=n-1,l=0;
        
        //first
        int first=-1;
        
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(nums[mid]==target)
            {
                first=mid;
                h=mid-1;   //first will be on left side
                
            }
            
            else if(nums[mid]<target)
                l=mid+1;
            
            
            else
                h=mid-1;
        }
        
        //last
        h=n-1,l=0;
                int last=-1;
        
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(nums[mid]==target)
            {
                last=mid;
                l=mid+1;   //last will be in right side
                
            }
            
            else if(nums[mid]<target)
                l=mid+1;
            
            else
             h=mid-1;
        }
       return {first,last}; 
    }
    
};