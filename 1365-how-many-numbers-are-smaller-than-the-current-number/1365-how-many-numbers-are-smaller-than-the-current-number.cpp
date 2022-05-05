class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        unordered_map<int,int>um;
        int n=nums.size();
        vector<int>v=nums;
        sort(nums.begin(),nums.end());
        for(int i=n-1;i>=0;i--)
            um[nums[i]]=i;
        
        for(int i=0;i<n;i++)
        v[i]=(um[v[i]]);
        
        return v;
    }
};