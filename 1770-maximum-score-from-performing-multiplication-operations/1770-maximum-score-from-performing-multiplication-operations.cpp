class Solution {
public:
    
   int t[1001][1001];
    int helper(vector<int>& nums, vector<int>& multipliers, int i,int s )
    {
        
        
        if(i==multipliers.size())
            return 0;
        
        if(t[i][s]!=INT_MIN)
            return t[i][s];
        
        int e=(nums.size()-1)-(i-s);
        
        int res1=multipliers[i]*nums[s]+helper( nums, multipliers, i+1,s+1);
        
        int res2=multipliers[i]*nums[e]+helper( nums, multipliers, i+1,s);
        
       return t[i][s]=max(res1,res2);
        
    }
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        
        for(int i=0;i<1001;i++)
      {
          for(int j=0;j<1001;j++)
              t[i][j]=INT_MIN;
      }
        
        return helper(nums,multipliers,0,0);
       
            
    }
};