class Solution
{
    public:
        int xorAllNums(vector<int> &nums1, vector<int> &nums2)
        {
            int m=nums1.size();
            int n=nums2.size();
            int ans=0;
            int a=0;
                for(int i=0;i<m;i++)   
                   a^=nums1[i]  ;
                
            
            int b=0;
             for(int i=0;i<n;i++)
                 b^=nums2[i];
          
            
            ans=(m%2)*b xor (n%2)*a;
            
            return ans;
          
        }
};