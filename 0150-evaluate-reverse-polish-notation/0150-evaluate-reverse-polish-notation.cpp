class Solution {
public:
    int evalRPN(vector<string>& tokens) {
       string t = tokens.back();
        tokens.pop_back();
        if(t != "+" && t != "-" && t != "*" && t != "/") 
            return stoi(t);
        else
        {
           long int b = evalRPN(tokens);
            long int a = evalRPN(tokens);
            
            if(t == "+") 
                return a + b;
            
            else if(t == "-")
                return a - b;
            
            else if(t == "*")
                return a * b;
            
            else 
                return a / b;
        } 
    }
};