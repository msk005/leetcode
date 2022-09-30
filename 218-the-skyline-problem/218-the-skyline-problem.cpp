class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        vector<vector<int>>ans;
        multiset<int>pq{0};
        
        vector<pair<int,int>>points;
        
        for(auto b: buildings)
        {
            
           points.push_back({b[0], -b[2]});   //means starting point
           points.push_back({b[1], b[2]});   //means end point
        }
        
        sort(points.begin(),points.end());
        
        int ongoingHeight=0;
        
        for(auto p:points)
        {
            int curPoint= p.first;
            int curHeight= p.second;
            
            
            if(curHeight<0)
                pq.insert(-curHeight);
            
            else
                pq.erase(pq.find(curHeight));
            
            auto pqTop = *pq.rbegin();
            if(ongoingHeight!=pqTop)
            {
                ongoingHeight=pqTop;
                ans.push_back({curPoint,ongoingHeight});
            }
        }
        return ans;
    }
};