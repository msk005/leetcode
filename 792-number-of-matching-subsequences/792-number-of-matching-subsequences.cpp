class Solution {
public:
    unordered_map<string,int>um;
    bool helper(string s,string t)
    {
         int n=s.length();
         int m=t.length();
         int c=0;
        for(int i=0,j=0;i<n and j<m ;)
        {
            if(s[i]==t[j])
            {
                c++;
                i++,j++;}
            else
                j++;
        }
        
        if(c==n)
            return true;
        
        
        return false;
    }
        
        
        
        
    
    int numMatchingSubseq(string s, vector<string>& words) {
        int count=0;
        for(int i=0;i<words.size();i++)
        {
            um[words[i]]++;
        }
        
        for(auto x:um)
        {
            string str=x.first;
            if(helper(str,s))
                count+=x.second;
        }
        return count;
    }
};