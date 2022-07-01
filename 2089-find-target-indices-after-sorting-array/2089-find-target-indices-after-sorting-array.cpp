class Solution {
public:
     vector<int>v;
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        
        int h=nums.size()-1;
        int l=0;
       binary(nums,target,l,h);
       
    return v;
    
    }
    
   void binary(vector<int>&nums,int target,int l,int h){
        
        if(l>h)
            return;
        
           int mid=l+(h-l)/2;
            if(nums[mid]==target)
            {
                binary(nums,target,l,mid-1);
                v.push_back(mid);     //agr target mil gya to pichhe bhi target dubara mil skta hai aur aage bhi to dono half p chalan pdega
                binary(nums,target,mid+1,h);
            }
            else if(nums[mid]>target)
              binary(nums,target,l,mid-1);
            else 
               binary(nums,target,mid+1,h);
        
        
       
    }
};