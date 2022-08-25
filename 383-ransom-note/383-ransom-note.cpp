class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>um;
        for(auto x:ransomNote)
        {
            um[x]++;
        }
        
        for(auto x:magazine)
        {
           if(um.find(x)!=um.end())
               um[x]--;
        }
        
        for(auto x:um)
        {
            if(x.second>0)
                return false;
        }
        
        return true;
    }
};