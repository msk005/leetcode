class Solution {
public:
    vector<int>ans;
   void helper(int a,int b,vector<int>&nums,int &sum)
    {
       if(nums[b]%2==0)
                sum -= nums[b];
        
       
            nums[b] +=a;
        if(nums[b] %2 ==0) sum+=nums[b];
    ans.push_back(sum);
      
    }
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int sum=0;
    
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
             sum+=nums[i];
         }
        
        for(int i=0;i<queries.size();i++)
        {
            int a=queries[i][0];
                int b=queries[i][1];
            
        helper(a,b,nums,sum);
        
        }
        return ans;
    }
};