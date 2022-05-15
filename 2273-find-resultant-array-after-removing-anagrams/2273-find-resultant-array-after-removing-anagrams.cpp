class Solution {
public:
    bool anagram(string a,string b)
    {
        if(a.length()!=b.length())
            return false;
        unordered_map<char,int>um;
        for(int i=0;i<a.length();i++)
        {
            um[a[i]]++;
            um[b[i]]--;
            
            
        }
        
        for (auto x:  um)
               if (x.second)
            return false;
    return true;
    }
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> ans;
       int n= words.size();
     for(int i=0;i<n;)
     {
        int j=i+1;
        while( j<n and anagram(words[i],words[j]) ) 
            j++;
        ans.push_back(words[i]);
        i=j;
     }
    return ans;
    }
};