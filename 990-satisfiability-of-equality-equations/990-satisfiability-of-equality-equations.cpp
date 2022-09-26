class Solution {
public:
    int parent[26];
    
    int find(int x)
    {
        if(parent[x]==x)
            return x;
        else
           return find(parent[x]);
    }
    bool equationsPossible(vector<string>& equations) {
        for(int i=0;i<26;i++)
            parent[i]=i;
        
        for(auto val : equations)
        {
            if(val[1]=='=')
            {
             int px=find(val[0]-'a');
                int py=find(val[3]-'a');
            
            if(px!=py)
                parent[py]=px;
            }
        }
        
        
        for(auto val : equations)
        {
            if(val[1]=='!')
            {int px=find(val[0]-'a');
                int py=find(val[3]-'a');
            
            if(px==py)
                return false;
            }
        }
        return true;
    }
};