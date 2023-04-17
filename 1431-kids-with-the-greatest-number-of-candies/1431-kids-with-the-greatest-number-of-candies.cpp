class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
          vector<bool>ans;
        int mxm=candies[0];
        for(int i=1;i<candies.size();i++)
        {
            if(candies[i]>mxm)
                mxm=candies[i];
        }
        
        for(int i=0;i<candies.size();i++)
        {
            if((extraCandies+candies[i])>=mxm)
                ans.push_back(true);
            else
                ans.push_back(false);
        }
        
        return ans;
            
    }
};