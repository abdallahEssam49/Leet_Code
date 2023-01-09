Problem_Link : https://leetcode.com/problems/unique-paths/description/
Profile : https://leetcode.com/abdallahessam2029/

class Solution {
public:
    
    int solve(int n , int m , int row , int col , vector<vector<int>>&dp)
    {
        ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
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


// Another Solution using Tabulation
https://www.geeksforgeeks.org/tabulation-vs-memoization/

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, 1));
        
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }
        return dp[m - 1][n - 1];
        
    }
};
