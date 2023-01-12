class Solution {
public:

    int search(vector<int>& nums, int target) {
        
        ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
         int start = 0 , end = nums.size()-1;
         while(end >= start)
         {
             int mid = start + (end - start)/2;
             if(target == nums[mid])return mid;
             else if(target < nums[mid])end = mid-1;
             else start = mid+1;
         }

         return -1;
    }
};
