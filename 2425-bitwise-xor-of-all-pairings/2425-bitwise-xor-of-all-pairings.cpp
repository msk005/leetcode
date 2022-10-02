class Solution
{
    public:
        int xorAllNums(vector<int> &nums1, vector<int> &nums2)
        {
            int m=nums1.size();
            int n=nums2.size();
            int ans;
            if(m%2==0 and n%2==0)
            {
                int res=0;
                 ans=res;
            }
            
            else if(m%2==0 and n%2==1)
            {
                int res=nums1[0];
                for(int i=1;i<m;i++)   
                {
                  res^=nums1[i]  ;
                }
                
                ans=res;
            }
            
           else if(m%2==1 and n%2==0)
            {
                int res=nums2[0];
                for(int i=1;i<n;i++)   
                {
                  res^=nums2[i] ; 
                }
                
                ans=res;
            }
            
            else
            {
                int res=nums1[0];
              for(int i=1;i<m;i++)
                  res^=nums1[i];
                
                for(int i=0;i<n;i++)
                  res^=nums2[i];
                
                ans=res;
            }
            
            return ans;
          
        }
};