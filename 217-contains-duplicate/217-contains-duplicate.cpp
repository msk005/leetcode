class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      
        int n=nums.size();
        // sort(nums.begin(),nums.end());
       
        unordered_map<int,int>arr;
        for(int i=0;i<n;i++)
        {
            arr[nums[i]]++;
        }
        for(auto it:arr)
        {
            if((it.second)>=2)
            return true;
        }
        return false;
    }

};