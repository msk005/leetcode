class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>um;
        int n=nums1.size();
        int m=nums2.size();
        vector<int>v;
        for(int i=0;i<n;i++)
        {
        um[nums1[i]]++;
        }
        
        for(int i=0;i<m;i++)
        {
          if(um.find(nums2[i])!=um.end()&& --um[nums2[i]]>=0)
              v.push_back(nums2[i]);
        }
         
        return v;
    }
};