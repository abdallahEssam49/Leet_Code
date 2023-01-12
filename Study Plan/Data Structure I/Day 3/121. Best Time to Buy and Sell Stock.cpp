class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
      ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
      int i = 0, j = 1;
      int ret = 0 , n = prices.size();
      while (j < n && i < n) {
        if (prices[i] > prices[j]) i = j;
        else ret = max(ret, prices[j] - prices[i]);
        j++;
      }
      return ret;

    }
};
