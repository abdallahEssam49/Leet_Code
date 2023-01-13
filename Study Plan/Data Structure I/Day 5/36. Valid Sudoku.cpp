class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
        int n = board.size();
        vector<unordered_map<char, int>>row(n);
        vector<unordered_map<char, int>>col(n);
        vector<vector<unordered_map<char, int>>>sub(n/3, vector<unordered_map<char, int>>(n/3));
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++){
                char c = board[i][j];
                if(c == '.') continue;
                if(row[i][c]++ > 0 || col[j][c]++ > 0 || sub[i/3][j/3][c]++ > 0) return false;
            }
        return true;
    }
};

// Another Solution

class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
        vector<set<int>> rows(9);
        vector<set<int>> cols(9);
        int blocks[3][3][10] = {0};

        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {

                if (board[i][j] == '.')
                {
                    continue;
                }

                int curr = board[i][j] - '0';

                if (rows[i].count(curr) || cols[j].count(curr) ||
                    blocks[i / 3][j / 3][curr] != 0)
                {
                    return false;
                }

                rows[i].insert(curr);
                cols[j].insert(curr);
                blocks[i / 3][j / 3][curr] = curr;
            }
        }
        return true;
    }
};
