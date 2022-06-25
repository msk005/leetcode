class Solution {
public:
    bool isIsomorphic(string s, string t) {
       
        return helper(s,t) and helper(t,s);
        
            
    }
    
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
};