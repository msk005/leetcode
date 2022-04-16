class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
       vector<int>ans1,ans2;
       
        vector<vector<int>>ans;
        unordered_set<int>um1,um2;
        
        for(int i=0;i<nums1.size();i++)
        {
          
             um1.insert(nums1[i]);
              // um2.insert(nums2[j]); 
          
        }
        
         for(int j=0;j<nums2.size();j++)
        {
          
        um2.insert(nums2[j]);
         }
        
        for( auto x:um1)
        {
           if(um2.find(x)==um2.end())
               ans1.push_back(x);
        }
        for(auto x:um2)
        {
           if(um1.find(x)==um1.end())
               ans2.push_back(x);
        }
        ans.push_back(ans1);
        ans.push_back(ans2);
        return ans;
    }
};