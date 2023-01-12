class Solution {
public:
    int firstBadVersion(int n) {
        
        int l = 1, r = n;
        while (l < r) {
            int m = l + (r - l) / 2;
            if (isBadVersion(m)) r = m; // m not m-1 since you may stand on First Bad Version if you sub 1 form mid you will miss out the answer.
            else l = m + 1; // m+1 not m this is the same logic of last line if you stand on mid it may be a good not bad 
        }
        return l;
    }
};
