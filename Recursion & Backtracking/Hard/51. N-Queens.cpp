Problem_Link : https://leetcode.com/problems/n-queens/
Profile : https://leetcode.com/abdallahessam2029/

class Solution {
public:
    
    vector<string>chess_board ;
    vector<vector < string > > ans ;
    
    bool valid(int row , int col ,int n)
    {
        int i,j ; 
        
        for(int i=0 ; i<col ; ++i)
        {
            if(chess_board[row][i] == 'Q')
                return false;
        }
        
        
        for(int i=row , j=col ; i >= 0 && j >= 0 ; i-- , j--)
        {
            if(chess_board[i][j] == 'Q')
                return false;
        }
        
        for(int i=row , j=col ; i < n && j >= 0 ; i++ , j--)
        {
            if(chess_board[i][j] == 'Q')
                return false;
        }
        
        return true;
    }
    
    void solve(int col , int n)
    {
        if(col == n )
        {
            ans.push_back(chess_board);
            return;
        }
        
        for (int i= 0 ; i <n ; ++i )
        {
            if(valid(i ,col , n))
            {
                chess_board[i][col] = 'Q';
                solve(col+1 , n);
                chess_board[i][col] = '.';
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        
        chess_board.resize(n);
        for(int i=0 ; i<n ; ++i)chess_board[i] = string(n , '.');
        solve(0 , n);
        return ans ;
    }
};
