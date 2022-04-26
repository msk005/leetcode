class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
       vector<vector<int>> edges;
        int n = points.size();
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                int d = abs(points[i][0]-points[j][0])+abs(points[i][1]-points[j][1]);
                edges.push_back({d,i,j});
            }
        }
       
        sort(edges.begin(),edges.end());
        vector<int> parent(n);
        for(int i=0;i<n;i++)
            parent[i] = i;
        
        int weight = 0,e = 0;
        
        for(int i=0;i<edges.size();i++)
        {
            int w = edges[i][0],u = edges[i][1],v = edges[i][2];
            
            // apply union find to check cycle
            while(u!=parent[u])
                u = parent[u];
            
            while(v!=parent[v])
                v = parent[v];
            
            if(u != v) // if cycle not found
            {
                weight += w;//add its weight
                parent[u]=v;//connect u and v
                e++; //increase egde count
            }
            
            if(e==n-1) //edge count reaches n-1 MST is complete
                return weight;
        }
        return weight;
    
    }
};