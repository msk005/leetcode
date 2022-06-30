class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        
        if(n<=1)
            return 0;
        sort(nums.begin(),nums.end(),greater<int>());
        int p;
//         
        // if(n%2!=0)
            p=nums[n/2];
        // else
        //     p=nums[(n+1)/2];
        int ans=0;
        for(auto x:nums)
            ans+=abs(x-p);
        
        return ans;
    }
};