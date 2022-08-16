class Solution {
public:
    int firstUniqChar(string s) {
     unordered_map<char,int>um  ;
        for(int i=0;i<s.length();i++)
        {
            um[s[i]]++;
        }
        int i=0;
        for(auto x:s)
        {
            if(um[x]==1)
            {
                
                return i;
            }
            i++;
        }
        
        return -1;
    }
};