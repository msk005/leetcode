class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        unordered_map<int,int>um;
        
      
            for(int j=0;j<nums.size();j++)
            {
                um[nums[j]]=j;
            }
        
           for(int i=0;i<operations.size();i++)
           {
               int index=um[operations[i][0]];
               nums[index]=operations[i][1];
               um[operations[i][1]]=index;
           }
        
       
        return nums;
    }
};