class Solution {
public:
    
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> count(n+1);
        int m=trust.size();
        for(int i=0; i < m; i++)
        {
            
            count[trust[i][0]] = -1; // trust[A][B] A can never be judge
            
            
            count[trust[i][1]]++; // trust[A][B], B will be increased because it is trusted by one person
        }
            
        for (int i = 1; i <= n; ++i) {
            
            if (count[i] == n - 1)  //if trust =n-1 he will be judge
                return i;
        }
        return -1;
    }
};