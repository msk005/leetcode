class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n=word1.length();
        int m=word2.length();
        if(m!=n)
            return false;
        
        unordered_map<char,int>um1,um2;
        
        for(int i=0;i<n;i++)
        {
            um1[word1[i]]++;
        }
        
        for(int j=0;j<m;j++)
        {
            if(um1.find(word2[j])==um1.end())
                return false;
            um2[word2[j]]++;
        }
        vector<int>v1,v2;
        for(auto x:um1)
        {
            v1.push_back(x.second);
            
        }
        for(auto x:um2)
        {
            v2.push_back(x.second);   
        }
        
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        
        return v1==v2;
    }
};