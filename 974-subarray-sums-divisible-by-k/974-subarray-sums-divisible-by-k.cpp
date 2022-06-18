class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
       unordered_map<int,int>um;
        um[0]++;
        int s=0;
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
           s+=nums[i];
            int p=s%k;
            if(p<0)
                p+=k;
            if(um.find(p)!=um.end())
                c+=um[p];
            
            um[p]++;
           
        }
        return c;
    }
};