class Solution {
public:
    int romanToInt(string s) {
        int ans = 0, num = 0;
         int prev = 0;
       for (int i = s.length()-1; i >= 0; i--) 
        {
           switch(s[i]) {
           case 'I':
                   num = 1; 
                   break;
           case 'V': 
                   num = 5; 
                   break;
           case 'X':
                   num = 10; 
                   break;
           case 'L':
                   num = 50; 
                   break;
           case 'C': 
                   num = 100;
                   break;
           case 'D': 
                   num = 500; 
                   break;
           case 'M': 
                   num = 1000;
                   break;
        }
           
         if ( num < prev)
          ans -= num;  ///aagr aage ka number bada hai to use ans mein se minuds krna pdega
           
           else 
           ans += num;   ///otherwise add he krna hai

          prev = num;  //yha oicchle num ka hisaab rkkh rkh rhe hai
          }
         return ans;
       }
    
};