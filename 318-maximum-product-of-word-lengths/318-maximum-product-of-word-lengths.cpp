class Solution {
public:
    int maxProduct(vector<string>& words) {
        int n = words.size(), ans = 0;      
	vector<int> mask(n);              
	for(int i = 0; i < n; i++) {      // loop to get the bit mask of each word
		for(auto& ch : words[i])           
			mask[i] |= 1 << (ch - 'a');   // hash the word
		for(int j = 0; j < i; j++) // loop to check if the word is a subset of another word
			if((mask[i] & mask[j]) == 0)    
				ans = max(ans, int(size(words[i]) * size(words[j]))); // update the max product
	}    
	return ans; // return the max product
    }
};