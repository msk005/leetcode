class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int,int>um;
        int n=arr.size();
        for(auto x:arr)
        {
            um[x]++;
        }
        int temp;
        for(auto x:um)
        {
            if(x.second>n/4)
            {
                
                temp=x.first;
                break;
            }
        }
        return temp;
    }
    
};