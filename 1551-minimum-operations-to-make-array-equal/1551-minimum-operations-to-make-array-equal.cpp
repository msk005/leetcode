class Solution {
public:
    int minOperations(int n) {
        return (n-(n/2))*(n/2);
        
        
        /*
        for even =     (6-6/2) *6/2;
                         (6-3)*3
        
        
        for odd =    (5- 5/2)  *5/2;
                      (5- 2)*2
        */
        
    }
};