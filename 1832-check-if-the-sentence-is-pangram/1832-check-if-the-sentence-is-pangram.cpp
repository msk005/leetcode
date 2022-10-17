class Solution {
public:
    bool checkIfPangram(string st) {
        set<char>s;
        for(int i=0;i<st.length();i++)
            s.insert(st[i]);
        
        if(s.size()==26)
            return true;
        return false;
    }
};