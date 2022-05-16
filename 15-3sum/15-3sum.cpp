class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
       vector<int>v;
        vector<vector<int>>ans;
        
        unordered_map<int,int>um;
         sort(nums.begin(),nums.end());
        
        for(int i=0;i<n;i++)
        {
            um[nums[i]]=i ;
        }
           
      for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i-1]) 
                continue;
            
            for (int j = i+1; j < n; j++) {
                if (j != i+1 && nums[j] == nums[j-1])
                    continue;
                
                if (um[-(nums[i] + nums[j])] > j) 
                    ans.push_back({nums[i], nums[j], -(nums[i] + nums[j])});
                
            }
        }
       
        
       
        return ans;
    }
};