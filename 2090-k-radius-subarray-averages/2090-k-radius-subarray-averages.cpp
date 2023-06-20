class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        vector<long long int>prefSum(n);
        
        prefSum[0]=nums[0];
        
        vector<int>ans(n,-1);
        for(int i=1;i<n;i++)
        {
            prefSum[i]=prefSum[i-1]+nums[i];
        }
        
        for(int i=0;i<n;i++)
        {
            int leC=i;
            int reC=n-i-1;
            if(leC>=k and reC>=k)
            {
                long long int lsum=0, rsum=prefSum[i+k];
                
                if(i-k>0)
                    lsum=prefSum[i-k-1];
                
                ans[i]=(rsum-lsum)/(2*k+1);
                
            }
            
            
        }
        return ans;
    }
};