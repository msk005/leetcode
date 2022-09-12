class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());    
    int n = tokens.size(); 
    int gain = 0;              
    int score = 0, max_score = 0;
    int spend = n-1;       
    
    while(gain<=spend){
        
        if(power >= tokens[gain]){  
            score+=1;
            max_score = max(max_score,score); 
            power-=tokens[gain];
            gain++;
        }
        
        else if(score >= 1){        
            power += tokens[spend];
            score -= 1;
            spend--;
        }
        else
            break;                  
    }
    
    return max_score;
    

    }
};