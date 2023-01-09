Problem_Link : // https://leetcode.com/problems/number-of-islands/description/
Profile : https: // leetcode.com/abdallahessam2029/

class Solution {
public:
     void Solve(vector<vector<char>>& grid, int i, int j) {
        int m = grid.size(), n = grid[0].size();
        if (i < 0 || i == m || j < 0 || j == n || grid[i][j] == '0') {
            return;
        }
        grid[i][j] = '0';
        int dx[] = {0,0,1,-1};
        int dy[] = {-1,1,0,0};
        for(int k=0 ; k < 4 ;++k)
            Solve(grid, i + dx[k], j + dy[k]);
    }

    int numIslands(vector<vector<char>>& grid) {
        ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
        int m = grid.size(), n = m ? grid[0].size() : 0, islands = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '1') {
                    islands++;
                    Solve(grid, i, j);
                }
            }
        }
        return islands;
    }
};


// Another Solution using memoization

class Solution {
int solve(vector<vector<char>>& grid,int i,int j,vector<vector<int>> &dp){
    int m=grid.size();
    int n=grid[0].size();
    if(i<0 || j<0 || i>=m || j>=n || grid[i][j]=='0') return 0;
    
    if(dp[i][j]!= -1) return dp[i][j];
    grid[i][j]='0';
  
  return dp[i][j] = 1+solve(grid,i+1,j,dp)+solve(grid,i-1,j,dp)+solve(grid,i,j-1,dp)+solve(grid,i,j+1,dp);

}
public:
    int numIslands(vector<vector<char>>& grid){
        ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
        int m=grid.size();
        int n=grid[0].size(),len=0;
       vector<vector<int>> dp(m,vector<int>(n,-1));
        for(int i=0;i<m;i++){
         for(int j=0;j<n;j++){
             if(grid[i][j]=='1'){
               if(solve(grid,i,j,dp)>=1)
                len++;  
             }
            
         }  
        }
        return len;
    }
};
