class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int m = image.size(), n = image[0].size();
        DFS(image, sr, sc, m, n, image[sr][sc], newColor);
        return image;
    }
    
    void DFS(vector<vector<int>>& image, int r, int c, int m, int n, int target, int newColor){
        if(r < 0 || c < 0 || r == m || c == n || image[r][c] == newColor || image[r][c] != target) return;
        image[r][c] = newColor;
        int dx[] = {0,0,1,-1};
        int dy[] = {-1,1,0,0};
        for(int k=0 ; k < 4 ;++k)
            DFS(image, r + dx[k], c + dy[k] , m, n, target, newColor);
    }
};
