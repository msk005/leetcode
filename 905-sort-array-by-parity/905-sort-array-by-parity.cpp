class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return nums;
        
         vector<int> ans;
         for(int i=0;i<n;i++)
         {
             if(nums[i]%2==0)
             { int p=nums[i];
               ans.insert(ans.begin(), p);
             }
             
             else
             { int p=nums[i];
                 ans.push_back(p);
             }
         }
        return ans;
        
    }
};