class Solution {
public:
    int addDigits(int num) {
      if(num==0)
          return num;
        
        else
            return 1+(num-1)%9;   // return 9 if num%9==0 and return num%9!=0 return directly
   
    }
};