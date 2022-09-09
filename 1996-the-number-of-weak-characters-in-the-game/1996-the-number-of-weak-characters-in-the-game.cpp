class Solution {
public:
    static bool comp(vector<int> &a,vector<int> &b){
        if(a[0]!=b[0])
            return a[0]>b[0];
        return a[1]<b[1];
    }
    int numberOfWeakCharacters(vector<vector<int>>& prop) {
        sort(prop.begin(),prop.end(),comp);
        int maxm=-1;
        
        
        int ans=0;
        for(int i=0;i<prop.size();i++)
        {
           if(maxm>prop[i][1])
               ans++;
            else
                maxm=prop[i][1];
            
        }
        return ans;
    }
};