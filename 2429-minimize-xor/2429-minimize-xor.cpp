class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int count = __builtin_popcount(num2);
       
         int cn1= __builtin_popcount(num1);
        
        if(cn1==count)
            return num1;
        
       
        int res = 0;
        for(int i = 31; count && i >= 0; i--) {
            if(num1 & (1 << i)) { // set bit
                res |= (1 << i);
                count--;
            }
        }

        for(int i = 0; count && i < 31; i++) {
            if(!(num1 & (1 << i))) { // not-set bit
                res |= (1 << i);
                count--;
            }
        }

        return res;
        
            
        
    }
};