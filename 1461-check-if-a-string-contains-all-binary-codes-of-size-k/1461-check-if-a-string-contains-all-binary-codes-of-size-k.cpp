class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n = s.size(); 
	unordered_set<string> us;
	for(int i = 0; i <= n - k; i++) 
        us.insert(s.substr(i, k));
        
        
        return us.size()==pow(2,k);
        
        
    }
};