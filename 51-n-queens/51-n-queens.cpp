class Solution {
public:
    vector<vector<string>>ans;
    void solve(int col,vector<string> &board,vector<int>&leftRow, vector<int>&upDiag, vector<int>&loDiag,int n)
    {
        if(col==n)
        {
            ans.push_back(board);
            return;
        }
        
        for(int row=0;row<n;row++)
        {
          
            if(!leftRow[row] and !loDiag[row+col] and !upDiag[n-1+col-row])
            {
                
                board[row][col]='Q';
                
                leftRow[row]=1;
                loDiag[row+col]=1;
                upDiag[n-1+col-row]=1;
                
                solve(col+1,board,leftRow,upDiag,loDiag,n);
                
                board[row][col]='.';
                
               leftRow[row]=0;
                loDiag[row+col]=0;
                upDiag[n-1+col-row]=0;
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<string>board(n);
        string s(n,'.');
        
        for(int i=0;i<n;i++)
        {
            board[i]=s;
        }
        
        vector<int>leftRow(n,0),upDiag(2*n-1,0),loDiag(2*n-1,0);
        
        solve(0,board,leftRow,upDiag,loDiag,n);
        return ans;
    }
};



//https://takeuforward.org/data-structure/n-queen-problem-return-all-distinct-solutions-to-the-n-queens-puzzle/