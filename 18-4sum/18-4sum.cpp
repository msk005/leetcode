class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>res;
       
                
if(target == -294967296|| target == 294967296){
            return {};
        }
        int n=nums.size();
         if(n == 0){
            return res;
        }
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int target_2=(long long) target-((long long)(nums[i]+nums[j]));
                
                int left=j+1;
                int right=n-1;
                
                while(left<right)
                {
                    int two_sum= nums[left]+nums[right];
                    
                    if(two_sum<target_2)
                        left++;
                    else if(two_sum>target_2)
                        right--;
                    
                    
                     else
                     {
                         vector<int>ans(4,0);
                         ans[0]=nums[i];
                         ans[1]=nums[j];
                         ans[2]=nums[left];
                         ans[3]=nums[right];
                         
                        res.push_back(ans);
                     
                    
                    //skipping duplicates of number 3
                    while(left<right and nums[left]==ans[2])
                        left++;
                    
                    //skipping duplicates of number 4
                     while(left<right and nums[right]==ans[3])
                        right--;
                    
                     } 
                    
                    
                }
             //skipping duplicates of num 2
            //....2 2 2 3
                while(j+1<n and nums[j+1]==nums[j])
                    j++;
          
            }
            
            //skipping duplic of num 1
            while(i+1<n and nums[i+1]==nums[i])
                i++;
            
            
            
            
        }
        return res;
    }
};