class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
       vector<int>ans1,ans2;
       
        vector<vector<int>>ans;
        unordered_map<int,int>um1,um2;
        
        for(int i=0;i<matches.size();i++)
        {
          
             um1[matches[i][0]]++;
              um2[matches[i][1]]++;
          
        }
        for(auto x:um1)
        {
           if(um2.find(x.first)==um2.end())
               ans1.push_back(x.first);
        }
        for(auto x:um2)
        {
           if(x.second==1)
               ans2.push_back(x.first);
        }
        sort(ans1.begin(),ans1.end());
        sort(ans2.begin(),ans2.end());
        ans.push_back(ans1);
        ans.push_back(ans2);
        return ans;
    }
};