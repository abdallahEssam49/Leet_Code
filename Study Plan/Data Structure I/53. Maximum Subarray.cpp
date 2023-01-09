Problem_Link : https://leetcode.com/problems/maximum-subarray/?envType=study-plan&id=data-structure-i
Profile : https://leetcode.com/abdallahessam2029/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        int max_so_far = -1e9;
        int max_ending_here = 0;
        int len = nums.size();
        for(int i=0 ; i<len ;++i)
        {
            max_ending_here+=nums[i];
            max_so_far = max (max_so_far , max_ending_here);
            if(max_ending_here<0)
                max_ending_here=0;
        }

        return max_so_far;
    }
};
