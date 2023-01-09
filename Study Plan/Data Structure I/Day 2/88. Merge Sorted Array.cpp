Problem_Link : https://leetcode.com/problems/merge-sorted-array/
Profile : https://leetcode.com/abdallahessam2029/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        int i = m-1;
        int j = n-1;
        int k=m+n-1;
        while(j>=0){
            if(i>=0&&nums1[i]>nums2[j]){
                nums1[k--] = nums1[i--];
            }else{
                nums1[k--] = nums2[j--];
            }
        }

    }
};
