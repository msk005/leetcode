class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        // int c=0;
         int ans=0;
        for(int i=0;i<nums1.size();i++)
        { 
            int c = i;
            int l=i,h=nums2.size()-1;
            int mid;
            while(l<=h)
            {
                mid=l+(h-l)/2;
                
                    if(nums2[mid]>=nums1[i])
                    {   c=mid;
                    l=mid+1;
                    }
                else
                    h=mid-1;
                     
            }
           ans=max(c-i,ans);
        }
        return ans;
    }
};