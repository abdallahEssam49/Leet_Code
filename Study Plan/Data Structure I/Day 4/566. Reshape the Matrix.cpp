class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>> ret( r , vector<int> (c));
        if(m*n != r*c)
            return mat;
        queue<int>q;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                q.push(mat[i][j]);
            }
        }
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                ret[i][j] = q.front();
                q.pop();
            }
        }
        return ret;
    }
};
