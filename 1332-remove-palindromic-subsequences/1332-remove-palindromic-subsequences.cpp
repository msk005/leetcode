class Solution {
public:
    int removePalindromeSub(string s) {
        string str=s;
        reverse(s.begin(),s.end());
        int n=str.length();
        int c=0;
        for(int i=0;i<n/2;i++)
        {
         if(s[i]!=str[i])
             return 2;
        }
        
        return 1;
    }
};