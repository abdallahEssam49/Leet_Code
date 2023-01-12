class Solution {
public:
    void moveZeroes(vector<int>& a) {
        ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
        int j=0;
        int len = a.size();
        for(int i=0 ; i<len ; ++i)
        {
            if(a[i]!=0)
                a[j++] = a[i];
        }
        for(;j<len;++j)a[j]=0;
    }
};
