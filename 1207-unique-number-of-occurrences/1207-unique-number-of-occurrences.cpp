class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        set<int>s;
        unordered_map<int,int>um;
        for(int i=0;i<arr.size();i++)
        {
            um[arr[i]]++;
        }
        
        for(auto x:um)
        {
            if(s.find(x.second)!=s.end())
                return false;
              else
                  s.insert(x.second);
        }
        
        return true;
        
        
    }
};