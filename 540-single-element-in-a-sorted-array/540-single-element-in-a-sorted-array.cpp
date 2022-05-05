class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l=0,h=nums.size()-2;
        
        int mid;
        while(l<=h)
        {
            mid=(l+h)>>1;
       if(nums[mid]==nums[mid^1])  //(mid%2==0 && nums[mid]==nums[mid+1]) or (mid%2 ==1 && nums[mid] == nums[mid-1]) 
                l=mid+1;
            else
                h=mid-1;
        }
        return nums[l];//h+1
    }
};

/*
if left half
1st time = even
2nd time = odd

if right
1=odd
2=right
*/