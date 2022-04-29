class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        
        vector<int> colors(n,0);
        queue<int>q;
        
        for(int i=0;i<n;i++)
        {
            if(colors[i])
               continue;
        
        colors[i]=1;
        q.push(i);
        
        while(!q.empty())
        {
            int temp=q.front();
            
            for(auto neighbour : graph[temp])
            {
                //coloring th neighbour with opposite color
                if(!colors[neighbour])
                {
                    colors[neighbour] = -colors[temp];
                    q.push(neighbour);
                }
                
               // if neighbour has same color then it cant be
                else if(colors[neighbour]==colors[temp])
                {
                    return false;
                }
            }
                q.pop();
            }
        }
        
        return true;
    }
};

//1 = red, -1 = blue, 0 = not colored yet.