class Solution {
public:
    bool isPowerOfThree(int n) {
          if(n<=0)
              return false;
        int c=0;
        
        while(n>1)
        {
            if(n%3  )
                return false;
            
            n=n/3;
            c++;
        }
       
      if(n==1)
            return true;
        
      return false;
            
        
    }
};