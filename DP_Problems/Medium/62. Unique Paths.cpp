Problem_Link : https://leetcode.com/problems/unique-paths/description/
Profile : https://leetcode.com/abdallahessam2029/

class Solution {
public:
    
    int solve(int n , int m , int row , int col , vector<vector<int>>&dp)
    {
        if (row == n and col == m)return 1;
        if (row > n or col > m)return 0;
        
        if(dp[row][col]!= -1)return dp[row][col];
        
        int path1 = solve(n , m , row+1 ,col , dp);
        int path2 = solve(n , m , row ,col+1 , dp);
        
        return dp[row][col] = path1 + path2;
    }
    
    int uniquePaths(int n , int m)
        {
            vector<vector<int>>dp(n+1 , vector<int>(m+1 ,-1));
            return solve(n , m , 1 ,1 , dp);
        }
};
