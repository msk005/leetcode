class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        vector<pair<int,int>>v(n);
        
        for(int i=0;i<n;i++)
            v.push_back({efficiency[i],speed[i]});
        sort(v.begin(),v.end(),greater<>());
        
       priority_queue<int, vector<int>,greater<int>> pq;
        
        long long total_speed=0,ans=0;
        for(auto x:v)
        {
            total_speed+=x.second;
            pq.push(x.second);
            
            if(pq.size()>k)
            {
                            
                
                
                total_speed-=pq.top();
                pq.pop();
                
            }
            
            
            ans=max(ans,total_speed*x.first);
            
        }
        return ans%1000000007;
    }
};