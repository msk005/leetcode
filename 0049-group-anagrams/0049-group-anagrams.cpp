class Solution {
public:
     vector<vector<string>>ans;
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
       
        if(strs.size()<=1)
        { 
            ans.push_back(strs);
            return ans;
        }
        
        map<string,vector<string>>mp;
        
        for(auto x:strs)
        {
            string str=x;
            sort(str.begin(),str.end());
            mp[str].push_back(x);
        }
        
        for(auto x:mp)
            ans.push_back(x.second);
            
        
        return ans;
            
        
        
    }
};
