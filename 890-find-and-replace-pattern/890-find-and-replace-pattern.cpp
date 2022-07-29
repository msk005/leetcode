class Solution {
public:
    vector<string>ans;
    bool helper(string &s, string &t)
   {
       unordered_map<char,char>mp;
       
        for(int i=0;i<s.length();i++)
        {
               if(mp.find(s[i])!=mp.end())
               {
                   if(mp[s[i]]!=t[i])
                       return false;
               }
            
              else
                  mp[s[i]]=t[i];

        }
       return true;
   }
    
    
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        int n=words.size();
        for(int i=0;i<n;i++)
        {
            if(helper(words[i],pattern) and helper(pattern,words[i]))
            ans.push_back(words[i]);
        }
        return ans;
    }
};