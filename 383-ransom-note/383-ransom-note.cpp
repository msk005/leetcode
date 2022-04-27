class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
          unordered_map<char, int>um(26);
        for (int i = 0; i < magazine.length(); i++)
            um[magazine[i]]++;
        for (int i = 0; i < ransomNote.length(); i++)
            if (--um[ransomNote[i]] < 0)
                return false;
        return true;
    }
};