class Solution {
public:
    
    int maxResult(vector<int>& nums, int k) {
           int n = nums.size(), a = 0, b = 0;
        int t[n];
        t[0] = n - 1;
        for (int i = n - 2; i >= 0; i--) {
            if (t[a] - i > k) a++;
            nums[i] += nums[t[a]];
            while (b >= a && nums[t[b]] <= nums[i]) b--;
            t[++b] = i;
        }
        return nums[0];
    }
};