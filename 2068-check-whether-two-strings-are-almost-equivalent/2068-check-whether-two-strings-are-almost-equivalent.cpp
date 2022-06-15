class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        map<char,int>mp;
        
        for(int i=0;i<word1.length();i++)
        {
            mp[word1[i]]++;
            mp[word2[i]]--;
        }
        
        for(auto x:mp)
        {
            if(abs(x.second)>3)
                return false;
                
        }
        return true;
    }
};