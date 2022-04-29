class Solution {
public:
    int numTrees(int n) {
        vector<int>t(n+1);
        t[0]=1;
        t[1]=1;
        
        for(int i=2;i<n+1;i++)
        {
            for(int j=1;j<i+1;j++)
                t[i]+=t[j-1]*t[i-j];
        }
    return t[n];
       
    }
    
};