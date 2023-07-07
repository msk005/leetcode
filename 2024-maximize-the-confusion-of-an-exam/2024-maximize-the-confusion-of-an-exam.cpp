class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int n = answerKey.size();
        int start = 0;
        int end = 0;
        int t = 0, f = 0; 
        int ans = 0; 

        while (end < n) {
            
            if(answerKey[end] == 'T')
                t++;
            else if(answerKey[end] == 'F')
                 f++;
            
            while (t > k && f > k) {
                // If both counters exceed 'k', move the start pointer and adjust counters
                if (answerKey[start] == 'T')
                    t--;
                else
                    f--;
                
                start++;
            }

            ans = max(ans, end - start + 1); 
            end++;
        }

        return ans;
    }
};