class Solution {
public:
    string countAndSay(int n) {
          if(n==1)
            return "1";
        if(n==2)
            return "11";
        
       
        string str = "11";
        
       
        for(int i=3; i<=n ; i++)
        {
           
            string tmp = "";
            str = str+"&"; 
            int c = 1;  
            
          
            for(int j = 1; j<str.length(); j++)
            {
                // this condition should be satisfied, if not that means new number has started occurring
                if(str[j]!=str[j-1])
                {
                    tmp +=  to_string(c); 
                    tmp +=  str[j-1]; // add the data of the counter
                    c = 1; 
                }
                else
                    c++; // just count the freq of that number
            }
            
            // after one complete traversal, make str equal to temp;
            str = tmp;
        }
        return str;
    }
};