class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        // lower_bound && upper_bound are a fantastic things i learned help you to solve problems with few lines
        int pos = lower_bound(nums.begin() , nums.end() , target) - nums.begin();
        return pos;

    }
};
