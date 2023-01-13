class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);

        vector < vector < int > > ret;
        vector < int > row;
        for(int i=0 ; i<numRows ; ++i)
        {
            // for evwry vector we will add 1 and update the vector
            // first vector will be 1 and second will be 1 1 this 2 vector won't be updated 
            // the 3rd will be 1 1 1 then after update will be 1 2 1 because  row[1] = row[1]+row[0] will be 2 
            // and so on 
            row.push_back(1);
            for(int j=i-1 ; j>0 ; --j)
            {
                row[j] = row[j]+row[j-1];
            }
            ret.push_back(row);
        }

        return ret; 
    }
};
