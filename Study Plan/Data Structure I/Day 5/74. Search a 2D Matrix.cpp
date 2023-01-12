class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
        int n = matrix.size();
        for(int i=0; i<n; ++i)
        {
          // Binary Search to every vector
            int start = 0 , end = matrix[i].size()-1;
            
            while(end >= start )
            {
                int mid = start + (end - start)/2;
                if(matrix[i][mid] == target)return true;
                else if(matrix[i][mid] > target)end=mid-1;
                else start = mid+1;
            }
        }

        return false;
    }
};

