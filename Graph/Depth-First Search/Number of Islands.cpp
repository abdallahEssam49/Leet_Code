Problem_Link : // https://leetcode.com/problems/number-of-islands/description/
Profile : https: // leetcode.com/abdallahessam2029/

class Solution {
public:
     void eraseIslands(vector<vector<char>>& grid, int i, int j) {
        int m = grid.size(), n = grid[0].size();
        if (i < 0 || i == m || j < 0 || j == n || grid[i][j] == '0') {
            return;
        }
        grid[i][j] = '0';
        int dx[] = {0,0,1,-1};
        int dy[] = {-1,1,0,0};
        for(int k=0 ; k < 4 ;++k)
            eraseIslands(grid, i + dx[k], j + dy[k]);
    }

    int numIslands(vector<vector<char>>& grid) {
        ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
        int m = grid.size(), n = m ? grid[0].size() : 0, islands = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '1') {
                    islands++;
                    eraseIslands(grid, i, j);
                }
            }
        }
        return islands;
    }
};
