class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int>um;
        for(int i=0;i<arr.size();i++)
            {
            
                
                 if((um.find(2*arr[i])!=um.end())|| (arr[i]%2==0&&um.find(arr[i]/2)!=um.end()))
                     return true;
                 um[arr[i]]++;
                      
                
        }
            return false;
    }
};