class Solution
{
    public:
        vector<string> restoreIpAddresses(string s)
        {
            vector<string> res;

            helper(s, 0, "", 0, res);
            return res;
        }

    void helper(string s, int idx, string curr, int dotC, vector<string> &res)
    {

        if (dotC == 3)
        {
            string tmp = s.substr(idx);
            if (isValid(tmp))
            {
                res.push_back(curr + tmp);
            }
            return;
        }

        for (int i = 1; i <= 3; i++)
        {
            if (idx + i > s.size())
                break;
            string segment = s.substr(idx, i);
            if (isValid(segment))
                helper(s, idx + i, curr + segment + ".", dotC + 1, res);
        }
    }
    bool isValid(string s) {
      if (s.size() == 0 || s.size() > 3) 
        return false;
            
      if (s[0] == '0' && s.size() > 1) 
        return false;
            
      int num = stoi(s);
      if (num >= 0 && num <= 255) 
        return true;
            
    return false;
    }

};