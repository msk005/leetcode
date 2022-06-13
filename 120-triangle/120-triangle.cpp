class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
       int n = triangle.size();
    vector<int> minim(triangle.back());
    for (int row = n-2; row >= 0; row--) // For each row
    {
        for (int i = 0; i <= row; i++) // Check its every 'node'
        {
            // Find the lesser of its two children, and sum the current value in the triangle with it.
            minim[i] = min(minim[i], minim[i+1]) + triangle[row][i]; 
        }
    }
    return minim[0]; 
    }
};