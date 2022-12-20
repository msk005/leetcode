class Solution {
public:
    int vis[1001];
   void dfs(int i, vector<vector<int>> & rooms)
    {
        vis[i]=1;
        for(auto key: rooms[i])
            if(!vis[key])
                dfs(key, rooms);
    }
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) 
    {
        
        memset(vis,0,sizeof vis);
        dfs(0, rooms);
        int n=rooms.size();
        for(int i=0;i<n;i++)
            if(!vis[i]) 
                return false;
        
        return true;
        
    }
};