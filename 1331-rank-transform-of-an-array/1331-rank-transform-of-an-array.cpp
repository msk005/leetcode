class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>nums=arr;
        sort(arr.begin(),arr.end());
        vector<int>v;
        unordered_map<int,int>um;
        int j=0;
        for(int i=0;i<arr.size();i++)
        {
            if(um.find(arr[i])==um.end())
            {um[arr[i]]=j+1;
            j++;}
        }
        
        for(int i=0;i<nums.size();i++)
        {
            v.push_back(um[nums[i]]);
        }
        
        return v;
    }
};