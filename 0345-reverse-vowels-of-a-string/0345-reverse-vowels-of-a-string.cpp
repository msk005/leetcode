class Solution {
public:
    string reverseVowels(string s) {
     int i=0,j=s.length()-1;
        set<char>st({'a','e','i','o','u','A','E','I','O','U'});
        while(i<j)
        {
            while(i<j and st.find(s[i])==st.end())
                i++;
             while(i<j and st.find(s[j])==st.end())
                j--;
            swap(s[i],s[j]);
              i++;j--;
            
        }
        
        return s;
    }
};