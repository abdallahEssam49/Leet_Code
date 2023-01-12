class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        int len1 = nums1.size() , len2 = nums2.size();

        int a[1005] = {0} , b[1005] = {0};
        for(int i=0 ; i<len1 ; ++i)a[nums1[i]]++;
        for(int i=0 ; i<len2 ; ++i)b[nums2[i]]++;

        vector < int > ret ; 

        for(int i=0 ;i<1005 ;++i)
        {
            if(a[i]&&b[i])
            {
                int range = (min(a[i] , b[i]));
                for(int j=0 ; j<range ; ++j)ret.push_back(i);
            }
        }

        return ret;
    }
};
