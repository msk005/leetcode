class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int mxm = nums[0], sum = 0;
        
        for(int i=0;i<n;i++){
            sum += nums[i];
            mxm = max(sum,mxm); //checks wheher next number is greater or max sumis greater
            
            if(sum<0) 
                sum = 0;
        }
        
        return mxm;
    }
};
//this question is based on kadane algo revise once
