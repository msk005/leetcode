class Solution {
public:
    vector<string> ans;
    vector<string> letterCombinations(string digits) {
        

        if (digits.size()==0) {
            return ans;
        }
        
        vector<string> chars = { "0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
        string str;
        build(str, 0, digits, chars);
        return ans; 
    }
    
    void build(string str, int i, string& digits, vector<string>& chars) {
        
        if (i == digits.size()) {
            ans.push_back(str);
            return;
        }

        int d = digits[i] - '0';
        
        for (char ch : chars[d]) {
            build(str + ch, i + 1, digits, chars);
        }
    }
};