class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int>um;
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(um.find(k-nums[i])!=um.end()&&um[k-nums[i]]>0)
            {   
                c++;
                um[k-nums[i]]--;
            }
            else
                um[nums[i]]++;
        }
        
        
         
        return c;
    }
};