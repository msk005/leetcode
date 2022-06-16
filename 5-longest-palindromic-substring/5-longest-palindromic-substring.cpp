class Solution {
public:
    string longestPalindrome(string s) {
       int n=s.length();
        bool t[n][n];
        int len=0;
        int start=0;
        for(int gap=0;gap<n;gap++)
        {
         for(int i=0, j=gap;j<n;i++,j++)
         {
             if(gap==0)
                 t[i][j]=true;
             
             else if(gap==1)
              {
                 if(s[i]==s[j])
                     t[i][j]=true;
                 else
                     t[i][j]=false;
              }  
             
             else
               {
                 if(s[i]==s[j] and t[i+1][j-1])
                     t[i][j]=true;
                 else
                   t[i][j]=false;
               }
             
              if(t[i][j])
              {
                 start=i;
                len=gap+1;
              }
          }

        }
      
         return s.substr(start,len);
    }
};

