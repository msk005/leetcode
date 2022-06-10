class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int n=s.length();
        if(!n)
            return 0;
        unordered_set<char>us;
        int i=0,j=0, maxLen=0;
        while(j<n&&i<n)
        { 
            if(us.find(s[j])==us.end())
            {
                us.insert(s[j]);
                   j++;
                maxLen=max(maxLen,j-i);
            }
            
            else
            {  us.erase(s[i]);
               i++;
            }
          }
        return maxLen;
    }
};