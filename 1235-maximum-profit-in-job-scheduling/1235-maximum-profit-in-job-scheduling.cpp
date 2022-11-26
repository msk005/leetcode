class Solution {
public:
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
       int n = startTime.size();
        vector<vector<int>>v(n,vector<int>(3));
        for(int i=0;i<n;i++)
            v[i] = {endTime[i],startTime[i],profit[i]};
        sort(v.begin(),v.end());
        vector<int> mem(n+1,-1);
        return rec_mem(v,n,mem);  
    }
     int latest_non_ov(vector<vector<int>> &v,int i)
    {
        for(int j=i-1;j>=0;j--)
        {
            if(v[j][0]<=v[i][1])
                return j;
        }
        return -1;
    }
    int rec_mem(vector<vector<int>> &v,int n,vector<int> &mem)
    {
        if(n==1)
            return v[n-1][2];
        if(mem[n]!=-1)
            return mem[n];
        int exclusive = rec_mem(v,n-1,mem);
        int inclusive = v[n-1][2];
        int i = latest_non_ov(v,n-1);
        if(i!=-1)
            inclusive += rec_mem(v,i+1,mem);
        return mem[n] = max(inclusive,exclusive);
    }
    
    
   
};