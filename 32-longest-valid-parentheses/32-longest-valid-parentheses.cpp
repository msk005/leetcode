class Solution {
public:
    int longestValidParentheses(string s) {
       stack<int> st;
        
        int n = s.length();
        if(n == 0) return 0;
        int maxi = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '(')
                st.push(i);
            
            else
            {
                if(!st.empty()){
                    if(s[st.top()] == '('){
                        st.pop();
                        maxi = max(maxi, (st.empty() ? i + 1 : i - st.top()));
                    }
                    else{
                        st.push(i);
                    }
                }
                else st.push(i);
            }
        }
        return maxi;
    }
};