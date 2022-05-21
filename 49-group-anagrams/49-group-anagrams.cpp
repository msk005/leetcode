class Solution {
public:
    vector<vector<string>>ans;
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if(strs.size()==0||strs.size()==1)
             ans.push_back(strs);
       
        else
        {
             map<string,vector<string>>mp;
            for(auto x:strs)
            {
                string s=x;
                sort(s.begin(),s.end());
                mp[s].push_back(x);
            }
            
            for(auto x: mp)
            {
                ans.push_back(x.second);
            }
        }
        
        return ans;
    }
};