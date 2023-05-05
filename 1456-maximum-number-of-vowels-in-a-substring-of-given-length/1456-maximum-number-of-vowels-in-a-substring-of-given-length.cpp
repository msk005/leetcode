class Solution {
public:
    int maxVowels(string s, int k) {
      
    int i = 0, j = 0, vowelCount = 0, mx = 0;
    while (j < s.size())   
    {
        if (j - i + 1 < k)
        {
            if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u')
                vowelCount++;
            
            j++;
        } 
        
        else if(j-i+1>=k)
        {
            if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u')
                vowelCount++;
            
            mx = max(mx, vowelCount);
            
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                vowelCount--;
            
            i++; j++;
        }
    }
    return mx;        
    }
};