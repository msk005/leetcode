class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if(k==nums.size())
            return nums;
        unordered_map<int,int>mp;
        vector<int>ans;
        
        for(int i=0;i<nums.size();i++)
        {
        mp[nums[i]]++;
        }
        
        priority_queue<pair<int,int>>pq;
        
        for(auto x:mp)
        {
            pq.push(make_pair(x.second,x.first));
        }
       
         while(k--)
         {
            ans.push_back(pq.top().second);
             pq.pop();
             
         }
        return ans;
    }
};