class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>v;
        unordered_map<int,int>um;
        
        for(int i=0;i<nums.size();i++)
        {
            if(um.find(nums[i])!=um.end())
            {
               v.push_back(nums[i]); 
            }
            else
                um[nums[i]]++;
        }
        
        return v;
    }
};