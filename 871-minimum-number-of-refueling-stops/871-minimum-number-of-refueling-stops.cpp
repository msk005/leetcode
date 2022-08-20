class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        int n=stations.size();
        if(n==0 and target<=startFuel)
            return 0;
        else if(n==0 and target>startFuel)
            return -1;
        
        priority_queue<int>pq;
        
        int distt=startFuel;
        
        int i=0,c=0;
        
        while(distt<target)
        {
            while(i<n and stations[i][0]<=distt)
            {
                pq.push(stations[i][1]);
                i++;
            }
            
            if(pq.empty())
                return -1;
            
            distt+=pq.top();
            pq.pop();
                c++;
        }
        return c;
    }
};