class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>ans;
        int sum=0;
       for(auto x:nums)
       { sum+=x;
        ans.push_back(sum);
       }
        return ans;
    }
};