class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
      ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
      int len = nums.size();
      int left=0;
      int right=len-1;
      vector<int> ret(len,0);
      {
        for(int i=len-1; i>=0; i--)
        {
            if(abs(nums[left])> nums[right])
            {
                ret[i]= nums[left]*nums[left];
                left++;
            }
            else
            {
            ret[i]=nums[right]*nums[right];
            right--;
            }

        }
      }
        return ret;
    }
};
