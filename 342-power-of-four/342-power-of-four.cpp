class Solution {
public:
    
    bool isPowerOfFour(int n) {
       int c=0;
        int m=n;
     while(n>1)
     {
         n=n/4;
          c++;
     }
      if(n==1 and pow(4,c)==m)  
          return true;
        else
            return false;
    }
};