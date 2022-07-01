class Solution {
public:
    static bool cmp(vector<int>& p1, vector<int>& p2){
        if(p1[1]!=p2[1]) 
            return p1[1]>p2[1];
        else
            return p1[0]>p2[0];
    }
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        
        sort(boxTypes.begin(),boxTypes.end(),cmp);
        int ans=0;
        for(int i=0;i<boxTypes.size();i++)
        {
            if(boxTypes[i][0]<=truckSize)
            {
                ans+=boxTypes[i][0]*boxTypes[i][1];
                truckSize-=boxTypes[i][0];
            }
            else
            {
                ans+=truckSize*boxTypes[i][1];
                truckSize=0;
            }
        }
        
        return ans;
    }
};