struct Compare {
    bool operator() (pair<int, string> a, pair<int, string> b) {
        if(a.first == b.first)
            return a.second > b.second;
        else
            return a.first < b.first;
    }
};
class Solution {
public:
   
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int>mp;
        for(auto x:words)
            mp[x]++;
        
        priority_queue<pair<int,string>,vector<pair<int, string>>,Compare>pq;
        vector<string>v;
        for(auto x:mp)
        {
            pq.push({x.second,x.first});
        }
        
        while(k--)
        {
            auto x=pq.top();
            pq.pop();
            v.push_back(x.second);
             // k--;
        }
        
        // sort(v.begin(),v.end());
        return v;
    }
};