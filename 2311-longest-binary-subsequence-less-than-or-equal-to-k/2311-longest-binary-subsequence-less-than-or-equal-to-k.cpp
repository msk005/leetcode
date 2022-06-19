class Solution {
public:
  
    int longestSubsequence(string s, int k) {
      reverse(s.begin(),s.end());
        int c=0;
       for(int i=0;i<s.length();i++)
        {
          if(s[i]=='0')
            c++;
         
           else
           {
               
               if(k>=pow(2,i))
               {
                   k=k-pow(2,i);
                   c++;
               }
            }
        }
        return c;

        
     
    }
};