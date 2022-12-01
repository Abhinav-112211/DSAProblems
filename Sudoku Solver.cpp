class Solution {
    
public:
    bool isSafe(int row,int col,vector<vector<char>>& board,int value){
        for(int i=0;i<board[0].size();i++){
            if(board[row][i]==value)
                return false;
            if(board[i][col]==value)
                return false;
            if(board[3*(row/3)+i/3][3*(col/3)+i%3]==value)
                return false;
        }
        return true;
    }
public:
    bool solve(vector<vector<char>>& board){
        int n = board[0].size();
        for(int row=0;row<n;row++){
            for(int col=0;col<n;col++){
                if(board[row][col]=='.'){
                    for(char i='1';i<='9';i++){
                        if(isSafe(row,col,board,i)){
                            board[row][col]=i;
                            bool nextSol = solve(board);
                            if(nextSol){
                                return true;
                            }
                            else{
                                board[row][col]='.';
                            }
                        }
                    }
                    return false;
                }
                
            }
        }
        return true;
    }
public:
    void solveSudoku(vector<vector<char>>& sudoku) {
        solve(sudoku);
    }
};