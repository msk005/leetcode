class Solution {
public:
    int minimumLines(vector<vector<int>>& a) {
       
        if(a.size() == 1)return 0;
        if(a.size() == 2) return 1;
        int ans = 1;
        
        sort(a.begin(), a.end());
        
       long double prev =(long double)(a[1][1]-a[0][1])/(a[1][0]-a[0][0]);
        
        for(int i = 2; i<a.size(); i++){
           long double curr = (long double)(a[i][1]-a[i-1][1])/(a[i][0]-a[i-1][0]);
            if(curr != prev){
                ans++;
                prev = curr;
            }
        }
        return ans;
    }
};