Problem_Link : https://leetcode.com/problems/minimum-path-sum/
Profile : https://leetcode.com/abdallahessam2029/

class Solution {
public:
    
    int solve(vector<vector<int>>& grid,int i,int j,int m,int n,vector<vector<int>>& dp){
        if(i==m and j==n)return grid[m][n];
        if(i>m || j>n)return 1000000;
        
        if(dp[i][j]!=-1)return dp[i][j];
        
        int Path1 =grid[i][j]+solve(grid,i+1,j,m,n,dp);
        int Path2 =grid[i][j]+solve(grid,i,j+1,m,n,dp);
        
        return dp[i][j]= min(Path1,Path2);
    }
    
    
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        return solve(grid,0,0,m-1,n-1,dp);
    }
};
