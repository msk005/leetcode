class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> vec = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    set<string> ans;
    
    for(auto x : words) {
        string code = "";
        for(auto ch : x)
            code += vec[ch - 'a'];
       ans.insert(code);
    }
    
    return ans.size();
    }
};